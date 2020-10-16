/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 07:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int ini = 10, fim = 99999;

    int qtd = 0;
    
    //scanf("%d %d",&ini,&fim);

    for (int i = ini; i <= fim; i++) {
        if (i % 7 == 0) {
            qtd++;
        }
    }

     printf("%d\n", qtd);
    
    return (EXIT_SUCCESS);
}

