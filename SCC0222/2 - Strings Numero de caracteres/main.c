/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 13 de Outubro de 2020, 16:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
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

    //char * p = calloc(20, sizeof (char));
    char p[20], c;
    
    //getchar();
    fgets(p, 20, stdin);
    
    c =  p[0];
    
    fgets(p, 20, stdin);

    removerBarraN(p);
    
    
    //printf("%c\n%s",c,p);
   
    //exit(0);
    
    int cont = 0;
    
    int i;
    for (i = 0; i < 20 && p[i]!='\0'; i++) {
        
        if(c==p[i]){
            cont++;
        }

    }

    printf("%d",cont);

    return (EXIT_SUCCESS);
}

