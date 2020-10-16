/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 09:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int cores[5] = {0, 0, 0, 0, 0};
    int img[25];

    int i;
    for (i = 0; i < 25; i++) {

        scanf("%d", &img[i]);

        cores[img[i]]++;
    }

    int maior = 0;
    int valMaior = 0;

    for (i = 0; i < 5; i++) {
        printf("%d: |", i);

        int j;
        for (j = 0; j < cores[i]; j++) {
            printf("#");
        }

        printf("\n");

        if (cores[i] > valMaior) {
            maior = i;
            valMaior = cores[i];
        }
    }

    for (i = 0; i < 25; i++) {
        if(img[i]==maior){
            printf("%d\n",i);
        }
    }



    return (EXIT_SUCCESS);
}

