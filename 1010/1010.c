/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Cálculo Simples

Objetivos: 

Escrever: Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, 
o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

    Entradas: O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros 
    e um valor com 2 casas decimais.

    Saida: A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos 
    e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.

*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() {
 
    // Declaração Locais 
    int numPecas_1, codPeca_1;
    int numPecas_2,codPeca_2;
    
    double valorPeca_1, valor_Total=0;
    double valorPeca_2;
    
    //Leitura dos Dados
    scanf("%d %d %lf",  &codPeca_1, &numPecas_1, &valorPeca_1);
    
    // Cálculos
    valor_Total = valor_Total + (numPecas_1 * valorPeca_1);

    //Leitura dos Dados 
    scanf("%d %d %lf",  &codPeca_2, &numPecas_2, &valorPeca_2);
    
    // Cálculos
    valor_Total = valor_Total + (numPecas_2 * valorPeca_2);
    
    // Escrita dos Resultados
    printf("VALOR A PAGAR: R$ %.2f\n", valor_Total);
    
    // Finalizacao do programa
    return 0;
}