/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 04:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (a >= b + c || b >= a + c || c >= a + b) {
        printf("Area = %.1f",((a+b)*c)/2);
    } else {
        printf("Perimetro = %.1f",a+b+c);
    }

    return (EXIT_SUCCESS);
}

