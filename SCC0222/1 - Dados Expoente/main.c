/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 23:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    
    float A,B;
    
    scanf("%f %f",&A,&B);
    
    float total = 1;
    
    for(int i=0;i<B;i++){
        total *=A;
    }
    
    printf("%.4f",total);
    
    return (EXIT_SUCCESS);
}

