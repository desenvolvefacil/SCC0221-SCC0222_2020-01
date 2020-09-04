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

    float A = 5.3, B = 5.6, C = 5.4, D = 5.5;

    scanf("%f %f %f %f", &A, &B, &C, &D);

    float minimo = MIN(A, MIN(B, MIN(C, D)));

    printf("%.4f", (A + B + C + D - minimo) / 3);

    return (EXIT_SUCCESS);
}

