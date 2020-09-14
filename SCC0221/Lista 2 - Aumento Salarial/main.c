/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 03:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float salario = 800.01, percentual = 0.0;

    scanf("%f",&salario);

    if (salario > 0 && salario <= 400) {
        percentual = 0.15;
    } else if (salario > 400 && salario <= 800) {
        percentual = 0.12;
    } else if (salario > 800 && salario <= 1200) {
        percentual = 0.10;
    } else if (salario > 1200 && salario <= 2000) {
        percentual = 0.07;
    } else {
        percentual = 0.04;
    }

    printf("Novo salario: %0.2f", salario + salario * percentual);
    printf("\nReajuste ganho: %0.2f", salario * percentual);
    printf("\nEm percentual: %.0f %%", percentual * 100);


    return (EXIT_SUCCESS);
}

