#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao;
    int pontost; // Pontos turísticos
    char citycode; // código da cidade
    float area; // Área da cidade
    float PIB; // PIB da cidade
    char cityname [80]; // Nome da Cidade

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf ("Digite o nome da cidade:\n"); //Será definido o nome da cidade.
    scanf ("%s", &cityname);

        printf ("Defina um código para esta cidade EX:(A):\n"); //Será definido o código da cidade.
        scanf (" %c", &citycode);

            printf ("Qual a polução da cidade?\n"); //Será definido a população da cidade.
            scanf (" %d", &populacao);

                printf ("Digie qual a área dessa cidade:\n"); //Será definido a Área da cidade.
                scanf (" %f\n", &area);

                    printf ("Qual o PIB dessa cidade?\n"); //Será definido o PIB da cidade.
                    scanf (" %f", &PIB);

                        printf ("Quantos pontos turísticos possui a cidade?\n"); //Será definido a quantidade pontos turísticos da cidade.
                        scanf (" Recife%d\n", &pontost);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("Nome da cidade: %s\n", cityname);
    
        printf ("Código da cidade: %c\n", citycode);

            printf ("População da cidade: %d\n", populacao);

                printf ("Área da cidade: %f\n", area);

                    printf ("Qual o PIB da cidade: %f\n", PIB);

                        printf ("Quantos pontos turísticos possui essa cidade: %d\n", pontost);


    return 0;
}
