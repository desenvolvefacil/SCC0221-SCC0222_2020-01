/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int m[2][3];

    m[0][0] = 4;
    m[0][1] = 2;
    m[0][2] = 1;
    m[1][0] = 5;
    m[1][1] = 4;
    m[1][2] = 2;


    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }


    return (EXIT_SUCCESS);
}

