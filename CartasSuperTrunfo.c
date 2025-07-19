#include<stdio.h>


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
    int Populacao2;
    float area2;
    float PIB2;
    int Números_de_pontos_turisticos2;

    float polulacional, polulaciona2, PIBpercapita, PIBpercapita2;  
    
int carta1(){

    
    printf("digite um estado: \n");
    scanf("%c", &estado );

    printf("digite um codigo da carta: \n");
    scanf("%s", &CD );

    printf("digite um Nome da Cidade: \n");
    scanf("%s", &NC );

    printf("digite a população: \n");
    scanf("%d", &Populacao );

    printf("digite um Àrea: \n");
    scanf("%f", &area );

    printf("digite o PIB : \n");
    scanf("%f", &PIB );

    printf("digite o Número de pontos Turísticos: \n");
    scanf("%i", &Números_de_pontos_turisticos );

    printf("Carta 1\n");
    printf("Estado: %c \n",estado);
    printf("Código da carta: %s \n",CD);
    printf("Nome da cidade: %s \n",NC);
    printf("População: %d \n",Populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões\n",PIB);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos);

    return 0;
}

    int carta2(){

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

     printf("Carta 2\n");
    printf("Estado: %c \n",estado2);
    printf("Código da carta: %s \n",CD2);
    printf("Nome da cidade: %s \n",NC2);
    printf("População: %d \n",Populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões \n",PIB2);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos2);

}

  int calculo(){

    polulacional = Populacao / area;
    polulaciona2 = Populacao2 / area2;

    printf("A densidade populacional do estado %c é: %.2f habitantes por Km² \n", estado, polulacional);
    printf("A densidade populacional do estado %c é: %.2f habitantes por Km² \n", estado2, polulaciona2);

    PIBpercapita =(float) PIB / Populacao;
    PIBpercapita2 =(float) PIB2 / Populacao2;
    printf("O PIB per capita do estado %c é: %.2f reais \n", estado, PIBpercapita);
    printf("O PIB per capita do estado %c é: %.2f reais \n", estado2, PIBpercapita2);

  } 
int main() {
    carta1();
    carta2();
    calculo();
    return 0;
}