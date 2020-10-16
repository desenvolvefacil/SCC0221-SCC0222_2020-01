/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 23 de Setembro de 2020, 02:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char letra;

    fgets(&letra, 100, stdin);
    //char palavra[100] = "banana";
    //char palavra_original[100] = "";

    char * palavra = calloc(100, sizeof (char));
    
    //letra = palavra[0];
    
    fgets(palavra, 100, stdin);

    char * palavra_original = calloc(100, sizeof (char));
    
    strcpy(palavra_original, palavra);

    int trocas = 0;
    
    //printf("%c %s",letra, palavra);
    

    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra) {
            palavra[i] += i;

            trocas++;
        }
    }

    printf("Numero de trocas: %d", trocas);
    printf("\nNova palavra: %s", palavra);
    printf("\nPalavra original: %s", palavra_original);


    return (EXIT_SUCCESS);
}

