/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 08:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int ini = 10, fim = 100;

    int i, ehPrimo = 0;

    for (i = ini; i <= fim; i++) {

        ehPrimo = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }

        if (ehPrimo == 1) {
            printf("%d ", i);
        }
    }


    return (EXIT_SUCCESS);
}

