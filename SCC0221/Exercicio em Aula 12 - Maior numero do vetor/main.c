/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 06:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 2;

    scanf("%d", &n);

    int *v = calloc(n, sizeof (int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int maior = v[0];

    for (int i = 1; i < n; i++) {
        if (maior < v[i]) {
            maior = v[i];
        }
    }
    
    printf("%d",maior);

    return (EXIT_SUCCESS);
}

