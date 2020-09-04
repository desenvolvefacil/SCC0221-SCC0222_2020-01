/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 21:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int anos, meses, dias;

    scanf("%d", &dias);

    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    dias = dias % 30;

    printf("%d ano(s)", anos);
    printf("\n%d mes(es)", meses);
    printf("\n%d dia(s)", dias);

    return (EXIT_SUCCESS);
}

