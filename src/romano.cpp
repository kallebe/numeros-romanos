// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

int converteNumeroRomano(char numero_romano[]) {
    int num = 0, i = 0;

    while (numero_romano[i] != '\0') {
        switch (numero_romano[i]) {
            case 'I':
                if (numero_romano[i+1] != '\0' && numero_romano[i+1] != 'I')
                    num -= 1;
                else
                    num += 1;
                break;
            case 'V':
                if (numero_romano[i+1] != '\0' && numero_romano[i+1] == 'I')
                    num += 5;
                else if (numero_romano[i+1] != '\0' && numero_romano[i+1] != 'V')
                    num -= 5;
                else
                    num += 5;
                break;
            case 'X':
                if (numero_romano[i+1] != '\0' && (numero_romano[i+1] == 'I' || numero_romano[i+1] == 'V'))
                    num += 10;
                else if (numero_romano[i+1] != '\0' && numero_romano[i+1] != 'X')
                    num -= 10;
                else
                    num += 10;
                break;
            case 'L':
                if (numero_romano[i+1] != '\0' && (numero_romano[i+1] == 'I' || numero_romano[i+1] == 'V' || numero_romano[i+1] == 'X'))
                    num += 50;
                else if (numero_romano[i+1] != '\0' && numero_romano[i+1] != 'L')
                    num -= 50;
                else
                    num += 50;
                break;
            case 'C':
                if (numero_romano[i+1] != '\0' && (numero_romano[i+1] == 'D' || numero_romano[i+1] == 'M'))
                    num -= 100;
                else
                    num += 100;
                break;
            case 'D':
                if (numero_romano[i+1] != '\0' && (numero_romano[i+1] == 'M'))
                    num -= 500;
                else
                    num += 500;
                break;
            case 'M':
                num += 1000;
                break;
            default:
                break;
        }
        i++;
    }

    return num;
}
