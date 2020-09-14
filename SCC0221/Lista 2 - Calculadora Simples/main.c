/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 03:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float n1 = 5, n2 = 6;
    int op = 10;

    scanf("%f %f %d", &n1, &n2, &op);

    switch (op) {
        case 1:
        {
            printf("%.1f",n1 + n2);
            break;
        }
        case 2:
        {
            printf("%.1f",n1 - n2);
            break;
        }
        case 3:
        {
            printf("%.1f",n1 * n2);
            break;
        }
        case 4:
        {
            if (n2 != 0) {
                printf("%.1f",n1 / n2);
            } else {
                printf("-1");
            }
            break;
        }
        default:
        {
            printf("-1");
            break;
        }
    }


    return (EXIT_SUCCESS);
}

