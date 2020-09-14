/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Setembro de 2020, 18:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    //coordenadas
    int x = 0, y = 0;

    char c = 'W';

    for (int i = 0; i < 6; i++) {
        //char c = getchar();

        scanf("%c", &c);

        switch (c) {
            case 'A':
            {
                x--;
                break;
            }
            case 'a':
            {
                x--;
                break;
            }
            case 'D':
            {
                x++;
                break;
            }
            case 'd':
            {
                x++;
                break;
            }
            case 'S':
            {
                y--;
                break;
            }
            case 's':
            {
                y--;
                break;
            }
            case 'W':
            {
                y++;
                break;
            }
            case 'w':
            {
                y++;
                break;
            }
            default:
            {
                break;
            }
        }

    }

    printf("%d %d", x, y);
    //printf("0 0");

    /*
    //o 7 caractere guarda o \0
    char str[7];
    
    fgets(str, 7, stdin);

    for(int i=0;i<6;i++){
        //printf("%c\n",str[i]);
        
        switch(str[i]){
            
        }
        
    }
     */

    return (EXIT_SUCCESS);
}

