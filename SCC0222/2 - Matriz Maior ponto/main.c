/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 08:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {


    int i, x, y;

    float media = 0;
    int xm, ym;

    for (i = 0; i < 5; i++) {

        scanf("%d %d", &x, &y);

        if ((x + y) / 2.0 > media) {
            media = (x + y) / 2.0;
            xm = x;
            ym = y;
        }

    }

    printf("%.2f %d %d", media, xm, ym);

    return (EXIT_SUCCESS);
}

