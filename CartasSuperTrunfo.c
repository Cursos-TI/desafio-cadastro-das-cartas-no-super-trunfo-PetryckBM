#include<stdio.h>


    char estado; 
    char CD[10];
    char NC[20];
    unsigned int Populacao;
    float area;
    float PIB;
    int Números_de_pontos_turisticos;

    char estado2; 
    char CD2[10];
    char NC2[20];
    unsigned int Populacao2;
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
    scanf("%u", &Populacao );

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
    printf("População: %u \n",Populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.f bilhões\n",PIB);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos);

    PIBpercapita =(float) PIB / Populacao;
    polulacional = Populacao / area;
  
    printf("O PIB per capita do estado %c é: %.2f reais \n", estado, PIBpercapita);
    printf("A densidade populacional do estado %c é: %.2f habitantes por Km² \n", estado, polulacional);

    float superpoder = Populacao + PIB + area + Números_de_pontos_turisticos + PIBpercapita - polulacional;
  

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
    scanf("%u", &Populacao2 );

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
    printf("População: %u \n",Populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.f \n",PIB2);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos2);

    

    
    PIBpercapita2 =(float) PIB2 / Populacao2;
    polulaciona2 = Populacao2 / area2;
    printf("O PIB per capita do estado %c é: %.2f reais \n", estado2, PIBpercapita2);

    printf("A densidade populacional do estado %c é: %.2f habitantes por Km² \n", estado2, polulaciona2);

 
    float superpoder2 = Populacao2 + PIB2 + area2 + Números_de_pontos_turisticos2 + PIBpercapita2 - polulaciona2;

}
int comparar_cartas(){
    float superpoder = Populacao + PIB + area + Números_de_pontos_turisticos + PIBpercapita - polulacional;
    float superpoder2 = Populacao2 + PIB2 + area2 + Números_de_pontos_turisticos2 + PIBpercapita2 - polulaciona2;

    if(Populacao > Populacao2){
        printf("população: carta 1 venceu.\n");
    } else (Populacao < Populacao2);{
        printf("população: carta 2 venceu.\n");
    }

    if(area > area2){
        printf("área: carta 1 venceu.\n");
    } else (area < area2);{
        printf("área: carta 2 venceu.\n");
    }

    if(PIB > PIB2){
        printf("PIB: carta 1 venceu.\n");
    } else (PIB < PIB2);{
        printf("PIB: carta 2 venceu.\n");
    }

    if(Números_de_pontos_turisticos > Números_de_pontos_turisticos2){
        printf("Números de pontos turísticos: carta 1 venceu.\n");
    } else (Números_de_pontos_turisticos < Números_de_pontos_turisticos2);{
        printf("Números de pontos turísticos: carta 2 venceu.\n");
    }

    if(PIBpercapita > PIBpercapita2){
        printf("PIB per capita: carta 1 venceu.\n");
    } else (PIBpercapita < PIBpercapita2);{
        printf("PIB per capita: carta 2 venceu.\n");
    }

    if(polulacional < polulaciona2){
        printf("Densidade populacional: carta 1 venceu.\n");
    } else (polulacional > polulaciona2);{
        printf("Densidade populacional: carta 2 venceu.\n");
    }

    if(superpoder > superpoder2){
        printf("Superpoder: carta 1 venceu.\n");
    } else(superpoder < superpoder2);{
        printf("Superpoder: carta 2 venceu.\n");
    } 
    
  
    return 0;
}

 
int main() {
    carta1();
    carta2();
    comparar_cartas();
    
    return 0;
}