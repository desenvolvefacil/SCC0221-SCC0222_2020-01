/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Outubro de 2020, 11:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int v[100];
    
    int i,j;
    for (i = 0; i < 100; i++) {
        scanf("%d",&v[i]);
        if(v[i]<=0){
            break;
        }
    }

    for(j=i-1;j>=0;j--){
        printf("%d\n",v[j]);
    }
    
    return (EXIT_SUCCESS);
}

