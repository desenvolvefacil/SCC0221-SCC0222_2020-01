/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 07:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n1 = 0;
    int n2 = 1;

    printf("%d %d ", n1, n2);

    int i;
    for (i = 0; i < 14; i++) {
        int aux = n2;
        n2 += n1;
        n1 = aux;

        printf("%d ", n2);

    }


    return (EXIT_SUCCESS);
}

