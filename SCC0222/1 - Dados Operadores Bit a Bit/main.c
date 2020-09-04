/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 23:28
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 32

/*
 * 
 */
int main() {

    int n1 = 369;
    int n2 = 24;
    
    scanf("%d %d",&n1,&n2);

    printf("%d", n1 & n2); //and
    
    printf("\n%d", n1 | n2); //or
    printf("\n%d", n1 ^ n2); //or exclusive

    printf("\n%d", ~n1); //complement n1
    printf("\n%d", ~n2); //complement n2

    printf("\n%d", n1 >> 2); //shift right n1
    printf("\n%d", n2 << 2); //shift left n2

    return (EXIT_SUCCESS);
}

