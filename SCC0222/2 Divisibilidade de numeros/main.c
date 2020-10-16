/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 23 de Setembro de 2020, 02:40
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 31

/*
 * 
 */
int main(int argc, char** argv) {

    int v[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < (TAMANHO - 1); i++) {
        if (v[i]%v[TAMANHO-1]==0){
            printf("%d\n",v[i]);
        }
    }

    return (EXIT_SUCCESS);
}

