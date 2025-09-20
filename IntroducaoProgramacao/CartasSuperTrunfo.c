#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Declaração das variáveis usadas no código
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[15], cidade2[15];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2, escolha1, escolha2, atributo1, atributo2, resultado1, resultado2;
    float area1, areap1, areamin1, areamax1, area2, areap2, areamin2, areamax2, pib1, pibp1, pibmin1, pibmax1, pib2, pibp2, pibmin2, pibmax2, densidade1, densidade2, pibPerCap1, pibPerCap2, soma1_1, soma1_2, soma2_1, soma2_2, somaTotal1, somaTotal2;

    srand(time(0)); //gerador de números aleatórios

//Escolha do usuário se ele quer cadastrar os atributos das cartas ou gera-los automaticamente    
    printf("Bem-vindo usuário, vamos cadastrar 2 cartas do nosso Super Trunfo com tematica de cidades. \n");
    printf("O estado, código e nome da carta são cadastrados manualmente, os demais atributos podem ser gerados automaticamente.\n");
    printf("Vamos iniciar com a CARTA 1.\n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf("%c", &estado1);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf("%s", cidade1);
    printf("Agora, você deseja cadastrar manualmente o restante dos atributos ou deseja gerá-los aleatoriamente? (Digite o número correspondente.)\n");
    printf("1. Cadastrar manualmente\n");
    printf("2. Cadastrar automaticamente\n");
    scanf("%d", &escolha1);

    switch(escolha1)
    {
    case 1:
        printf("Qual o tamanho da população? \n");
        scanf("%lu", &populacao1);
        printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
        scanf("%f", &area1);
        printf("Qual o valor do PIB? Inclua casas decimais se houver. \n");
        scanf("%f", &pib1);
        printf("Qual o número de pontos turísticos? \n");
        scanf(" %d", &turismo1);
        break;
    case 2:
        populacao1 = rand() % 10000000 + 100000;
        areap1 = (float)rand() / RAND_MAX;
        areamin1 = 3.000;
        areamax1= 150000.000;
        area1 = areamin1 + (areap1 * (areamax1 - areamin1)); 
        pibp1 = (float)rand() / RAND_MAX;
        pibmin1 = 18000.000;
        pibmax1= 829000000.000;
        pib1 = pibmin1 + (pibp1 * (pibmax1 - pibmin1)); 
        turismo1 = rand() % 10 + 1;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    
    printf("Agora vamos cadastrar a CARTA 2. \n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf(" %c", &estado2);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf(" %s", codigo2);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf(" %s", cidade2);
    printf("Agora, você deseja cadastrar manualmente o restante dos atributos ou deseja gerá-los aleatoriamente? (Digite o número correspondente.)\n");
    printf("1. Cadastrar manualmente\n");
    printf("2. Cadastrar automaticamente\n");
    scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 1:
        printf("Qual o tamanho da população? \n");
        scanf("%lu", &populacao2);
        printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
        scanf("%f", &area2);
        printf("Qual o valor do PIB? Inclua casas decimais se houver. \n");
        scanf("%f", &pib2);
        printf("Qual o número de pontos turísticos? \n");
        scanf(" %d", &turismo2);
        break;
    case 2:
        populacao2 = rand() % 10000000 + 100000;
        areap2 = (float)rand() / RAND_MAX;
        areamin2 = 3.000;
        areamax2= 150000.000;
        area2 = areamin2 + (areap2 * (areamax2 - areamin2)); 
        pibp2 = (float)rand() / RAND_MAX;
        pibmin2 = 18000.000;
        pibmax2= 829000000.000;
        pib2 = pibmin2 + (pibp2 * (pibmax2 - pibmin2)); 
        turismo2 = rand() % 10 + 1;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

//Cálculo do resto dos atributos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCap1 = pib1 / populacao1;
    pibPerCap2 = pib2 / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + turismo1 + pibPerCap1 - densidade1;
    float superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibPerCap2 - densidade2;

//Escolha de qual atributo será comparado
    printf("Agora você deve escolher dois atributos para fazer a compararação.\n");
    printf("Qual dos atributos abaixo você escolhe como o primeiro? (Digite o número correspondente.)\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
        case 1:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &atributo2);
            break;
        case 2:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &atributo2);
            break;
        case 3:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &atributo2);
            break;
        case 4:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &atributo2);
            break;
        case 5:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &atributo2);
            break;
        case 6:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("7. Super Poder\n");
            scanf("%d", &atributo2);
            break;
        case 7:
            printf("Agora escolha o segundo atributo? (Digite o número correspondente.)\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            scanf("%d", &atributo2);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

//Exibição dos atributos cadastrados
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f habitantes/Km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCap1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f habitantes/Km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCap2);
    printf("Super poder: %.2f\n", superPoder2);

//Comparando as cartas de acordo com o atributo escolhido

    switch(atributo1)
    {
        case 1:
            soma1_1 = populacao1;
            soma1_2 = populacao2;
            printf("### PRIMEIRO ATRIBUTO ###:Comparando a ### População ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, população: %lu\n", cidade1, populacao1);
            printf("Cidade %s, população: %lu\n", cidade2, populacao2);
            resultado1 =  populacao1 > populacao2 ? 1 : 0;
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            break;
        case 2:
            soma1_1 = area1;
            soma1_2 = area2;
            printf("### PRIMEIRO ATRIBUTO ###: Comparando a ### Área ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, área: %.3f\n", cidade1, area1);
            printf("Cidade %s, área: %.3f\n", cidade2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            soma1_1 = pib1;
            soma1_2 = pib2;
            printf("### PRIMEIRO ATRIBUTO ###: Comparando o ### PIB ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, PIB: %.3f\n", cidade1, pib1);
            printf("Cidade %s, PIB: %.3f\n", cidade2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            soma1_1 = turismo1;
            soma1_2 = turismo2;
            printf("Comparando o número de ### Pontos Turísticos ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, pontos turísticos: %d\n", cidade1, turismo1);
            printf("Cidade %s, pontos turísticos: %d\n", cidade2, turismo2);
            resultado1 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 5:
            soma1_1 = densidade1;
            soma1_2 = densidade2;
            printf("### PRIMEIRO ATRIBUTO ###: Comparando a ### Densidade Populacional ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, densidade populacional: %.2f\n", cidade1, densidade1);
            printf("Cidade %s, densidade populacional: %.2f\n", cidade2, densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            soma1_1 = pibPerCap1;
            soma1_2 = pibPerCap2;
            printf("### PRIMEIRO ATRIBUTO ###: Comparando o ### PIB Per Capita ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, PIB per capita: %.2f\n", cidade1, pibPerCap1);
            printf("Cidade %s, PIB per capita: %.2pibPerCapf\n", cidade2, pibPerCap2);
            resultado1 = pibPerCap1 > pibPerCap2 ? 1 : 0;
            break;
        case 7:
            soma1_1 = superPoder1;
            soma1_2 = superPoder2;
            printf("### PRIMEIRO ATRIBUTO ###: Comparando o ### Super Poder ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, super poder: %.2f\n", cidade1, superPoder1);
            printf("Cidade %s, super poder: %.2p\n", cidade2, superPoder2);
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    switch(atributo2)
    {
        case 1:
            soma2_1 = populacao1;
            soma2_2 = populacao2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando a ### População ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, população: %lu\n", cidade1, populacao1);
            printf("Cidade %s, população: %lu\n", cidade2, populacao2);
            resultado2 =  populacao1 > populacao2 ? 1 : 0;
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            break;
        case 2:
            soma2_1 = area1;
            soma2_2 = area2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando a ### Área ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, área: %.3f\n", cidade1, area1);
            printf("Cidade %s, área: %.3f\n", cidade2, area2);
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            soma2_1 = pib1;
            soma2_2 = pib2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando o ### PIB ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, PIB: %.3f\n", cidade1, pib1);
            printf("Cidade %s, PIB: %.3f\n", cidade2, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            soma2_1 = turismo1;
            soma2_2 = turismo2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando o número de ### Pontos Turísticos ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, pontos turísticos: %d\n", cidade1, turismo1);
            printf("Cidade %s, pontos turísticos: %d\n", cidade2, turismo2);
            resultado2 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 5:
            soma2_1 = densidade1;
            soma2_2 = densidade2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando a ### Densidade Populacional ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, densidade populacional: %.2f\n", cidade1, densidade1);
            printf("Cidade %s, densidade populacional: %.2f\n", cidade2, densidade2);
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            soma2_1 = pibPerCap1;
            soma2_2 = pibPerCap2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando o ### PIB Per Capita ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, PIB per capita: %.2f\n", cidade1, pibPerCap1);
            printf("Cidade %s, PIB per capita: %.2pibPerCapf\n", cidade2, pibPerCap2);
            resultado2 = pibPerCap1 > pibPerCap2 ? 1 : 0;
            break;
        case 7:
            soma2_1 = superPoder1;
            soma2_2 = superPoder2;
            printf("### SEGUNDO ATRIBUTO ###: Comparando o ### Super Poder ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, super poder: %.2f\n", cidade1, superPoder1);
            printf("Cidade %s, super poder: %.2p\n", cidade2, superPoder2);
            resultado2 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

//Verificando o resultado
    printf("Resultado da comparação do PRIMIRO ATRIBUTO:\n");
    if (resultado1 == 1){
            printf("### Carta 1 ### venceu!\n");
        } else if (resultado1 == 0){
            printf("### Carta 2 ### venceu!\n");
        } else {
            printf("Empatou!\n");
        }
    printf("Resultado da comparação do SEGUNDO ATRIBUTO:\n");
    if (resultado2 == 1){
            printf("### Carta 1 ### venceu!\n");
        } else if (resultado2 == 0){
            printf("### Carta 2 ### venceu!\n");
        } else {
            printf("Empatou!\n");
        }

//Verificando a soma dos atributos e o vencedor
    somaTotal1 = soma1_1 + soma2_2;
    somaTotal2 = soma1_2 + soma2_2;
    printf("A soma dos atributos escolhidos da CARTA 1 é: %.2f\n", somaTotal1);
    printf("A soma dos atributos escolhidos da CARTA 2 é: %.2f\n", somaTotal2);
    if (somaTotal1 > somaTotal2){
        printf("A CARTA 1 ganhou!\n");
    } else if (somaTotal1 < somaTotal2){
        printf("A CARTA 2 ganhou!\n");
    } else {
        printf("Houve um empate!\n");
    }

    return 0;
}