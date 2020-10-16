/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 09:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int valor = 2555;
    int troco = 0;

    scanf("%d",&valor);

    troco = valor / 100;
    valor = valor % 100;

    printf("O valor consiste em %d moedas de 1 real\n", troco);

    troco = valor / 50;
    valor = valor % 50;

    printf("O valor consiste em %d moedas de 50 centavos\n", troco);

    troco = valor / 25;
    valor = valor % 25;

    printf("O valor consiste em %d moedas de 25 centavos\n", troco);

    troco = valor / 10;
    valor = valor % 10;

    printf("O valor consiste em %d moedas de 10 centavos\n", troco);

    troco = valor / 5;
    valor = valor % 5;

    printf("O valor consiste em %d moedas de 5 centavos\n", troco);

    printf("O valor consiste em %d moedas de 1 centavo\n", valor);

    return (EXIT_SUCCESS);
}

