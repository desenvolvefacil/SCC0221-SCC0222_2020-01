/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 04:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (a < b) {
        float aux = a;
        a = b;
        b = aux;
    }

    if (a < c) {
        float aux = a;
        a = c;
        c = aux;
    }

    float A2 = a*a;
    float B2 = b*b;
    float C2 = c*c;

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO");
    } else {

        if (A2 == B2 + C2) {
            printf("TRIANGULO RETANGULO");
        } else if (A2 > B2 + C2) {
            printf("TRIANGULO OBTUSANGULO");
        } else if (A2 < B2 + C2) {
            printf("TRIANGULO ACUTANGULO");
        }

        if (a == b && b == c) {
            printf("\nTRIANGULO EQUILATERO");
        } else if (a == b || a == c || c == b) {
            printf("\nTRIANGULO ISOSCELES");
        }
    }

    return (EXIT_SUCCESS);
}

