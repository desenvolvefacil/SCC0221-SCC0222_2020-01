/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 07:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 0;

    int maior = 0, menor = 0;

    do {
        scanf("%d", &num);

        if (num > 0) {
            if (maior < num) {
                maior = num;
            }

            if (menor > num || menor == 0) {
                menor = num;
            }
        }
    } while (num > 0);

    printf("%d\n", maior);
    printf("%d", menor);

    return (EXIT_SUCCESS);
}

