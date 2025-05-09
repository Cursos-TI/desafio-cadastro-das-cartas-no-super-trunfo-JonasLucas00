#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, codigoDaCarta[4], NomeCidade[10];

    int populacao, PontosTuristicos;

    float areaKm, pib;

    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf("%c",&estado); // precisa do &
    
    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta); // teste ok
    
    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade);

    printf("Insira o numero de habitantes da cidade\n");
    scanf("%d",&populacao);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos);

    printf("Insira area da cidade em km\n");
    scanf("%f",&areaKm);

    printf("Insira o valor do PIB\n");
    scanf("%f",&pib);

    pib = pib /100; // coverter para bilhao

    printf("**CARTA 1\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado,codigoDaCarta,NomeCidade); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao, PontosTuristicos);// int
    printf("Area em km:   %.2f\nPIB:   %7.2f bilhoes de reais\n**",areaKm,pib);

    char estado2, codigoDaCarta2[4], NomeCidade2[10];

    int populacao2, PontosTuristicos2;

    float areaKm2, pib2;

    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado2); // precisa do &
    
    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta2); // teste ok
    
    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade2);

    printf("Insira o numero de habitantes da cidade\n");
    scanf("%d",&populacao2);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos2);

    printf("Insira area da cidade em km\n");
    scanf("%f",&areaKm2);

    printf("Insira o valor do PIB\n");
    scanf("%f",&pib2);

    pib2 = pib2 /100; // coverter para bilhao

    printf("**CARTA 2\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado2,codigoDaCarta2,NomeCidade2); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao2, PontosTuristicos2);// int
    printf("Area em km:   %.2f\nPIB:   %7.2f bilhoes de reais\n**",areaKm2,pib2);

    return 0;
}
