/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 14 de Setembro de 2020, 04:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float peso = 77, altura = 1.7;

    scanf("%f %f",&altura,&peso);

    float imc = (peso) / (altura * altura);

    if (imc < 20) {
        printf("Abaixo do peso");
    } else if (imc >= 20 && imc < 25) {
        printf("Peso Normal");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobre Peso");
    } else if (imc >= 30 && imc < 40) {
        printf("Obeso");
    } else {
        printf("Obeso Morbido");
    }

    return (EXIT_SUCCESS);
}

