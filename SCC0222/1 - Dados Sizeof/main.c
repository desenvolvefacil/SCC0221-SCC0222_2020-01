/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 4 de Setembro de 2020, 00:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    printf("%d\n", (int) sizeof ( char));
    printf("%d\n", (int) sizeof ( unsigned int));
    printf("%d\n", (int) sizeof ( short int));
    printf("%d\n", (int) sizeof ( int));
    printf("%d\n", (int) sizeof ( long int));
    printf("%d\n", (int) sizeof ( unsigned long int));
    printf("%d\n", (int) sizeof ( long long int));
    printf("%d\n", (int) sizeof ( float));
    printf("%d\n", (int) sizeof ( double));
    printf("%d", (int) sizeof ( long double));

    return (EXIT_SUCCESS);
}

