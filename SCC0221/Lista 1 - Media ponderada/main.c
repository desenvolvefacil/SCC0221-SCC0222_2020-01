/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 20:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    float pesoA = 3.5/11;
    float pesoB = 7.5/11;

    float A = 0.0;
    float B = 0.0;

    scanf("%f", &A);
    scanf("%f", &B);

    printf("%.5f", A * pesoA + B * pesoB);

    return (EXIT_SUCCESS);
}

