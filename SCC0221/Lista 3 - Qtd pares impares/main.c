/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 07:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 0, par = 0, impar = 0;

    do {
        scanf("%d", &num);

        if (num > 0) {
            if (num % 2 == 0) {
                par++;
            } else {
                impar++;
            }
        }

    } while (num > 0);
    
    printf("%d\n",impar);
    printf("%d",par);

    return (EXIT_SUCCESS);
}

