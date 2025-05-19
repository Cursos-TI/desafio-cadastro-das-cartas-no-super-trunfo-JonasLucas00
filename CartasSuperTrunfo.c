#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char estado, codigoDaCarta[4], NomeCidade[10];

    int populacao, PontosTuristicos;

    float areaKm, pib;

    printf("\nCARTA 1\n");
    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado); // precisa do &
    
    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta); // teste ok
    
    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade);

    printf("Insira o numero de habitantes da cidade (sem pontuacao)\n");
    scanf("%d",&populacao);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos);

    printf("Insira area da cidade em km (sem pontuacao)\n");
    scanf("%f",&areaKm);

    printf("Insira o valor do PIB (em bilhões de reais ex: 1.69)\n");
    scanf("%f",&pib);

    float densidadePop1 = ((float)populacao/areaKm) * 100, pibPerCapita1 = (pib * 100000000)/(float)populacao; // pop é int, areakm é float, pib é float

    float superPoder1 = (float)populacao +  areaKm + pib + (float)PontosTuristicos + pibPerCapita1 + (densidadePop1 * -1);

    printf("\n**CARTA 1\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado,codigoDaCarta,NomeCidade); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao, PontosTuristicos);// int
    printf("Area em km:   %.2f\nPIB:   %.2f bilhoes de reais\n",areaKm,pib);// float, areaKM, PIB
    printf("Densidade Populacional:   %.2fhab/km\nPIB perCapita: %.2f reais**\n",densidadePop1,pibPerCapita1);// float, densidade, perCapita
    printf("SUPER PODER 1: %.2f\n", superPoder1);// superPoder

    char estado2, codigoDaCarta2[4], NomeCidade2[10];

    int populacao2, PontosTuristicos2;

    float areaKm2, pib2;
    printf("\n**CARTA 2\n**");
    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado2); // precisa do &
    
    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta2); // teste ok
    
    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade2);

    printf("Insira o numero de habitantes da cidade (sem pontuacao)\n");
    scanf("%d",&populacao2);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos2);

    printf("Insira area da cidade em km (sem pontuacao)\n");
    scanf("%f",&areaKm2);

    printf("Insira o valor do PIB(em bilhões de reais ex: 1.69)\n");
    scanf("%f",&pib2);

    float densidadePop2 = ((float)populacao2/areaKm2) * 100, pibPerCapita2 = (pib2 * 100000000)/(float)populacao2; // pop é int, areakm é float, pib é float

    float superPoder2 = (float)populacao2 +  areaKm2 + pib2 + (float)PontosTuristicos2 + pibPerCapita2 + (densidadePop2 * -1);

    printf("\n**CARTA 2\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado2,codigoDaCarta2,NomeCidade2); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao2, PontosTuristicos2);// int
    printf("Area em km:   %.2f\nPIB:   %.2f bilhoes de reais\n", areaKm2, pib2);//float, areaKM, PIB
    printf("Densidade Populacional:   %.2fhab/km\nPIB perCapita: %.2f**\n",densidadePop2,pibPerCapita2);// float, densidade, percCapita
    printf("SUPER PODER 2: %.2f\n", superPoder2);// superPoder2


    /*-------------------------------------------------COMPARACAO-----------------------------*/

    printf("\n***Comparação entre carta 1 e carta 2 (1 para verdadeiro e 0 para falso)***\n");
    
    printf("Populacao Carta 1 venceu? (%d)'\n", populacao > populacao2);
    printf("Area Carta 1 venceu? (%d)'\n", areaKm > areaKm2);
    printf("PIB Carta 1 venceu? (%d)'\n", pib > pib2);
    printf("Pontos Turiscos Carta 1 venceu? (%d)'\n", PontosTuristicos > PontosTuristicos2);
    printf("Densidade Populacional Carta 1 venceu? (%d)'\n", densidadePop1 < densidadePop2); 
    printf("PIB per Capita Carta 1 venceu? (%d)'\n", pibPerCapita1 > pibPerCapita2); 
    printf("Super Poder Carta 1 venceu? (%d)\n", superPoder1 > superPoder2); 

    return 0;
}
