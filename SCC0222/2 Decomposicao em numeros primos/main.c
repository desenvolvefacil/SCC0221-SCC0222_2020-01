/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 23 de Setembro de 2020, 02:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397};


    int numero = 50;

    scanf("%d", &numero);

    int indice = 0;
    int cont = 0;

    while (numero >= 1) {

        if (numero % primos[indice] == 0) {

            numero = numero / primos[indice];

            cont++;



        } else {
            if (cont > 0) {
                printf("%d %d\n", primos[indice], cont);
            }

            cont = 0;
            indice++;

            if (numero == 1) {
                numero = 0;
            }

        }

    }

    return (EXIT_SUCCESS);
}

