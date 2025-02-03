#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    unsigned int populacao1, populacao2, area1, area2, pontosTuristicos1, pontosTuristicos2;
    long unsigned int pib1, pib2, superPoder1, superPoder2;
    char cidade1[255], cidade2[255];
    float densidadeDemografica1, densidadeDemografica2, pibPerCapita1, pibPerCapita2;
    int pontuacao1 = 0, pontuacao2 = 0, escolha1, escolha2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Bem-vindos ao super trunfo!\nEscolha duas cartas, \nperguntas envolvendo números deve-se utilizar apenas digitos.\nBoa sorte!\n\n");

    printf("Qual é a primeira cidade? ");
    scanf("%s", &cidade1);
    printf("\n ");

    printf("Quantas pessoas vivem na primeira cidade? ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Qual é a área em km² da primeira cidade? ");
    scanf("%d", &area1);
    printf("\n");

    printf("Qual é o PIB da primeira cidade? ");
    scanf("%lu", &pib1);
    printf("\n");

    printf("Quantos pontos turísticos existem na primeira cidade? ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    printf("Qual é a segunda cidade? ");
    scanf("%s", &cidade2);
    printf(" \n");

    printf("Quantas pessoas vivem na segunda cidade? ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Qual é a área em km² da segunda cidade? ");
    scanf("%d", &area2);
    printf("\n");

    printf("Qual é o PIB da segunda cidade? ");
    scanf("%lu", &pib2);
    printf("\n");

    printf("Quantos pontos turísticos existem na segunda cidade? ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    densidadeDemografica1 = (float) populacao1 / area1;
    densidadeDemografica2 = (float) pib2 / populacao2;
    pibPerCapita1 = (float) pib1 / populacao1;
    pibPerCapita2 = (float) populacao2 / area2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadeDemografica1 + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadeDemografica2 + pibPerCapita2;

    printf("Carta A01\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("PIB: R$ %lu,00\n", pontosTuristicos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica1);
    printf("PIB per Capita: R$ %.2f \n\n\n", pibPerCapita1);

    printf("Carta A02\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("PIB: R$ %lu,00\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica2);
    printf("PIB per Capita: R$ %.2f \n\n\n", pibPerCapita2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("Escolha dois atributos para comparar");
    printf("O primeiro atributo:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pontos turísticos\n");
    printf("4. PIB\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n\n");

    scanf("%d", &escolha1);
    printf("\n");

    printf("O segundo atributo:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pontos turísticos\n");
    printf("4. PIB\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n\n");

    scanf("%d", &escolha2);
    printf("\n");

    switch (escolha1)
    {
    case 2:
        if (area1 > area2) {
            pontuacao1++;
            printf("Cidade 1 tem maior área.\n");
        } else if (area1 < area2) {
            pontuacao2++;
            printf("Cidade 2 tem maior área.\n");
        }
        break;
    
    case 3:
        if (pontosTuristicos1 > pontosTuristicos2) {
            pontuacao1++;
            printf("Cidade 1 tem mais pontos turísticos.\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            pontuacao2++;
            printf("Cidade 2 tem mais pontos turísticos.\n");
        }
        break;
    
    case 4:
        if (pib1 > pib2) {
            pontuacao1++;
            printf("Cidade 1 tem maior PIB.\n");
        } else if (pib1 < pib2) {
            pontuacao2++;
            printf("Cidade 2 tem maior PIB.\n");
        }
        break;
    
    case 5:
        if (densidadeDemografica1 > densidadeDemografica2) {
            pontuacao1++;
            printf("Cidade 1 tem maior densidade demográfica.\n");
        } else if (densidadeDemografica1 < densidadeDemografica2) {
            pontuacao2++;
            printf("Cidade 2 tem maior densidade demográfica.\n");
        }
        break;
    
    case 6:
        if (pibPerCapita1 > pibPerCapita2) {
            pontuacao1++;
            printf("Cidade 1 tem maior PIB per capita.\n");
        } else if (pibPerCapita1 < pibPerCapita2) {
            pontuacao2++;
            printf("Cidade 2 tem maior PIB per capita.\n");
        }
        break;
    
    default:
        if (populacao1 > populacao2) {
            pontuacao1++;
            printf("Cidade 1 tem maior população.\n");
        } else if (populacao1 < populacao2) {
            pontuacao2++;
            printf("Cidade 2 tem maior população.\n");
        }
        break;
    }

    switch (escolha2)
    {
    case 2:
        if (area1 > area2) {
            pontuacao1++;
            printf("Cidade 1 tem maior área.\n");
        } else if (area1 < area2) {
            pontuacao2++;
            printf("Cidade 2 tem maior área.\n");
        }
        break;
    
    case 3:
        if (pontosTuristicos1 > pontosTuristicos2) {
            pontuacao1++;
            printf("Cidade 1 tem mais pontos turísticos.\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            pontuacao2++;
            printf("Cidade 2 tem mais pontos turísticos.\n");
        }
        break;
    
    case 4:
        if (pib1 > pib2) {
            pontuacao1++;
            printf("Cidade 1 tem maior PIB.\n");
        } else if (pib1 < pib2) {
            pontuacao2++;
            printf("Cidade 2 tem maior PIB.\n");
        }
        break;
    
    case 5:
        if (densidadeDemografica1 > densidadeDemografica2) {
            pontuacao1++;
            printf("Cidade 1 tem maior densidade demográfica.\n");
        } else if (densidadeDemografica1 < densidadeDemografica2) {
            pontuacao2++;
            printf("Cidade 2 tem maior densidade demográfica.\n");
        }
        break;
    
    case 6:
        if (pibPerCapita1 > pibPerCapita2) {
            pontuacao1++;
            printf("Cidade 1 tem maior PIB per capita.\n");
        } else if (pibPerCapita1 < pibPerCapita2) {
            pontuacao2++;
            printf("Cidade 2 tem maior PIB per capita.\n");
        }
        break;
    
    default:
        if (populacao1 > populacao2) {
            pontuacao1++;
            printf("Cidade 1 tem maior população.\n");
        } else if (populacao1 < populacao2) {
            pontuacao2++;
            printf("Cidade 2 tem maior população.\n");
        }
        break;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if (pontuacao1 > pontuacao2) {
        printf("Cidade %s venceu!\n", cidade1);
    } else if (pontuacao1 < pontuacao2) {
        printf("Cidade %s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
