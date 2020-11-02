/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Consumo

Objetivos: 

Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

    Entradas: O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), 
    e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

    Saida: Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() {
 
    // Declaração Locais   
    double distancia_Total;
    double combustivel_total, consumo_Medio;
    
    //Leitura dos Dados
    scanf("%lf %lf", &distancia_Total, &combustivel_total);
    
    // Cálculos
    consumo_Medio = distancia_Total/combustivel_total;


    // Escrita dos Resultados
    printf("%.3lf km/l\n", consumo_Medio);
    
    // Finalizacao do programa
    return 0;
}