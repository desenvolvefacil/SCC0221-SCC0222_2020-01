/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 3 de Setembro de 2020, 22:52
 */

#include <stdio.h>
#include <stdlib.h>

#define ehRetangulo(a,b,c) a*a+b*b==c*c
#define valida(a,b,c) a!=0 && b!=0 && c!=0

/*
 * 
 */
int main() {

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);


    printf(valida(A, B, C)&&(ehRetangulo(A, B, C) || ehRetangulo(A, C, B) || ehRetangulo(C, B, A)) ? "SIM" : "NAO");

    return (EXIT_SUCCESS);
}

