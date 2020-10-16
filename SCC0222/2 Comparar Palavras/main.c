/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 11:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

void upper(char *s) {
    int i;
    for (i = 0; i < strlen(s); i++) {
        s[i] = toupper(s[i]);
    }
}

int somaValores(char * s) {
    int total = 0;

    upper(s);

    int i;
    for (i = 0; i < strlen(s); i++) {

        total += s[i] - 65;

    }

    return total;
}

int contarLetras(char * s, char letra) {
    int total = 0;

    upper(s);
    letra = toupper(letra);

    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == letra) {
            total++;
        }
    }

    return total;
}

int verificaPosicao(char * s, char letra) {
    int posicao = -1;

    upper(s);
    letra = toupper(letra);

    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == letra) {
            posicao = i;
            break;
        }
    }

    return posicao;
}

/*
 * 
 */
int main(int argc, char** argv) {

    /*
    int letra = "Z"-65;
    
    printf("%d",letra);
    exit(0);
     */

    int opc = 1;

    char p1[100]; // = calloc(100, sizeof (char));
    char p2[100]; // = calloc(100, sizeof (char));

    scanf("%d", &opc);

    scanf("%s", p1);
    scanf("%s", p2);

    //getchar();

    //fgets(p1, 100, stdin); 



    //fgets(p2, 100, stdin);

    /*removerBarraN(p1);
    removerBarraN(p2);*/

    char letra[10];

    

    /*
    printf("%s\n%s\n%c", p1, p2, letra[0]);
    exit(0);
    */

    switch (opc) {
        case 1:
        {
            //printf("%s\n",p1);
            //printf("%d %d",(int)strlen(p1) , (int)strlen(p2));exit(0);

            if (strlen(p1) > strlen(p2)) {
                printf("1");
            } else if (strlen(p1) < strlen(p2)) {
                printf("2");
            } else {
                printf("0");
            }

            break;
        }
        case 2:
        {
            if (strcasecmp(p1, p2) < 0) {
                printf("1");
            } else if (strcasecmp(p1, p2) > 0) {
                printf("2");
            } else {
                printf("0");
            }

            break;
        }
        case 3:
        {
            int v1 = somaValores(p1);
            int v2 = somaValores(p2);

            if (v1 > v2) {
                printf("1");
            } else if (v2 > v1) {
                printf("2");
            } else {
                printf("0");
            }

            break;
        }
        case 4:
        {
            //char letra = getchar();
            scanf("%s", letra);

            int t1 = contarLetras(p1, letra[0]);
            int t2 = contarLetras(p2, letra[0]);

            if (t1 > t2) {
                printf("1");
            } else if (t2 > t1) {
                printf("2");
            } else {
                printf("0");
            }

            break;
        }
        case 5:
        {
            //char letra = getchar();
            scanf("%s", letra);

            int pos1 = verificaPosicao(p1, letra[0]);
            int pos2 = verificaPosicao(p2, letra[0]);

            /*printf("%s\n%s\n%c", p1, p2, letra);
            exit(0);*/


            if (pos1 < pos2) {
                printf("1");
            } else if (pos2 < pos1) {
                printf("2");
            } else {
                printf("0");
            }

            break;
        }
        default:
        {
            break;
        }
    }

    return (EXIT_SUCCESS);
}

