/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 12:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n, *v;

    scanf("%d", &n);

    v = calloc(n, sizeof (int));

    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }


    for (i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (v[i] < v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    return (EXIT_SUCCESS);
}

