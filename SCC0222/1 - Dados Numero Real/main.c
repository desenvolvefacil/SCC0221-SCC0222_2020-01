/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 23:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main() {

    float numero;

    scanf("%f", &numero);

    printf("%d", (int) floor(numero));
    printf("\n%.4f", numero - floor(numero));
    printf("\n%d", (int) round(numero));

    return (EXIT_SUCCESS);
}

