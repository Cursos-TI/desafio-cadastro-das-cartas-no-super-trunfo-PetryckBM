#include <stdio.h>

int main() {

    char estado; 
    char CD[10];
    char NC[20];
    int Populacao;
    float area;
    float PIB;
    int Números_de_pontos_turisticos;

    char estado2; 
    char CD2[10];
    char NC2[20];
    double Populacao2;
    float area2;
    float PIB2;
    int Números_de_pontos_turisticos2;
    
    printf("digite um estado: \n");
    scanf(" %c", &estado );

    printf("digite um codigo da carta: \n");
    scanf(" %s", &CD );

    printf("digite um Nome da Cidade: \n");
    scanf(" %s", &NC );

    printf("digite a população: \n");
    scanf("%d", &Populacao );

    printf("digite um Àrea: \n");
    scanf("%f", &area );

    printf("digite o PIB : \n");
    scanf("%f", &PIB );

    printf("digite o Número de pontos Turísticos: \n");
    scanf("%i", &Números_de_pontos_turisticos );

   

    printf("digite um estado: \n");
    scanf(" %c", &estado2 );

    printf("digite um codigo da carta: \n");
    scanf("%s", &CD2 );

    printf("digite um Nome da Cidade: \n");
    scanf("%s", &NC2 );

    printf("digite a população: \n");
    scanf("%d", &Populacao2 );

    printf("digite um Àrea: \n");
    scanf("%f", &area2 );

    printf("digite o PIB : \n");
    scanf("%f", &PIB2 );

    printf("digite o Número de pontos Turísticos: \n");
    scanf("%i", &Números_de_pontos_turisticos2 );
    
    printf("Carta 1\n");
    printf("Estado: %c \n",estado);
    printf("Código da carta: %s \n",CD);
    printf("Nome da cidade: %s \n",NC);
    printf("População: %d \n",Populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões\n",PIB);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos);

    printf("Carta 2\n");
    printf("Estado: %c \n",estado2);
    printf("Código da carta: %s \n",CD2);
    printf("Nome da cidade: %s \n",NC2);
    printf("População: %d \n",Populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões \n",PIB2);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos2);

    return 0;
}
