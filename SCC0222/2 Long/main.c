/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 18:00
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */


int main(int argc, char** argv) {

    unsigned long num = 123444789;
    
    scanf("%ld",&num);
    
    int i;
    for (i = 0; i < 8; i++) {
        
        int a = num % 256;
        num /=256;

        printf("%x\n",a);
    }

    
    
    return (EXIT_SUCCESS);
}

