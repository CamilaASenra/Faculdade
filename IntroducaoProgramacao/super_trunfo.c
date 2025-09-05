#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[15], cidade2[15];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;

    printf("Bem-vindo usuário, vamos cadastrar 2 cartas do nosso Super Trunfo com tematica de cidades. \n");
    printf("Vamos cadastrar a CARTA 1.\n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf("%c", &estado1);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf("%s", cidade1);
    printf("Qual o tamanho da população? \n");
    scanf("%d", &populacao1);
    printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
    scanf("%f", &area1);
    printf("Qual o valor do PIB em bilhões de reais? Inclua casas decimais se houver. \n");
    scanf("%f", &pib1);
    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &turismo1);

    printf("Agora vamos cadastrar a próxima carta. \n");
    printf("Vamos cadastrar a CARTA 2.\n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf(" %c", &estado2);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf("%s", cidade2);
    printf("Qual o tamanho da população? \n");
    scanf("%d", &populacao2);
    printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
    scanf("%f", &area2);
    printf("Qual o valor do PIB em bilhões de reais? Inclua casas decimais se houver. \n");
    scanf("%f", &pib2);
    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &turismo2);

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Numero de pontos turisticos: %d", turismo2);
    
    return 0;
}