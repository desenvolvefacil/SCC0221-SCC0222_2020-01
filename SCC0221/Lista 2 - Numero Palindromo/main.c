/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 04:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int numero = 131;
    
    scanf("%d",&numero);

    if (numero >= 100 && numero <= 999) {

        int digito1 = numero % 10;
        int digito2 = numero / 100;
        
        if(digito1==digito2){
            printf("SIM");
        }else{
            printf("NAO");
        }

    } else {
        printf("INVALIDO");
    }

    return (EXIT_SUCCESS);
}

