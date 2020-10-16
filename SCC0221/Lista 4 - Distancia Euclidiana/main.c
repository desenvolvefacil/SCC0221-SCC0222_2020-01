/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float v1[3],v2[3];
    
    int i;
    for (i = 0; i < 3; i++) {
        scanf("%f",&v1[i]);
    }

    for (i = 0; i < 3; i++) {
        scanf("%f",&v2[i]);
    }
    
    float soma = 0.0;
    
    for (i = 0; i < 3; i++) {
        soma+= (float)pow(v1[i]-v2[i],2);
    }
    
    printf("%.6f",sqrt(soma));
    
    return (EXIT_SUCCESS);
}

