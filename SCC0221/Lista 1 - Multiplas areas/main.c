/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 21:26
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

/*
 * 
 */
int main() {

    float A, B, C;

    scanf("%f %f %f", &A,&B,&C);
    

    printf("%.3f", (A * C) / 2);
    printf("\n%.3f", PI * (C * C));
    printf("\n%.3f", ((A + B) * C) / 2);
    printf("\n%.3f", B * B);
    printf("\n%.3f", A * B);

    return (EXIT_SUCCESS);
}

