/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Diferença

Objetivos: 

Escrever: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

    Entradas: O arquivo de entrada contém 4 valores inteiros.
    Saida: Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, 
    com um espaço em branco antes e depois da igualdade.
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    // Declaração Locais
    int A, B, C, D, DIF;

    //Leitura dos Dados
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Cálculos
    DIF = (A * B - C * D);

    // Escrita dos Resultados
    printf("DIFERENCA = %d\n", DIF);

    // Finalizacao do programa
    return 0;
}