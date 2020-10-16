/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float v[5];
    
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%f",&v[i]);
    }
    
    int pos = 0;
    
    for (i = 1; i < 5; i++) {
        if(v[i]>v[pos]){
            pos = i;
        }
    }
    
    printf("%.1f\n%d",v[pos],pos);

    
    return (EXIT_SUCCESS);
}

