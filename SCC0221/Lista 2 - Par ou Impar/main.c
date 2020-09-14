/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 04:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 2;

    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("PAR");
        } else {
            printf("IMPAR");
        }
    } else {
        printf("INVALIDO");
    }

    return (EXIT_SUCCESS);
}

