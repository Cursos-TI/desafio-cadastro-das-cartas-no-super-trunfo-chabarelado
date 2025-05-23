#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha


    // Variáveis 

    int pontos_turisticos1, pontos_turisticos2, vencedor;
    unsigned long int populacao1, populacao2;
    char estado1, estado2, codigo1[4],codigo2[4], nome1[30], nome2[30];
    float pib1, pib2, area1, area2, pib_per_capita1, pib_per_capita2, densidade1, densidade2; 
    double Super1, Super2;

    /*
    Interface criada usando recursos funcionais e não funcionais para obter as caracteristicas
    da cidade através do usuário do programa.
    */

    printf("\n<- - Bem vindo ao Super Trunfo - -> \n");
    printf("\n -> Tema: Cidades <- \n");
    printf("\nDigite nos campos abaixo as caracteristicas da primeira cidade cidade.\n");

    //Solicitção dos dados da Primeira Cidade:

    printf("- Estado (Ex: A,B,C...):");
    scanf("%c", &estado1);

    printf("- Código da Carta (Ex: A01,B02,C01...):");
    scanf("%s", &codigo1);

    printf("- Nome da Cidade:");
    scanf(" %[^\n]", nome1); // %[^\n] é utilizado para ser lido idenpendente do que for escrito com exceção do \n

    printf("- População:");
    scanf("%d", &populacao1);

    printf("- Área:");
    scanf("%f", &area1);

    printf("- PIB:");
    scanf("%f", &pib1);
   
    printf("- Pontos Turisticos:");
    scanf("%d", &pontos_turisticos1);

    // Solicitação de dados da Segunda Cidade:

    printf("\nAgora insira as caracteristicas da segunda cidade.\n");

    printf("- Estado (Ex: A,B,C...):");
    scanf(" %c", &estado2);

    printf("- Código da Carta (Ex: A01,B02,C01...):");
    scanf("%s", &codigo2);

    printf("- Nome da Cidade:");
    scanf(" %[^\n]", nome2); 

    printf("- População:");
    scanf("%d", &populacao2);

    printf("- Área:");                  
    scanf("%f", &area2);

    printf("- PIB:");
    scanf("%f", &pib2);
   
    printf("- Pontos Turisticos:");
    scanf("%d", &pontos_turisticos2);


    // Cálculo do PIB, Densidade Populacional e Super Poder de ambas as cidades:

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    Super1 = (float) ( populacao1 + area1 + pib1 + pontos_turisticos1 + densidade1+ pib_per_capita1 );

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    Super2 = (float) ( populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + pib_per_capita2 );

    // Confirmação e exibição dos dados das duas cidades:

    printf("\n-> Aqui estão as características cadastradas da cidades:\n");

    // Cidade 1:

    printf("\n--- Primeira Cidade ---\n");
    printf("> Estado: %c\n", estado1);
    printf("> Código da Carta: %s\n", codigo1);
    printf("> Nome da Cidade: %s\n", nome1);
    printf("> População: %d pessoas\n", populacao1);
    printf("> Área: %.2f km²\n", area1);
    printf("> PIB: %.2f reais\n", pib1);
    printf("> PIB Per Capita: %.2f reais\n", pib_per_capita1);
    printf("> Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade1);
    printf("> SUPER PODER: %.2f\n", Super1);

    // Cidade 2:

    printf("\n--- Segunda Cidade ---\n");
    printf("> Estado: %c\n", estado2);
    printf("> Código da Carta: %s\n", codigo2);
    printf("> Nome da Cidade: %s\n", nome2);
    printf("> População: %d pessoas\n", populacao2);
    printf("> Área: %.2f km²\n", area2);
    printf("> PIB: %.2f reais\n", pib2);
    printf("> PIB Per Capita: %.2f reais\n", pib_per_capita2);
    printf("> Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade2);
    printf("> SUPER PODER: %.2f\n", Super2);

    // Comparação do Super Poder e da densidade populacional:

    vencedor = densidade1 <= densidade2;

    // Exibição da carta vencedora: 

    printf("\n <--- Carta Vencedora ---> \n ");
    printf(">>> Cidade: %d <<<\n\n", vencedor);


    return 0;
}
