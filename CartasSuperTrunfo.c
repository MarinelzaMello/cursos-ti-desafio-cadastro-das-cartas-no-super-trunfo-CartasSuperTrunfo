#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste marinelza

int main() {
    //sintaxe padrao prntf("texto", variavel);
       
    int Carta1 = 1;
    char Estado [8] = "A";
    char Codigo_da_Carta1 [19] = "A01";
    char nome_da_Cidade[50] = "São Paulo";
    int populacao = 12325000;
    float area_km² = 1521.11;
    float PIB = 699.280;
    int numero_de_Pontos_Turisticos = 50;
    float densidade_populacional = populacao / area_km²;
    float PIB_per_capita = PIB / populacao;

    //sintaxe padrao prntf("texto", variavel);
    
    int Carta2 = 2;
    char Estado2 [10] = "B";
    char Codigo_da_Carta2 [19] = "B01";
    char nome_da_Cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area_km²_2 = 1200.25;
    float PIB2 = 300.500;
    int numero_de_Pontos_Turisticos2 = 30;
    float densidade_populacional2 = populacao2 / area_km²_2;
    float PIB_per_capita2 = PIB2 / populacao2;

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta1: %d\n", Carta1);
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta1: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", nome_da_Cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area_km²);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_Pontos_Turisticos);

    densidade_populacional = (float) populacao / area_km²;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);

    PIB_per_capita = (float) PIB / populacao;
    printf("PIB per Capita: %f reais\n", PIB_per_capita);

    //sintaxe padrao prntf("texto", variavel);
    printf("\n");
   
    
    printf("Carta2: %d\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta2 %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", nome_da_Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area_km²_2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_Pontos_Turisticos2);

    densidade_populacional2 = (float) populacao2 / area_km²_2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);

    PIB_per_capita2 = ( float ) PIB2 / populacao2;
    printf("PIB per Capita: %f reais\n", PIB_per_capita2);
          


    return 0;
}
