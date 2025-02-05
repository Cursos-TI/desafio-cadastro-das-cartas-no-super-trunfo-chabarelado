#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Variáveis 

    int pontos_turisticos, populacao;
    char estado, codigo[4], nome[30];
    float pib, area, pib_per_capita, densidade; 

    /*
    Interface criada usando recursos funcionais e não funcionais para obter as caracteristicas
    da cidade através do usuário do programa.
    */

    printf("\n <- - Bem vindo ao Super Trunfo - -> \n");
    printf("\n -> Tema: Cidades <- \n");
    printf("\nDigite nos campos abaixo as caracteristicas da cidade.\n");

    //Solicitção dos dados:

    printf("- Estado (Ex: A,B,C...):");
    scanf("%c", &estado);

    printf("- Código da Carta (Ex: A01,B02,C01...):");
    scanf("%s", &codigo);

    printf("- Nome da Cidade:");
    scanf(" %[^\n]", nome); // %[^\n] é utilizado para ser lido idenpendente do que for escrito com exceção do \n

    printf("- População:");
    scanf("%d", &populacao);

    printf("- Área:");
    scanf("%f", &area);

    printf("- PIB:");
    scanf("%f", &pib);
   
    printf("- Pontos Turisticos:");
    scanf("%d", &pontos_turisticos);

    // Cálculo do PIB e Densidade Populacional:

    densidade = populacao / area;
    pib_per_capita = pib / populacao;


    // Confirmação e exibição dos dados:

    printf("\n-> Aqui estão as características cadastradas da cidade:\n");
    printf("> Estado: %c\n", estado);
    printf("> Código da Carta: %s\n", codigo);
    printf("> Nome da Cidade: %s\n", nome);
    printf("> População: %d\n", populacao);
    printf("> Área: %.2f km²\n", area);
    printf("> PIB: %.2f reais\n", pib);
    printf("> PIB Per Capita: %.3f reais\n", pib_per_capita);
    printf("> Pontos Turisticos: %d\n", pontos_turisticos);
    printf("> Densidade Populacional: %.2f pessoas/km²\n\n", densidade);


    return 0;
}
