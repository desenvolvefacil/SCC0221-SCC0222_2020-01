/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 09:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int i, mes = 0;
    float valor = 0.0, v;
    for (i = 1; i < 13; i++) {

        scanf("%f", &v);

        if (mes == 0 || valor<v) {
            mes = i;
            valor = v;
        }
    }


    printf("%d %.2f", mes, valor);

    return (EXIT_SUCCESS);
}

