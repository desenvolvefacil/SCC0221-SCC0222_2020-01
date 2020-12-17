/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao - DesenvolveFacil.com.br
 *
 * Created on 19 de Novembro de 2020, 16:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <wchar.h>

//#define TAMANHO 20
#define TAMANHO 150

//globais
//vetor de pontos (X Y)
float pontosX[TAMANHO];
float pontosY[TAMANHO];

//matriz com os tipos
char tipos[TAMANHO][15];

//matriz com a classificação atual
int grupo[TAMANHO];

//vetores para os X e Y dos grupos
float * grupoX = NULL;
float * grupoY = NULL;

FILE * abrirArqivo(char * nomeArquivo, char * modo) {

    FILE * file = fopen(nomeArquivo, modo);


    return file;
}

void fecharArquivo(FILE * arquivo) {
    fclose(arquivo);
    free(arquivo);
    arquivo = NULL;
}

int lerInt() {
    int i;

    scanf("%d", &i);

    return i;
}

void lerDadosArquivo(FILE *f) {

    //pula a primeira linah do cabeçalho
    char buff[500];
    char * linha = fgets(buff, 500, f);

    char * tmp = NULL;

    int i;
    for (i = 0; i < TAMANHO; i++) {

        //float x, y;

        fgets(linha, 500, f);

        //le o valor de X
        tmp = (char *) strsep(&linha, ",");
        pontosX[i] = atof(tmp);

        //le o valor de Y
        tmp = strsep(&linha, ",");
        pontosY[i] = atof(tmp);

        //pega o tipo
        tmp = strsep(&linha, "\"");
        tmp = strsep(&linha, "\"");
        strncpy(tipos[i], tmp, 15);

        //printf("%d\n", i);

    }

    fecharArquivo(f);


}

float distancia(float X1, float Y1, float X2, float Y2) {
    /*X1*=100;
    Y1*=100;
    X2*=100;
    Y2*=100;*/

    float distancia = pow(X1 - X2, 2) + pow(Y1 - Y2, 2);

    distancia = sqrtf(distancia);

    if (distancia < 0) {
        distancia = -distancia;
    }

    return distancia;
}

char * floatToChar(float val) {
    char * array = calloc(4, sizeof (char));
    snprintf(array, sizeof (array), "%.2f", val);
    return array;
}

char * intToChar(int val) {
    char * array = calloc(4, sizeof (char));
    snprintf(array, sizeof (array), "%d", val);
    return array;
}

int main(int argc, char** argv) {

    //char* nome = lerString();

    FILE * f = abrirArqivo("iris_petalas.csv", "r");

    if (f == NULL) {
        printf("Erro ao abrir arquivo");
    } else {

        lerDadosArquivo(f);

        //le a qtd de grupos
        int k = lerInt();

        //le a qtd de iterações
        int iteracoes = lerInt();

        //cria o vetor de grupos
        grupoX = (float *) calloc(k, sizeof (float));
        grupoY = (float *) calloc(k, sizeof (float));

        //seleciona pontos aleatorios pra iniciar
        int i, j, l;
        for (i = 0; i < k; i++) {
            int selecionado = rand() % TAMANHO;

            grupoX[i] = pontosX[selecionado];
            grupoY[i] = pontosY[selecionado];
        }

        //faz as iterações
        for (i = 0; i < iteracoes; i++) {

            //pega cada ponto
            for (j = 0; j < TAMANHO; j++) {

                float menorDistancia = 99999;

                //compara cada ponto com cada grupo
                for (l = 0; l < k; l++) {
                    float dist = distancia(pontosX[j], pontosY[j], grupoX[l], grupoY[l]);

                    //classifica o grupo de J
                    if (dist < menorDistancia) {
                        grupo[j] = l;

                        menorDistancia = dist;
                    }
                }
            }

            //faz a reclassificação dos grupos
            for (i = 0; i < k; i++) {
                //soma os pontos de X
                float somaX = 0.0;
                //soma os pontos de Y
                float somaY = 0.0;
                //qtd de pontos no grupo pra fazer a média
                int qtd = 0;

                //verifica se o elemento pertence ao grupo
                for (j = 0; j < TAMANHO; j++) {

                    if (grupo[j] == k) {
                        qtd++;
                        somaX += pontosX[j];
                        somaY += pontosY[j];
                    }

                    //novo valor =  média
                    //Corrigido agora
                    grupoX[i] = qtd == 0 ? 0 : somaX / qtd;
                    grupoY[i] = qtd == 0 ? 0 : somaY / qtd;
                }
            }
        }

        //grava o novo arquivo em disco
        FILE * novoArq = abrirArqivo("resultado.csv", "w+");

        char header[] = "\"petal.length\",\"petal.width\",\"variety\",\"group\"\n";

        fwrite(&header, sizeof (header), 1, novoArq);


        char vigula = ',';
        char pulaLinha = '\n';
        for (i = 0; i < TAMANHO; i++) {

            char * aux = floatToChar(pontosX[i]);
            fwrite(aux, sizeof (aux), 1, novoArq);

            fwrite(&vigula, sizeof (char), 1, novoArq);


            aux = floatToChar(pontosY[i]);
            fwrite(aux, sizeof (aux), 1, novoArq);
            fwrite(&vigula, sizeof (char), 1, novoArq);

            fwrite(tipos[i], sizeof (tipos[i]), 1, novoArq);
            fwrite(&vigula, sizeof (char), 1, novoArq);

            aux = intToChar(grupo[i]);
            fwrite(aux, sizeof (aux), 1, novoArq);
            fwrite(&pulaLinha, sizeof (char), 1, novoArq);

            //corrigido agora
            free(aux);
            aux = NULL;
        }


        fecharArquivo(novoArq);
    }

    //corrigido agora
    free(grupoX);
    grupoX = NULL;

    free(grupoY);
    grupoY = NULL;


    return (EXIT_SUCCESS);
}

