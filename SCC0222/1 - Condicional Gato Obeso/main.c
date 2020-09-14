/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 9 de Setembro de 2020, 03:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int bola = 12, mordida = 30;

    scanf("%d %d", &bola, &mordida);


    bola *= 5;
    mordida *= 3;

    //printf("%d %d",bola,mordida);
    
    int res = bola - mordida;

    if (res >= 30) {
        printf("P");
    } else if ( res >= 0 && res < 30) {
        printf("B");
    } else {
        printf("R");
    }

    return (EXIT_SUCCESS);
}

