// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include <stdio.h>
#include <locale.h>
#include "romano.hpp"

int main() {
    setlocale(LC_ALL, "Portuguese");
    char numero_romano[31];
    int num = -1;

    printf("Digite o numero romano: ");
    scanf("%30s", numero_romano);

    num = converteNumeroRomano(numero_romano);
    if (num != -1) {
        printf("O numero é: %d\n", num);
    } else {
        printf("O numero digitado é invalido!\n");
    }

    return 0;
}
