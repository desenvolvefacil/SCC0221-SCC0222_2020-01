/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 08:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 6, i = 2, j = 3;

    scanf("%d %d %d",&n,&i,&j);

    int total = 0;
    int num = 0;

    do {

        if (num % i == 0 || num % j == 0) {
            printf("%d\n", num);
            total++;
        }

        num++;

    } while (total < n);



    return (EXIT_SUCCESS);
}

