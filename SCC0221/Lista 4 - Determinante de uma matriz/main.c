/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int m[3][3];

    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }


    j = 0;
    k = 0;
    int valor = 1;
    int contador1 = 0;
    int contador2 = 0;
    int somaDireita = 0;

    for (i = 0; i <= (9); i++) {

        if (j == 3) {

            j = 0;
            contador2++;
            k = contador2;

        }

        if (k == 3)
            k = 0;

        valor = valor * m[j][k];

        j++;
        k++;
        contador1++;

        if (contador1 == 3) {

            somaDireita = somaDireita + valor;
            valor = 1;
            contador1 = 0;

        }


    }

    j = 0;
    k = 3 - 1;
    valor = 1;
    contador1 = 0;
    contador2 = 3 - 1;
    int somaEsquerda = 0;

    for (i = 0; i <= (9); i++) {

        if (j == 3) {

            j = 0;
            contador2--;
            k = contador2;

        }

        if (k < 0)
            k = 3 - 1;

        valor = valor * m[j][k];

        j++;
        k--;
        contador1++;

        if (contador1 == 3) {

            somaEsquerda += valor;
            valor = 1;
            contador1 = 0;

        }


    }

    int det = somaDireita + (somaEsquerda * (-1));

    printf("%d", det);


    return (EXIT_SUCCESS);
}

