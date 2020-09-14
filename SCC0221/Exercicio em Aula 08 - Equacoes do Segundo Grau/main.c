/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 9 de Setembro de 2020, 22:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float a = 2, b = 3, c = 0;

    scanf("%f %f %f",&a,&b,&c);
    
    float delta = (b * b) - 4 * a*c;

    if (delta < 0) {
        printf("Delta Negativo");
    }else{
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        
        printf("%.1f\n%.1f",x1,x2);
    }

    return (EXIT_SUCCESS);
}

