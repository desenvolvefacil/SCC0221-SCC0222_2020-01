/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao - DesenvolveFacil.com.br
 * https://github.com/desenvolvefacil/SCC0221-SCC0222_2020-01/tree/master/SCC0221/Trabalho-2
 * Created on 19 de Novembro de 2020, 16:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <wchar.h>

//#define TAMANHO 20
//#define TAMANHO 150

//globais


//vetores para os X e Y dos grupos
float * grupoX = NULL;
float * grupoY = NULL;

// tranformar em alocação dinamica as globais
// inserir nome de entrada e saida
// criar funçoes para moduliarizar os calculos

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

void lerDadosArquivo(FILE *f, char ** tipos, float * pontosX, float * pontosY, int tamanho) {

    //pula a primeira linah do cabeçalho
    char buff[500];
    char * linha = fgets(buff, 500, f);

    char * tmp = NULL;

    int i;
    for (i = 0; i < tamanho; i++) {

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

/**
 * Le uma nova linha de comando
 * @return nova linha de comando
 */
char * lerString() {
    //realoca memoria pra variavel comando
    char * comando = calloc(100, sizeof (char));
    fgets(comando, 100, stdin);

    //pega o tamnho do comando lido
    size_t ln = strlen(comando) - 1;

    //elimina o \n caso houver para ajudar e evitar erros no processamento
    //remove o enter e o carriage return
    if (comando[ln] == '\n') {
        comando[ln] = '\0';

        if (comando[ln - 1] == '\r') {
            comando[ln - 1] = '\0';
        }
    }

    return comando;
}

void escreverSaida(char * nomeArquivoSaida, float * pontosX, float * pontosY, char**tipos, int * grupo, int tamanho) {
    //grava o novo arquivo em disco
    FILE * novoArq = abrirArqivo(nomeArquivoSaida, "w+");

    char header[] = "\"petal.length\",\"petal.width\",\"variety\",\"group\"\n";

    fwrite(&header, sizeof (header), 1, novoArq);


    char vigula = ',';
    char pulaLinha = '\n';

    int i;
    for (i = 0; i < tamanho; i++) {

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

void selecionarPontosAleatorios(float * grupoX, float *grupoY, float*pontosX, float*pontosY, int k, int tamanho) {
    int i;
    for (i = 0; i < k; i++) {
        int selecionado = rand() % tamanho;

        grupoX[i] = pontosX[selecionado];
        grupoY[i] = pontosY[selecionado];
    }
}

void classificarPontos(float * pontosX, float * pontosY, float * grupoX, float * grupoY, int * grupo, int k, int tamanho) {
    //pega cada ponto
    int j;
    for (j = 0; j < tamanho; j++) {

        float menorDistancia = 99999;

        //compara cada ponto com cada grupo
        int l;
        for (l = 0; l < k; l++) {
            float dist = distancia(pontosX[j], pontosY[j], grupoX[l], grupoY[l]);

            //classifica o grupo de J
            if (dist < menorDistancia) {
                grupo[j] = l;

                menorDistancia = dist;
            }
        }
    }
}

void reclassificarGrupos(float * pontosX, float* pontosY, int * grupo, int k, int tamanho) {
    int i, j;
    for (i = 0; i < k; i++) {
        //soma os pontos de X
        float somaX = 0.0;
        //soma os pontos de Y
        float somaY = 0.0;
        //qtd de pontos no grupo pra fazer a média
        int qtd = 0;

        //verifica se o elemento pertence ao grupo
        for (j = 0; j < tamanho; j++) {

            if (grupo[j] == k) {
                qtd++;
                somaX += pontosX[j];
                somaY += pontosY[j];
            }

            //novo valor =  média
            //Corrigido agora
            if (qtd > 0) {
                grupoX[i] = somaX / qtd;
                grupoY[i] = somaY / qtd;
            }
        }
    }
}

int main(int argc, char** argv) {

    printf("Digite o nome do arquivo de entrada.\n");
    char * nomeArquivoEntrada = lerString();

    printf("Digite o nome do arquivo de saida.\n");
    char * nomeArquivoSaida = lerString();

    FILE * f = abrirArqivo(nomeArquivoEntrada, "r");

    printf("Digite a quantidade de linhas no arquivo.\n");
    int tamanho = lerInt();


    //vetor de pontos (X Y)
    float * pontosX = calloc(tamanho, sizeof (float));
    float * pontosY = calloc(tamanho, sizeof (float));

    //matriz com os tipos
    //char tipos[TAMANHO][15];
    char ** tipos = calloc(tamanho, sizeof (char));

    int i;
    for (i = 0; i < tamanho; i++) {
        tipos[i] = calloc(15, sizeof (char));
    }

    //matriz com a classificação atual
    int * grupo = calloc(tamanho, sizeof (int));

    if (f == NULL) {
        printf("Erro ao abrir arquivo");
    } else {

        lerDadosArquivo(f, tipos, pontosX, pontosY, tamanho);

        //le a qtd de grupos
        printf("Digite a quantidade de grupos desejados.\n");
        int k = lerInt();

        //le a qtd de iterações
        printf("Digite a quantidade de iterações desejados.\n");
        int iteracoes = lerInt();

        //cria o vetor de grupos
        grupoX = (float *) calloc(k, sizeof (float));
        grupoY = (float *) calloc(k, sizeof (float));

        //seleciona pontos aleatorios pra iniciar
        int i, j, l;
        selecionarPontosAleatorios(grupoX, grupoY, pontosX, pontosY, k, tamanho);

        //faz as iterações
        for (i = 0; i < iteracoes; i++) {

            //classifica os pontos aos grupos
            classificarPontos(pontosX, pontosY, grupoX, grupoY, grupo, k, tamanho);

            //faz a reclassificação dos grupos
            reclassificarGrupos(pontosX, pontosY, grupo, k, tamanho);

        }

        //escreve o arquivo de saida
        escreverSaida(nomeArquivoSaida, pontosX, pontosY, tipos, grupo, tamanho);

    }

    //corrigido agora
    free(grupoX);
    grupoX = NULL;

    free(grupoY);
    grupoY = NULL;

    free(nomeArquivoEntrada);
    nomeArquivoEntrada = NULL;

    free(nomeArquivoSaida);
    nomeArquivoSaida = NULL;

    free(pontosX);
    pontosX = NULL;

    free(pontosY);
    pontosY = NULL;



    for (i = 0; i < tamanho; i++) {
        free(tipos[i]);
    }


    free(tipos);
    //tipos = NULL;


    free(grupo);
    grupo = NULL;

    return (EXIT_SUCCESS);
}

