/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 4 de Setembro de 2020, 19:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);


    if (C < B) {
        int aux = C;
        C = B;
        B = aux;
    }

    if (B < A) {
        int aux = A;
        A = B;
        B = aux;
    }

    if (C < B) {
        int aux = C;
        C = B;
        B = aux;
    }

    printf("%d %d %d", A, B, C);


    return (EXIT_SUCCESS);
}

