// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

int converteNumeroRomano(char numero_romano[]) {
    int num = 0, i = 0;

    while (numero_romano[i] != '\n') {
        switch (numero_romano[i]) {
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
            default:
                return -1;
                break;
        }
    }

    return 0;
}
