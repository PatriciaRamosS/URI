/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Salário

Objetivos: 

Escrever: Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

    Entradas: O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, 
    representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

    Saida: Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. 
    No caso do salário, também deve haver um espaço em branco após o $.
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    // Declaração Locais
    int funcionarios, horas_Traba; 
    double valor_Horas, salario;

    //Leitura dos Dados
    scanf("%d %d %lf", &funcionarios, &horas_Traba, &valor_Horas);

    // Cálculos
    salario = horas_Traba*valor_Horas;

    // Escrita dos Resultados
    printf("NUMBER = %d\n", funcionarios);
    printf("SALARY = U$ %.2lf\n", salario);

    // Finalizacao do programa
    return 0;
}