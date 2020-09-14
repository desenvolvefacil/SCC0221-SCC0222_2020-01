/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 8 de Setembro de 2020, 17:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int a=2,x=3, res = 1;
    
    scanf("%d %d",&a,&x);
    
    for (int i = 0; i < x ; i++) {
        res *=a;
    }

    printf("%d",res);
    
    return (EXIT_SUCCESS);
}

