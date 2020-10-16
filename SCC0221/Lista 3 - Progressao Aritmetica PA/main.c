/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 28 de Setembro de 2020, 07:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 4, razao = 2;

    //scanf("%d %d", &num, &razao);

    for (int i = 0; i < 6; i++) {
        
        printf("%d ", num);
        
        num+=razao;
    }

    

    return (EXIT_SUCCESS);
}

