/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 22:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float A, B;
    char operador;

    scanf("%f %c %f", &A, &operador, &B);

    switch (operador) {
        case '+':
        {
            printf("%.6f", A + B);
            break;
        }
        case '-':
        {
            printf("%.6f", A - B);
            break;
        }
        case '*':
        {
            printf("%.6f", A * B);
            break;
        }
        case '/':
        {
            printf("%.6f", A / B);
            break;
        }
        case '%':
        {
            printf("%.6f", A * 100 / B);
            break;
        }
        default:{
            break;
        }
    }

    return (EXIT_SUCCESS);
}

