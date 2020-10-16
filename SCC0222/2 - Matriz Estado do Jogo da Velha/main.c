/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Carlao
 *
 * Created on 23 de Setembro de 2020, 03:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char m[3][3];

    char leitura[6];

    int empate = 1;

    for (int i = 0; i < 3; i++) {
        fgets(leitura, 8, stdin);

        m[i][0] = leitura[0];
        m[i][1] = leitura[2];
        m[i][2] = leitura[4];

        if (m[i][0] == '-' || m[i][1] == '-' || m[i][2] == '-') {
            empate = 0;
        }

    }

    char vencedor = 's';


    for (int i = 0; i < 3; i++) {
        if (m[i][0] != '-') {
            if (m[i][0] == m[i][1] && m[i][2] == m[i][1]) {
                vencedor = m[i][0];
            }
            if (m[0][i] == m[1][i] && m[2][i] == m[1][i]) {
                vencedor = m[i][0];
            }
        }
    }


    if (m[1][1] != '-') {
        if (m[0][0] == m[1][1] && m[1][1] == m[2][2]) {
            vencedor = m[0][0];
        }

        if (m[0][2] == m[1][1] && m[1][1] == m[2][0]) {
            vencedor = m[1][1];
        }
    }

    if (vencedor != 's') {
        printf("%c ganhou", vencedor);
    } else if (empate == 1) {
        printf("empate");
    } else {
        printf("em jogo");
    }

    return (EXIT_SUCCESS);
}

