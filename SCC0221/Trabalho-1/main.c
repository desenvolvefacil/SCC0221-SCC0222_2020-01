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

void lerDados(float **m, int linhas, int colunas) {

}

void liberarMemoria(float **m, int linhas) {
    int i;

    if (m == NULL) return;

    for (i = 0; i < linhas; i++) {
        //libera as colunas da linha
        free(m[i]);
    }

    //libera a linhas
    free(m);

    return;
}

//faz a alocação dinamica da matriz

float ** criarMatriz(int linhas, int colunas) {

    float **m = calloc(linhas, sizeof (float));

    if (m == NULL) {
        printf("Falta de Memoria 1");
        exit(EXIT_FAILURE);
    }

    int i, j;
    for (i = 0; i < linhas; i++) {
        m[i] = calloc(colunas, sizeof (float));

        if (m[i] == NULL) {
            printf("Falta de Memoria 2");
            exit(EXIT_FAILURE);
        }
    }


    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            m[i][j] = 0;
        }
    }

    return m;
}

void mostrarMatriz(float **m, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    float **m;
    int colunas = 0, linhas = 4;

    //faz a leitura do número de colunas
    do {
        printf("Digite o numero de sintomas e exames (de 3 a 7): ");
        scanf("%d", &colunas);

    } while (colunas < 3 || colunas > 7);

    //cria a matriz
    m = criarMatriz(linhas, colunas);

    lerDados(m, linhas, colunas);

    int i, j;

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




    liberarMemoria(m, linhas);

    return (EXIT_SUCCESS);
}

