#include <stdio.h>

int main() {
char nomecidade1[50], nomecidade2[50], estado1[3], estado2[3], codigoest1[4], codigoest2[4];
    int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2, pib1, pib2;
    
    printf("\n----------SUPER TRUNFO----------\n\n");
    
    printf("\n----------Carta 1----------\n\n");
    printf("Digite o estado da cidade 1: \n");
    scanf("%s", estado1);
    printf("Digite o código da cidade 1: \n");
    scanf("%s", codigoest1);
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nomecidade1);
    printf("Digite a população total da cidade 1: \n");
    scanf("%f", &populacao1);
    printf("Digite o tamanho da área da cidade 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos há na cidade 1: \n");
    scanf("%d", &turistico1);


    printf("\n----------Carta 2----------\n\n");
    printf("Digite o estado da cidade 2: \n");
    scanf("%s", estado2);
    printf("Digite o código da cidade 2: \n");
    scanf("%s", codigoest2);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2);
    printf("Digite a população total da cidade 2: \n");
    scanf("%f", &populacao2);
    printf("Digite o tamanho da área da cidade 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos há na cidade 2: \n");
    scanf("%d", &turistico2);




 

return 0;
} 
