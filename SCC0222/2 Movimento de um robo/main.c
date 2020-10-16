/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 08:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char *cmd = calloc(200, sizeof (char));

    fgets(cmd, 200, stdin);

    //printf("%s", c1);

    int direcao = 0; //norte

    int i;
    for (i = 0; i < strlen(cmd); i++) {
        switch (cmd[i]) {
            case 'D':
            {
                direcao++;
                break;
            }
            case 'E':
            {
                direcao--;
                break;
            }
            default:
            {
                break;
            }
        }
    }

    direcao = direcao % 4;

    if (direcao < 0) {
        direcao += 4;
    }

    switch (direcao) {
        case 0:
        {
            printf("Norte");
            break;
        }
        case 1:
        {
            printf("Leste");
            break;
        }
        case 2:
        {
            printf("Sul");
            break;
        }
        case 3:
        {
            printf("Oeste");
            break;
        }
        default:
        {
            break;
        }
    }

    return (EXIT_SUCCESS);
}

