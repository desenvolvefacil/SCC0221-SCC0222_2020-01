/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 22:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a,b) b<a?b:a

/*
float arredondar(float valor) {
    float  arredondado = valor;
    arredondado *= (float)(pow(10, 1));

    arredondado = (float)ceil(arredondado);

    arredondado /= (pow(10, 1));
    return arredondado;
}
*/

/*
 * 
 */
int main() {

    double A = 2492.35, B = 2492.32, C = 2492.34, D = 2492.33;

    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);//2492.35 2492.32 2492.32 2492.33

    float minimo = MIN(C, D);
    
    minimo = MIN(B,minimo);
    
    minimo = MIN(A,minimo);

    printf("%.4f", (- minimo + A + B + C + D ) / 3);
    
    //printf("\n\n%.4f", ( A  + C + D ) / 3);

    return (EXIT_SUCCESS);
}

