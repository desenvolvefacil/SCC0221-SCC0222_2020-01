/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 4 de Setembro de 2020, 00:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int a1 = 1, r = 1, n = 100000;

    scanf("%d %d %d", &a1, &r, &n);

    long long soma = 0;

    int an = 0;

    for (int i = 1; i <= n; i++) {
        an = a1 + (i - 1) * r;

        soma += an;
        
    }

    //an = a1 + (n – 1)r

    printf("%d", an);
    printf("\n%lld", soma);

    return (EXIT_SUCCESS);
}

