/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 21:18
 */

#include <stdio.h>
#include <stdlib.h>

#define COMISSAO 0.15

/*
 * 
 */
int main() {

    double salario, totalVendas;

    scanf("%lf", &salario);
    scanf("%lf",&totalVendas);

    printf("%.2lf", salario + totalVendas * COMISSAO);

    return (EXIT_SUCCESS);
}

