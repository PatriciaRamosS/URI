/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 02/11/2020

Nome: Salário com Bônus

Objetivos: 

Escrever: Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, 
com duas casas decimais.

    Entradas: O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, 
    representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

    Saida: Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.

*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    // Declaração Locais
    char nome[]="";
    double salario, total_Vendas, total;

    //Leitura dos Dados
    scanf("%s %lf %lf", &nome, &salario, &total_Vendas);

    // Cálculos
    total = salario + (total_Vendas * 0.15f);

    // Escrita dos Resultados
    printf("TOTAL = R$ %.2lf\n", total);

    // Finalizacao do programa
    return 0;
}