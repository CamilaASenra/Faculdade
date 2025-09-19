#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int escolhaJogador, escolhaComputador;
    srand(time(0)); //gerador de números aleatórios

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; //Vai gerar um número para o computador, % 3 vai gerar um número de 0 a 2 e o mais 1 vai fazer com que gere na verdade um número de 1 a 3.

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if(escolhaComputador == escolhaJogador){
        printf("### Jogo empatou! ###\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || (escolhaJogador == 2 && escolhaComputador == 1) || (escolhaJogador == 3 && escolhaComputador == 2)){
        printf("### Parabéns, você ganhou! ###\n");
    } else {
        printf("### Você perdeu! ###\n");
    }

    return 0;
}