/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 23 de Setembro de 2020, 03:18
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int tamanho = 3;

    int menor, maior;

    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++) {

        int num;
        scanf("%d", &num);

        if (i == 0) {
            menor = num;
            maior = num;
        } else if (menor > num) {
            menor = num;
        } else if (maior < num) {
            maior = num;
        }
    }

    printf("max: %d", maior);
    printf("\nmin: %d", menor);


    return (EXIT_SUCCESS);
}

