// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include <stdio.h>
#include "romano.hpp"

int main() {
    char numero_romano[31];
    int num = -1;

    printf("Digite o numero romano: ");
    scanf("%30s", numero_romano);

    num = converteNumeroRomano(numero_romano);
    if (num != -1) {
        printf("O numero eh: %d\n", num);
    } else {
        printf("O numero digitado eh invalido!\n");
    }

    return 0;
}
