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
    int Numero_De_Pontos_Turisticos1, Numero_De_Pontos_Turisticos2; 
    int Escolha_Atributo1, Escolha_Atributo2;
    float Valor1_Carta1, Valor1_Carta2;
    float Valor2_Carta1, Valor2_Carta2;
    float Densidade_Populacional1, Densidade_Populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    float Super_Poder1, Super_Poder2;
    char CartaCampea[20];
    int opcao;

    printf("CARREGANDO...\n");
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
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("Super Poder: %.2f\n", Super_Poder1);

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
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("Super Poder: %.2f\n", Super_Poder2);

    // Menu Interativo para Comparação

    printf("QUAL ATRIBUTO VOCÊ DESEJA COMPARAR PRIMEIRO? \n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de Pontos Turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. Super Poder.\n");
    printf("Escolha uma opção (1 a 6):\n");
    scanf("%d", &Escolha_Atributo1);

    printf("AGORA, ESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro): \n");

    switch (Escolha_Atributo1) {
        case 1:
            printf("2. Área.\n3. PIB.\n4. Número de Pontos Turísticos.\n5. Densidade Populacional.\n6. Super Poder.\n");
            break;
        case 2:
            printf("1. População.\n3. PIB.\n4. Número de Pontos Turísticos.\n5. Densidade Populacional.\n6. Super Poder.\n");
            break;
        case 3:
            printf("1. População.\n2. Área.\n4. Número de Pontos Turísticos.\n5. Densidade Populacional.\n6. Super Poder.\n");
            break;
        case 4:
            printf("1. População.\n2. Área.\n3. PIB.\n5. Densidade Populacional.\n6. Super Poder.\n");
            break;
        case 5:
            printf("1. População.\n2. Área.\n3. PIB.\n4. Número de Pontos Turísticos.\n6. Super Poder.\n");
            break;
        case 6:
            printf("1. População.\n2. Área.\n3. PIB.\n4. Número de Pontos Turísticos.\n5. Densidade Populacional.\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    scanf("%d", &Escolha_Atributo2);

    if (Escolha_Atributo1 == Escolha_Atributo2) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Capturar valores conforme escolhas:
    switch (Escolha_Atributo1) {
        case 1: Valor1_Carta1 = População1; Valor1_Carta2 = População2; 
        break;

        case 2: Valor1_Carta1 = Área1; Valor1_Carta2 = Área2; 
        break;

        case 3: Valor1_Carta1 = PIB1; Valor1_Carta2 = PIB2; 
        break;

        case 4: Valor1_Carta1 = Numero_De_Pontos_Turisticos1; Valor1_Carta2 = Numero_De_Pontos_Turisticos2; 
        break;

        case 5: Valor1_Carta1 = Densidade_Populacional1; Valor1_Carta2 = Densidade_Populacional2; 
        break;
        
        case 6: Valor1_Carta1 = Super_Poder1; Valor1_Carta2 = Super_Poder2; 
        break;
    }

    switch (Escolha_Atributo2) {
        case 1: Valor2_Carta1 = População1; Valor2_Carta2 = População2; 
        break;

        case 2: Valor2_Carta1 = Área1; Valor2_Carta2 = Área2; 
        break;

        case 3: Valor2_Carta1 = PIB1; Valor2_Carta2 = PIB2; 
        break;

        case 4: Valor2_Carta1 = Numero_De_Pontos_Turisticos1; Valor2_Carta2 = Numero_De_Pontos_Turisticos2; 
        break;

        case 5: Valor2_Carta1 = Densidade_Populacional1; Valor2_Carta2 = Densidade_Populacional2; 
        break;

        case 6: Valor2_Carta1 = Super_Poder1; Valor2_Carta2 = Super_Poder2; 
        break;
    }

    printf("Comparando %s VS %s:\n", Estado1, Estado2);

    printf("Atributo 1: %.2f VS %.2f\n", Valor1_Carta1, Valor1_Carta2);
    printf("Atributo 2: %.2f VS %.2f\n", Valor2_Carta1, Valor2_Carta2);

    // Comparação por atributo
    float Soma1 = (Escolha_Atributo1 == 5 ? (1 / Valor1_Carta1) : Valor1_Carta1) + (Escolha_Atributo2 == 5 ? (1 / Valor2_Carta1) : Valor2_Carta1);
    float Soma2 = (Escolha_Atributo1 == 5 ? (1 / Valor1_Carta2) : Valor1_Carta2) + (Escolha_Atributo2 == 5 ? (1 / Valor2_Carta2) : Valor2_Carta2);

    printf("Soma dos Atributos:\n");
    printf("%s: %.2f\n", Estado1, Soma1);
    printf("%s: %.2f\n", Estado2, Soma2);

    (Soma1 > Soma2) ? printf("Vencedor: %s\n", Estado1) : (Soma2 > Soma1) ? printf("Vencedor: %s\n", Estado2) : printf("Empate!\n");

    // Mensagem final:

    printf("OBRIGADO POR JOGAR SUPER TRUNFO - ESTADOS!\n");

    return 0;
}
