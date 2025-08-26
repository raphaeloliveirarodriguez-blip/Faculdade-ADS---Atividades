#include <stdio.h>
int main() {

    /*    estado (string)
    codigo (string)
    nome_cidade (string)
    populacao (inteiro)
    pib (float)
    area (float)
    numero_pontos_turisticos (inteiro)
    densidade_populacional (float) - calculada
    pib_per_capita (float) - calculado
 */
    //
    
    char estado_primeiro[30];
    char codigo_primeiro[10];
    char nome_cidade_primeiro[50];
    int populacao_primeiro;
    float pib_primeiro;
    float area_primeiro;
    int numero_pontos_turisticos_primeiro;
    float densidade_populacional_primeiro;
    float pib_per_capita_primeiro;

    // COLETA DE DADOS DA CARTA PRIMEIRA
    
    printf("Super Trunfo de Cidades!\n ");

        printf("Digite o estado: ");
        fgets(estado_primeiro, 30, stdin); 

        printf("Digite o código: ");    
        fgets(codigo_primeiro, 10, stdin); 

        printf("Digite o nome da cidade: ");   
        fgets( nome_cidade_primeiro, 50, stdin);

        printf("Digite a população: ");    
        scanf("%d", &populacao_primeiro);
        
        printf("Digite o PIB: ");
        scanf("%f", &pib_primeiro); 

        printf("Digite a área: ");  
        scanf("%f", &area_primeiro); 

        printf("Digite o número de pontos turísticos: ");   
        scanf("%d", &numero_pontos_turisticos_primeiro); 

        // CÁLCULO DOS ATRIBUTOS DERIVADOS PIB E DENSIDADE POPULACIONAL

        densidade_populacional_primeiro = populacao_primeiro / area_primeiro; 
        pib_per_capita_primeiro = pib_primeiro / populacao_primeiro;

        // EXIBIÇÃO DOS DADOS DA CARTA PRIMEIRA

            printf("\n--- Cartão Super Trunfo ---\n");
            printf("Estado: %s\n", estado_primeiro);
            printf("Código: %s\n", codigo_primeiro);
            printf("Nome da Cidade: %s\n", nome_cidade_primeiro);
            printf("População: %d\n", populacao_primeiro);   
            printf("PIB: %.2f\n", pib_primeiro);
            printf("Área: %.2f\n", area_primeiro);
            printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_primeiro);
            printf("Densidade Populacional: %.2f\n", densidade_populacional_primeiro);
            printf("PIB per Capita: %.2f\n", pib_per_capita_primeiro);

    return 0;




}