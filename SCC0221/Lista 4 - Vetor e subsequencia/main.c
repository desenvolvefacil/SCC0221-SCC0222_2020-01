/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int v[5] = {2, 3, 6, 7, 5};
    int s[3] = {3, 6, 5};


    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &v[i]);

    }

    for (i = 0; i < 3; i++) {
        scanf("%d", &s[i]);
    }


    int ehSub = 3;



  
    for (i = 0; i < 3; i++) {
        if (s[0] == v[i] && s[1] == v[i+1]&&s[2] == v[i+2]) {
            ehSub = 0;
            break;
        }
    }



    printf(ehSub > 0 ? "NAO" : "SIM");

    return (EXIT_SUCCESS);
}

