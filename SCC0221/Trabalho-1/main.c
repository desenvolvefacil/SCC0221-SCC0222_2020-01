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

//https://edisciplinas.usp.br/pluginfile.php/5709774/mod_resource/content/1/trabalho1.pdf

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

    int i, j;
    for (i = 0; i < linhas; i++) {
        m[i] = calloc(colunas, sizeof (float));
    }

    /*
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            m[i][j] = i + j;
        }
    }
     * */
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
    int colunas = 0, linhas = 3;

    //faz a leitura do número de colunas
    do {
        printf("Digite o número de sintomas e exames (de 3 a 7): ");
        scanf("%d", &colunas);

    } while (colunas < 3 || colunas > 7);

    //cria a matriz
    m = criarMatriz(linhas, colunas);

    int i, j;




    liberarMemoria(m,linhas);
    
    return (EXIT_SUCCESS);
}

