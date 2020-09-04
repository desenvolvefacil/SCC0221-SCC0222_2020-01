/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 4 de Setembro de 2020, 01:12
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float a1 = 1, q = 2, n = 20, soma = 0, an = 0;

    scanf("%f %f %f", &a1, &q, &n);

    for (int i = 1; i <= n; i++) {
        //an = a1·q ^(n – 1)
        an = a1 * (pow(q, i - 1));
        soma += an;

    }

    printf("%.2f", an);
    printf("\n%.2f", soma);

    return (EXIT_SUCCESS);
}

