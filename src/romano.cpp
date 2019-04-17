// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include "romano.hpp"
#include <string.h>
#include <ctype.h>

int converteNumeroRomano(char num_romano[]) {
    int num = 0, i = 0, num_atual, prox_num, cont_rep = 1;

    while (num_romano[i] != '\0') {
        num_atual = converteAlgarismo(num_romano[i]);
        prox_num = converteAlgarismo(num_romano[i+1]);

        if (num_atual == -1)
            return -1;

        // Exceção para casos como VIV, LXL
        if (prox_num != 0 && num_romano[i+2] != '\0' && prox_num != num_atual) {
            if (num_atual == converteAlgarismo(num_romano[i+2])) {
                switch (num_atual) {
                    case 10:
                    case 100:
                    case 1000:
                        break;
                    default:
                        return -1;
                }
            }
            if (converteAlgarismo(num_romano[i+2]) > num_atual)
                return -1;
        }

        if (prox_num > num_atual) {
            if (prox_num == 2*num_atual || cont_rep > 1)
                return -1;
            if (prox_num > 10*num_atual)
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
    switch (toupper(num_romano)) {
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
        case '\0':      // Caso seja '\0' retornará 0
            return 0;
        default:        // Demais caracteres
            return -1;
    }
}
