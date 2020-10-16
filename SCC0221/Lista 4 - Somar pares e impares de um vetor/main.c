/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 0, *m;

    scanf("%d", &n);

    m = calloc(n, sizeof (int));

    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    int pares = 0;
    int impares = 0;

    for (i = 0; i < n; i++) {
        if (m[i] % 2 == 0) {
            pares += m[i];
        } else {
            impares += m[i];
        }
    }

    printf("%d\n%d", pares, impares);

    return (EXIT_SUCCESS);
}

