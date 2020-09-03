/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 20:31
 */

#include <stdio.h>
#include <stdlib.h>


#define PI 3.14159

/*
 * 
 */
int main() {

    double raio = 0.0;
    
    scanf("%lf",&raio);
    
    printf("%.4lf",(raio*raio)*PI);
    
    return (EXIT_SUCCESS);
}

