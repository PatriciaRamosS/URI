/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Soma Simples

Objetivos: 

Escrever: Leia dois valores inteiros, no caso para variáveis A e B. 
A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

    Entradas: O arquivo de entrada contém 2 valores inteiros.
    Saida: Imprima a mensagem "SOMA" com todas as letras maiúsculas, 
    com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B.
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    int A, B, SOMA;

    scanf("%d %d", &A, &B);

    SOMA = A+B;

    printf("SOMA = %d\n", SOMA);
    return 0;
}