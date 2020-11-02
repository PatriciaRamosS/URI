/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Esfera

Objetivos: 

Escrever: Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), 
assumem que o resultado da divisão entre dois inteiros é outro inteiro.

    Entradas: O arquivo de entrada contém um valor de ponto flutuante (dupla precisão), correspondente ao raio da esfera.

    Saida: A saída deverá ser uma mensagem "VOLUME" conforme o exemplo fornecido abaixo, com um espaço antes e um espaço depois da igualdade. 
    O valor deverá ser apresentado com 3 casas após o ponto.

*/

// Bibliotecas de funções
#include <stdio.h>
 
// Declarações Globais
// Constantes e Tipos de Dados
#define pi 3.14159
 
int main() {
 
    // Declaração Locais   
    double volume, raio;
    
    //Leitura dos Dados
    scanf("%lf", &raio);
    
    // Cálculos
    volume = ((4.0/3)*pi*(pow(raio,3)));
    
    // Escrita dos Resultados
    printf("VOLUME = %.3lf\n", volume);
    
    // Finalizacao do programa
    return 0;
}