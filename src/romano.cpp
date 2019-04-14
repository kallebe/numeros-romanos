// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include "romano.hpp"

int converteNumeroRomano(char num_romano[]) {
    int num = 0, i = 0, num_atual, prox_num, cont_rep = 1;

    while (num_romano[i] != '\0') {
        num_atual = converteAlgarismo(num_romano[i]);
        prox_num = converteAlgarismo(num_romano[i+1]);

        if (num_atual == prox_num)
            cont_rep++;
        else
            cont_rep = 1;

        if ((num_atual == 5 || num_atual == 50 || num_atual == 500) && cont_rep == 2)
            return -1;

        if (cont_rep > 3)
            return -1;

        if (prox_num > num_atual) {
            if (prox_num - num_atual == 5 || prox_num - num_atual == 50 || prox_num - num_atual == 500)
                return -1;
            num -= num_atual;
        } else
            num += num_atual;
        i++;
    }

    return num;
}

int converteAlgarismo(char num_romano) {
    switch (num_romano) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:    // Caso seja '\0' retornará 0
            return 0;
            break;
    }
}
