/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 07:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 10;
    int soma = 0;

    scanf("%d", &num);

    int sim = 0;

    for (int i = 1; i < num; i++) {

        if (num % i == 0) {
            soma += i;
        }

        if (soma == num) {
            sim = 1;
            break;
        }

    }

    if (sim == 1) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    return (EXIT_SUCCESS);
}

