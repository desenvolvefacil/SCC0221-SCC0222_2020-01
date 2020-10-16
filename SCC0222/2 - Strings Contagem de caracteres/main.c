/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 13 de Outubro de 2020, 16:18
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removerBarraN(char * s) {
    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
        }
        if (s[i] == '\r') {
            s[i] = '\0';
        }
    }

}

/*
 * 
 */
int main(int argc, char** argv) {

    //char *p1 = calloc(20, sizeof (char));
    char p1[20];
    int cont = 0;
    fgets(p1, 20, stdin);

    removerBarraN(p1);

    int i;
    for (i = 0; i < 20 && p1[i] != '\0'; i++) {

        int existe = 0;

        int j;
        for (j = 0; j < i ; j++) {
            if (p1[i] == p1[j]) {
                existe = 1;
                break;
            }
        }

        if (existe == 0) {
            cont++;
        }

    }

    printf("%d", cont);

    return (EXIT_SUCCESS);
}

