/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 09:02
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

    char *p1 = calloc(20, sizeof (char));
    char *p2 = calloc(20, sizeof (char));

    fgets(p1, 20, stdin);
    fgets(p2, 20, stdin);

    //remove o \n
    removerBarraN(p1);
    removerBarraN(p2);

    if (strcmp(p1, p2) == 0) {
        printf("iguais");
    } else {
        if (strlen(p1) + strlen(p2) <= 20) {
            strcat(p1, p2);
        } else {
            p1 = (char *) realloc(p1, (strlen(p1) + strlen(p2)));
            strcat(p1, p2);
        }

        printf("%s", p1);
    }

    return (EXIT_SUCCESS);
}

