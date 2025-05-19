#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char estado = 'A' ;
    char codigoDaCarta[4] = "A01";
    char NomeCidade[10] = "gramado";

    int populacao, PontosTuristicos;

    float areaKm, pib;

    printf("Informações CARTA 1\n");
    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado);

    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta);

    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade);

    printf("Insira o numero de habitantes da cidade\n");
    scanf("%d",&populacao);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos);

    printf("Insira area da cidade em km\n");
    scanf("%f",&areaKm);

    printf("Insira o valor do PIB (em bilhões ex: 1.69)\n");
    scanf("%f",&pib);
    
    
    float densidadePop1 = (float)populacao/areaKm, pibPerCapita1 = (pib * 100000000)/(float)populacao; // pop é int, areakm é float, pib é float
/*-----------------------------------------CARTA 2---------------------------------------------------------------------------------*/

    char estado2 = 'B', codigoDaCarta2[4] = "B02", NomeCidade2[10] = "corrego";

    int populacao2, PontosTuristicos2;

    float areaKm2, pib2;

    printf("Informacoes CARTA 2\n");
    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado2);

    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta2);

    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade2);

    printf("Insira o numero de habitantes da cidade\n");
    scanf("%d",&populacao2);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos2);

    printf("Insira area da cidade em km\n");
    scanf("%f",&areaKm2);

    printf("Insira o valor do PIB (em bilhões ex: 1.69)\n");
    scanf("%f",&pib2);

    float densidadePop2 = (float)populacao2/areaKm2, pibPerCapita2 = (pib2 * 100000000)/(float)populacao2; // pop é int, areakm é float, pib é float

    printf("**CARTA 1\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado,codigoDaCarta,NomeCidade); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao, PontosTuristicos);// int
    printf("Area em km:   %.2f\nPIB:   %.2f bilhoes de reais\n",areaKm,pib);// float, areaKM, PIB
    printf("Densidade Populacional:   %.2fhab/km\nPIB perCapita: %.2f reais**\n",densidadePop1,pibPerCapita1);// float, densidade, perCapita

    printf("\n");
    printf("**CARTA 2\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado2,codigoDaCarta2,NomeCidade2); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao2, PontosTuristicos2);// int
    printf("Area em km:   %.2f\nPIB:   %.2f bilhoes de reais\n", areaKm2, pib2);//float, areaKM, PIB
    printf("Densidade Populacional:   %.2f\nPIB perCapita: %.2f reais**\n",densidadePop2,pibPerCapita2);// float, densidade, percCapita

    

    //-------------------------------COMPARACAO------------------------------------------

    float superPoderA = (float)populacao + areaKm + pib + (float)PontosTuristicos + pibPerCapita1 + (densidadePop1 * -1);
    float superPoderB = (float)populacao2 + areaKm2 + pib2 + (float)PontosTuristicos2 + pibPerCapita2 + (densidadePop2 * -1);

    printf("Super Poder %c: %.2f\n", estado, superPoderA);
    printf("Super Poder %c: %.2f\n", estado2, superPoderB);

    printf("\n");
    printf("**Comparação:\nPopulacao: Carta 1 venceu(%d)\n",populacao > populacao2);// populacao
    printf("Area: Carta 1 venceu(%d)\n",areaKm > areaKm2);// area
    printf("PIB: Carta 1 venceu(%d)\n",pib > pib2);// PIB
    printf("pontos turisticos: Carta 1 venceu(%d)\n",PontosTuristicos > PontosTuristicos2);// pontos turisticos
    printf("Densidade Populacional: Carta 1 venceu(%d)\n",!(densidadePop1 > densidadePop2));// Densidade
    printf("PIB per Capita: Carta 1 venceu(%d)\n",pibPerCapita1 > pibPerCapita2);// perCapita
    printf("Super Poder: Carta 1 venceu? (%.d)**\n", superPoderA > superPoderB);

    return 0;
}
