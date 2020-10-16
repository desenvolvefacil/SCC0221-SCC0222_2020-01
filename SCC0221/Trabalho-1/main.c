/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 15 de Outubro de 2020, 19:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//https://edisciplinas.usp.br/pluginfile.php/5709774/mod_resource/content/1/trabalho1.pdf

//https://github.com/desenvolvefacil/SCC0221-SCC0222_2020-01/tree/master/SCC0221/Trabalho-1

void imprimirMatriz(float m[11][7], int linhas, int colunas) {

    int i, j;

    printf("\n\n**************************\n\n");

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.1f  ", m[i][j]);
        }
        printf("\n");
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    int colunas = 0, linhas = 11, i, j;

    do {
        printf("Digite o numero pacientes (11): ");
        scanf("%d", &linhas);

    } while (linhas != 11);

    //faz a leitura do número de colunas
    do {
        printf("Digite o numero de sintomas e exames (de 3 a 7): ");
        scanf("%d", &colunas);

    } while (colunas < 3 || colunas > 7);

    //meu computador ta meio zuado
    float m[11][7];

    for (i = 0; i < linhas - 1; i++) {

        printf("Historico do Paciente %d\n", i + 1);

        for (j = 0; j < colunas; j++) {

            if (j != colunas - 1) {

                printf("Digite a entrada %d\n", j + 1);
                scanf("%f", &m[i][j]);

            } else {

                do {

                    printf("Digite o resultado do Paciente %d\n(1) Saudavel\n(-1) Doente\n", i + 1);
                    scanf("%f", &m[i][j]);

                } while (m[i][j] != 1 && m[i][j] != -1);

            }

        }
    }

    printf("Digite os dados do paciente a ser avaliado\n");

    for (j = 0; j < colunas - 1; j++) {
        printf("Digite a entrada %d\n", j + 1);
        scanf("%f", &m[linhas - 1][j]);
    }


    float menorDistancia = 0.0;
    int linhaMenorDistancia = 0;


    for (i = 0; i < linhas - 1; i++) {

        float distancia = 0.0;

        for (j = 0; j < colunas - 1; j++) {

            distancia += pow((m[i][j] - m[linhas - 1][j]), 2);

        }

        distancia = sqrtf(distancia);

        //printf("%f\n",distancia);

        if (i == 0 || distancia < menorDistancia) {
            menorDistancia = distancia;
            linhaMenorDistancia = i;
        }
    }

    //printf("%d",linhaMenorDistancia);

    printf("Analisando Dados\n\n");

    printf("O historico é bem proximo ao do paciente %d\n\n", linhaMenorDistancia + 1);
    printf("Provavel Resultado: \n");
    printf(m[linhaMenorDistancia][colunas - 1] == 1 ? "Saudavel\n\n" : "Doente\n\n");

    //imprimirMatriz(m, linhas, colunas);

    return (EXIT_SUCCESS);
}

