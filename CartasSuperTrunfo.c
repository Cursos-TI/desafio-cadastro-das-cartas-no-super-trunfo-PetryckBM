#include<stdio.h>


    char estado = 'A'; 
    char CD[10] = "A01" ;
    char NC[20] = "Cidade A";
    unsigned int Populacao = 12325000;
    float area = 1521.11 ; // Área em Km²
    long long int PIB = 6992800000; // PIB em bilhões de reais
    int Números_de_pontos_turisticos = 50;

    char estado2 = 'B'; 
    char CD2[10] = "B02" ;
    char NC2[20] = "Cidade B";
    unsigned int Populacao2 = 6748000;
    float area2 = 1200.25 ; // Área em Km²
    long long int PIB2 = 3005000000 ; // PIB em bilhões de reais
    int Números_de_pontos_turisticos2 = 30;

    float polulacional, polulaciona2, PIBpercapita, PIBpercapita2;  
    int opção;
    
    
int carta1(){

    
   

    printf("Carta 1\n");
    printf("Estado: %c \n",estado);
    printf("Código da carta: %s \n",CD);
    printf("Nome da cidade: %s \n",NC);
    printf("População: %u \n",Populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.lld bilhões\n",PIB);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos);

    PIBpercapita = PIB / Populacao;
    polulacional = Populacao / area;
  
    printf("O PIB per capita do estado %c é: %.2f reais \n", estado, PIBpercapita);
    printf("A densidade populacional do estado %c é: %.2f habitantes por Km² \n", estado, polulacional);
    printf("%n");
    float superpoder = Populacao + PIB + area + Números_de_pontos_turisticos + PIBpercapita - polulacional;

  

    return 0;
}

    int carta2(){


    printf("Carta 2\n");
    printf("Estado: %c \n",estado2);
    printf("Código da carta: %s \n",CD2);
    printf("Nome da cidade: %s \n",NC2);
    printf("População: %u \n",Populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.lld \n",PIB2);
    printf("Números de Pontos Turíscos: %i \n",Números_de_pontos_turisticos2);

    

    
    PIBpercapita2 = PIB2 / Populacao2;
    polulaciona2 = Populacao2 / area2;
    printf("O PIB per capita do estado %c é: %.2f reais \n", estado2, PIBpercapita2);

    printf("A densidade populacional do estado %c é: %.2f habitantes por Km² \n", estado2, polulaciona2);
    printf("\n"); // Linha em branco

 
    float superpoder2 = Populacao2 + PIB2 + area2 + Números_de_pontos_turisticos2 + PIBpercapita2 - polulaciona2;

}


int comparar_cartas(){
    float superpoder = Populacao + PIB + area + Números_de_pontos_turisticos + PIBpercapita - polulacional;
    float superpoder2 = Populacao2 + PIB2 + area2 + Números_de_pontos_turisticos2 + PIBpercapita2 - polulaciona2;  

    PIBpercapita = PIB / Populacao;
    polulacional = Populacao / area;
    PIBpercapita2 = PIB2 / Populacao2;
    polulaciona2 = Populacao2 / area2;

    printf("Carta1: %u\n", Populacao);
    printf("Carta2: %u\n" ,Populacao2);
    
    if(Populacao > Populacao2){
        printf("população: carta 1 venceu.\n");
    } else if(Populacao < Populacao2){
        printf("população: carta 2 venceu.\n");
    }else{
        printf("população: empate.\n");
    }
    printf("Área Carta1: %.2f\n", area);
    printf("Área Carta2: %.2f\n" ,area2);

    if(area > area2){
        printf("área: carta 1 venceu.\n");
    } else if(area < area2){
        printf("área: carta 2 venceu.\n");
    }else{
        printf("área: empate.\n");
    }
    printf("PIB Carta1: %lld\n", PIB);
    printf("PIB Carta2: %lld\n" ,PIB2);

    if(PIB > PIB2){
        printf("PIB: carta 1 venceu.\n");
    } else if(PIB < PIB2){
        printf("PIB: carta 2 venceu.\n");
    }else{
        printf("PIB: empate.\n");
    }
    printf("Pontos turisticos Carta1: %u\n", Números_de_pontos_turisticos);
    printf("pontos turiscos Carta2: %u\n" ,Números_de_pontos_turisticos2);

    if(Números_de_pontos_turisticos > Números_de_pontos_turisticos2){
        printf("Números de pontos turísticos: carta 1 venceu.\n");
    } else if(Números_de_pontos_turisticos < Números_de_pontos_turisticos2){
        printf("Números de pontos turísticos: carta 2 venceu.\n");
    }else{
        printf("Números de pontos turísticos: empate.\n");
    }
    printf("PIB per Capita Carta1: %.2f\n", PIBpercapita);
    printf("PIB per Capita Carta2: %.2f\n",PIBpercapita2);

    if(PIBpercapita > PIBpercapita2){
        printf("PIB per capita: carta 1 venceu.\n");
    } else if(PIBpercapita < PIBpercapita2){
        printf("PIB per capita: carta 2 venceu.\n");
    }else{
        printf("PIB per capita: empate.\n");
    }
    printf("Densidade populacional Carta1: %.2f\n", polulacional);
    printf("Densidade populacional Carta2: %.2f\n", polulaciona2);

    if(polulacional < polulaciona2){
        printf("Densidade populacional: carta 1 venceu.\n");
    } else if(polulacional > polulaciona2){
        printf("Densidade populacional: carta 2 venceu.\n");
    }else{
        printf("Densidade populacional: empate.\n");
    }
    printf("Super poder Carta1:%.2f\n", superpoder);
    printf("Super poder Carta2: %.2f\n",superpoder2);

    if(superpoder > superpoder2){
        printf("Superpoder: carta 1 venceu.\n");
    } else if(superpoder < superpoder2){
        printf("Superpoder: carta 2 venceu.\n");
    } else{
        printf("Superpoder: empate.\n");
    }
    
    return 0;
}

 
int main() {
    
    PIBpercapita = PIB / Populacao;
    polulacional = Populacao / area;
    PIBpercapita2 = PIB2 / Populacao2;
    polulaciona2 = Populacao2 / area2;
    printf("\n");

    printf("Jogo juper trunfo\n");
    printf("Escolha uma opção:\n");
    printf("1.Comparar nome do pais \n");
    printf("2.População \n");   
    printf("3.Área\n");
    printf("4.PIB\n");
    printf("5.Números de pontos turísticos\n");
    printf("6.Densidade demográfica\n");
    printf("7.Comparar todos os atributos\n");
    printf("8.Valores da Carta 1:\n");
    printf("9.Valores da Carta 2:\n");
    scanf("%d", &opção);

    switch (opção) 
    {
    case 1:
        printf("pais %s e pais %s \n", NC, NC2);
        printf("Você escolheu comparar os nomes das cidades.\n");
        break;
    case 2:
        printf("pais%s e pais%s \n",NC, NC2);
        printf("Você escolheu comparar a população.\n");
        printf("População: %u e %u \n", Populacao, Populacao2);
        if(Populacao > Populacao2) {
            printf("Carta 1 venceu na população.\n");
        } else if(Populacao < Populacao2) {
            printf("Carta 2 venceu na população.\n");
        }else {
            printf("Empate na população.\n");
        }
        break;
    case 3:
        printf("pais%s e pais%s \n",NC, NC2);
        printf("Você escolheu comparar a área.\n");
        printf("Área: %.2f e %.2f \n", area, area2);
        if(area > area2) {
            printf("Carta 1 venceu na área.\n");
        } else if(area < area2) {
            printf("Carta 2 venceu na área.\n");
        } else {
            printf("Empate na área.\n");
        }
        break;
    case 4:
        printf("pais%s e pais%s \n", NC, NC2);
        printf("Você escolheu comparar o PIB.\n");
        printf("PIB: %lld e %lld \n", PIB, PIB2);
        if(PIB > PIB2) {
            printf("Carta 1 venceu no PIB.\n");
        } else if(PIB < PIB2) {
            printf("Carta 2 venceu no PIB.\n");
        } else {
            printf("Empate no PIB.\n");
        }
        break;
    case 5:
        printf("pais%s e pais%s \n",NC, NC2);
        printf("Você escolheu comparar o número de pontos turísticos.\n");
        printf("Números de pontos turísticos: %i e %i \n", Números_de_pontos_turisticos, Números_de_pontos_turisticos2);
        if(Números_de_pontos_turisticos > Números_de_pontos_turisticos2) {
            printf("Carta 1 venceu nos pontos turísticos.\n");
        } else if(Números_de_pontos_turisticos < Números_de_pontos_turisticos2) {
            printf("Carta 2 venceu nos pontos turísticos.\n");
        } else {
            printf("Empate nos pontos turísticos.\n");
        }
        break;
    case 6:
        printf("pais%s e pais%s \n",NC, NC2);
        printf("Você escolheu comparar a densidade demográfica.\n");
        printf("Densidade demográfica: %.2f e %.2f \n", polulacional, polulaciona2);
        if(polulacional < polulaciona2) {
            printf("Carta 1 venceu na densidade demográfica.\n");
        } else if(polulacional > polulaciona2) {
            printf("Carta 2 venceu na densidade demográfica.\n");
        } else {
            printf("Empate na densidade demográfica.\n");
        }
        break;
    case 7:
        printf("Comparação de todos os atributos.\n");
        comparar_cartas();
        break;
    case 8:
        printf("Valores da Carta 1:\n");
        carta1();
        break;
    case 9:
        printf("Valores da Carta 2:\n");
        carta2();
        break;
        
    default:
        printf("Escolha inválida. Tente novamente.\n");
        return 1; // Retorna um código de erro
        break;
    }
    printf("\n");

    
    
    return 0;
}