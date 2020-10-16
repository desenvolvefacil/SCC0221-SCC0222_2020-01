/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 06:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 2, m = 2;

    scanf("%d %d", &n, &m);

    int **v = calloc(n, sizeof (int));

    for (int i = 0; i < n; i++) {

        v[i] = calloc(m, sizeof (int));

        for (int j = 0; j < m; j++) {

            scanf("%d", &v[i][j]);

        }

    }


    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

