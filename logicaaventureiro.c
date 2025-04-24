#include <stdio.h>

int main() {
    // Olá, Meu nome é Gabriel Fernando e estas são minhas primeiras linhas de código em "C", programando o jogo Desafio De Cartas Super Trunfo Estados!

    // Declarando Variáveis para as cartas.

    char Estado1[20], Estado2[20]; 
    char Código1[20], Código2[20]; 
    char Nome1[20], Nome2[20]; 
    unsigned int População1, População2; 
    float Área1, Área2;
    float PIB1, PIB2;
    int opcao;
    int Numero_De_Pontos_Turisticos1, Numero_De_Pontos_Turisticos2; 
    float Densidade_Populacional1, Densidade_Populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    float Super_Poder1, Super_Poder2;
    char CartaCampea[20];

    printf("LOADING...\n");
    printf("BEM VINDO AO JOGO SUPER TRUNFO - ESTADOS!\n");


    // Cadastro Das Cartas.
 

    // CARTA01:
    
    printf("POR FAVOR INSIRA OS DADOS DA CARTA 01:\n");

    printf("Carta 1: \n"); 

    printf("Estado:\n");
    scanf("%s", Estado1);

    printf("Código:\n");
    scanf("%s", Código1); 

    printf("Nome Da Cidade:\n");
    scanf("%s", Nome1);

    printf("População:\n");
    scanf("%u", &População1); 

    printf("Área:\n");
    scanf("%f", &Área1);

    printf("PIB:\n");
    scanf("%f", &PIB1); 

    printf("Numero de Pontos Turísticos: \n");
    scanf("%d", &Numero_De_Pontos_Turisticos1);

    printf("Densidade Populacional: \n");
    scanf("%f", &Densidade_Populacional1);

    printf("PIB per capita: \n");
    scanf("%f", &PIB_per_capita1);


    // Cálculos para Carta 1:

    PIB_per_capita1 = PIB1 / População1;
    
    Densidade_Populacional1 = População1 / Área1;
    
    Super_Poder1 = (float) População1 + Área1 + PIB1 + Numero_De_Pontos_Turisticos1 + PIB_per_capita1 + (1/Densidade_Populacional1);
    

    // Exibindo dados da Carta1:

    printf("EXIBINDO DADOS DA CARTA 01:\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Código1);
    printf("Nome Da Cidade: %s\n", Nome1);
    printf("População: %u\n", População1);
    printf("Área: %.2f\n", Área1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero De Pontos Turísticos: %d\n", Numero_De_Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB per capita: %f\n", PIB_per_capita1);
    printf("Super Poder: %f\n" , Super_Poder1);


    // CARTA 02:
    
    printf("POR FAVOR, INSIRA OS DADOS DA CARTA 02:\n");

    printf("Carta 2: \n"); 

    printf("Estado:\n");
    scanf("%s", Estado2); 

    printf("Código:\n");
    scanf("%s", Código2); 

    printf("Nome Da Cidade: \n");
    scanf("%s", Nome2);

    printf("População: \n");
    scanf("%u", &População2);

    printf("Área: \n");
    scanf("%f", &Área2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turísticos: \n");
    scanf("%d", &Numero_De_Pontos_Turisticos2);

    printf("Densidade Populacional: \n");
    scanf("%f", &Densidade_Populacional2);

    printf("PIB per capita: \n");
    scanf("%f", &PIB_per_capita2);



    // Cálculos para Carta 2:

    PIB_per_capita2 = PIB2 / População2;
    
    Densidade_Populacional2 = População2 / Área2;
    
    Super_Poder2 = (float) População2 + Área2 + PIB2 + Numero_De_Pontos_Turisticos2 + PIB_per_capita2 + (1/Densidade_Populacional2);


    // Exibindo dados da Carta 2:

    printf("EXIBINDO DADOS DA CARTA 02:\n");
    
    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Nome Da Cidade: %s\n", Nome2);
    printf("População: %u\n", População2);
    printf("Área: %.2f\n", Área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero De Pontos Turísticos: %d\n", Numero_De_Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB per capita: %f\n", PIB_per_capita2);
    printf("Super Poder: %f\n" , Super_Poder2);

    // Menu Interativo.

    printf("QUAL ATRIBUTO VOCÊ DESEJA COMPARAR? \n");

    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB. \n");
    printf("4. Número de Pontos Turisticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("Escolha uma opção (1 a 5): \n");
    scanf("%d" , &opcao);

    printf("COMPARANDO: %s VS %s\n" , Estado1, Estado2);

     switch (opcao) {

     case 1:

        printf("Comparando População:\n");
        printf("%s: %u\n" , Estado1, População1);
        printf("%s: %u\n" , Estado2, População2);
        
        if(População1 > População2) {
            printf("Vencedor: %s\n" , Estado1);
        } else if(População2 > População1) {
            printf("Vencerdor: %s\n" , Estado2);
        } else {
            printf("Empate!\n");
        }
        break;

     case 2: 
        printf("Comparando Àrea: \n");
        printf("%s: %.2f\n" , Estado1, Área1);
        printf("%s: %.2f\n" , Estado2 , Área2);
       
        if (Área1 > Área2) {
            printf("Vencedor: %s\n" , Estado1);
        } else if (Área2 > Área1) {
            printf("Vencedor: %s\n" , Estado2);
        } else {
            printf("Empate!\n");
        }
        break;

     case 3:
        printf("Comparando PIB: \n");
        printf("%s: %.2f\n" , Estado1, PIB1);
        printf("%s: %.2f\n" , Estado2, PIB2);
       
        if (PIB1 > PIB2) {
            printf("Vencedor: %s\n" , Estado1);
        } else if ( PIB2 > PIB1) {
            printf("Vencedor: %s\n" , Estado2);
        } else {
            printf("Empate!\n");
        }
        break;

     case 4:
        printf("Comparando Números de Pontos Turisticos:\n");
        printf("%s: %d\n", Estado1, Numero_De_Pontos_Turisticos1);
        printf("%s: %d\n", Estado2, Numero_De_Pontos_Turisticos2);
        if (Numero_De_Pontos_Turisticos1 > Numero_De_Pontos_Turisticos2) {
            printf("Vencedor: %s\n", Estado1);
        } else if (Numero_De_Pontos_Turisticos2 > Numero_De_Pontos_Turisticos1) {
            printf("Vencedor: %s\n", Estado2);
        } else {
            printf("Empate!\n");
        }
     break;

     case 5:
        printf("Comparando Densidade Populacional:\n");
        printf("%s: %.2f\n", Estado1, Densidade_Populacional1);
        printf("%s: %.2f\n", Estado2, Densidade_Populacional2);
        if (Densidade_Populacional1 < Densidade_Populacional2) {
            printf("Vencedor: %s (menor densidade ganha)\n", Estado1);
        } else if (Densidade_Populacional2 < Densidade_Populacional1) {
            printf("Vencedor: %s (menor densidade ganha)\n", Estado2);
        } else {
            printf("Empate!\n");
        }
        break;

     default:
        printf("Opção inválida! Por favor, escolha entre 1 e 5.\n");
        break;
    }
    
     // Mensagem final:

     printf("OBRIGADO POR JOGAR SUPER TRUNFO - ESTADOS!\n");
 
     return 0; 
}
