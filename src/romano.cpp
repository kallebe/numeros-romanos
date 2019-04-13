// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

int converteNumeroRomano(char numero_romano[]) {
    int num = 0, i = 0;

    while(numero_romano[i] != '\n') {
        switch (numero_romano[i])
        {
            case 'I':
                return 1;
                break;
            default:
                return -1;
                break;
        }
    }

    return 0;
}
