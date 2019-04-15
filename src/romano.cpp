// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include "romano.hpp"
#include <string.h>

int converteNumeroRomano(char num_romano[]) {
    int num = 0, i = 0, num_atual, prox_num, cont_rep = 1;

    while (num_romano[i] != '\0') {
        num_atual = converteAlgarismo(num_romano[i]);
        prox_num = converteAlgarismo(num_romano[i+1]);

        if (num_atual == -1)
            return -1;

        if (prox_num > num_atual) {
            char restante[30];
            restanteDaString(num_romano, restante, i+1);
            if (prox_num == 2*num_atual || cont_rep > 1)  // Ex: VX e IIC
                return -1;
            if (converteNumeroRomano(restante) > num && strlen(restante) > 1)
                return -1;
            num -= num_atual;
            cont_rep = 1;
        } else {
            if (prox_num == num_atual) {
                switch (num_atual) {        // Ex: VV, LL, DD
                    case 5:
                    case 50:
                    case 500:
                        return -1;
                    default:
                        cont_rep++;
                        break;
                }
            } else {
                cont_rep = 1;
            }
            num += num_atual;
        }
        if (cont_rep > 3)
            return -1;
        i++;
    }

    return num;
}

int converteAlgarismo(char num_romano) {
    switch (num_romano) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        case '\0':    // Caso seja '\0' retornará 0
            return 0;
        default:
            return -1;
    }
}

int restanteDaString(char string[], char restante[], int pos) {
    int i = 0;

    do {
        restante[i] = string[i+pos];
        i++;
    } while (string[i+pos-1] != '\0');
    return 1;
}
