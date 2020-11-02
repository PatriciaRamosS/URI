/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Distância Entre Dois Pontos

Objetivos: 

Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade
constante de 90 Km/h.

Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a 
cada 2 minutos.

Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.

    Entradas: O arquivo de entrada contém um número inteiro.

    Saida: Imprima o tempo necessário seguido da mensagem "minutos".
*/

// Bibliotecas de funções
#include <stdio.h>
#include <math.h>
 
int main() {
 
    // Declaração Locais   
    int X = 60, Y = 90;
    int distancia, minutos;
    
    //Leitura dos Dados
    scanf("%d", &distancia);
    
    // Cálculos
    minutos = (60 * distancia) / 30;

    // Escrita dos Resultados
    printf("%d minutos\n", minutos);
    
    // Finalizacao do programa
    return 0;
}