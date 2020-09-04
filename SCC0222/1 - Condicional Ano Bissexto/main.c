/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 21:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int ano;
    
    scanf("%d",&ano);
    
    printf(ano%4==0?"SIM":"NAO");
    
    return (EXIT_SUCCESS);
}

