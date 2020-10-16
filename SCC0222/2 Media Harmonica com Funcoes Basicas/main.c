/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 08:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */


int readInt(){
    int num;
    scanf("%d",&num);
    return num;
}

double readDouble(){
    double num;
    scanf("%lf",&num);
    return num;
}

void printDouble(double val){
    printf("%.2f",val);
}

int main(int argc, char** argv) {
    
    int qtd = readInt();
    
    //double *vet = calloc(qtd,sizeof(double));
    
    double media = 0.0;
    
    int i;
    for (i = 0; i < qtd; i++) {
        
        double num = readDouble();

        media += 1.0/(num+1.0);
    }

    media = qtd/media-1;
    
    printDouble(media);
    
    return (EXIT_SUCCESS);
}

