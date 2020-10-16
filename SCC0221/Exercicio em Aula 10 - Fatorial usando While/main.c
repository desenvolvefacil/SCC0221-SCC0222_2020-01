/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 16 de Setembro de 2020, 23:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 5, fat = 1;

    scanf("%d",&num);

    while (num > 1) {

        fat = fat*num;
        num--;
        
    }

    printf("%d",fat);
    
    return (EXIT_SUCCESS);
}

