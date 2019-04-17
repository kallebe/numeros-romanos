# Conversor de numeros romanos para arábicos

## Sobre o trabalho
Este trabalho tem o objetivo de, por meio do Desenvolvimento Orientado a Testes (TDD), desenvolver um programa que converte algarismos romanos (de no máximo 30 caracteres) para arábicos. Após o software receber a string com o algarismo romano, deverá retornar o número arábico correspondente (ex: XXI deverá retornar 21) ou -1, caso o número romano seja inválido (ex: VX deverá retornar -1). 

## Testes
Como foi utilizada a metodologia TDD, está presente no diretório src/ um módulo de testes, cada qual com seu significado:
  - O primeiro teste foi feito para verificar a corretude do código para algarismos romanos de apenas 1 caractere (I, V, X, L, C, D e M);
  - O segundo teste é um dos principais, pois analisa o resultado da conversão de números com mais de um caractere. Ex: IX, XXX;
  - O terceiro teste é responsável por verificar os casos de exceção, ou seja, os casos em que o número romano de entrada é inválido. Ex: VV, A, IIC;
  - O quarto teste é similar ao segundo, neste, porém, são analisados se a conversão do número ainda é feita de forma correta quando são usados letras minúsculas para representar o algarismo.
  
## Compilação e execução
A compilação do programa utiliza o Makefile, logo, para compilar o programa, entre no diretório [source](src/) e digite no terminal o comando `make` e serão compilados os módulos de teste e o módulo principal.

Para a execução, basta digitar o comando `./romano` e digitar o número romano em seguida.

Para a execução dos testes, basta digitar o comando `./testa_romano`
