#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torreLoop(int movtorre) {
    if (movtorre < 6){
        printf("Torre se move para a direita!\n");
        torreLoop(movtorre + 1);
    }
}

void rainhaLoop(int movrainha) {
    if (movrainha < 9){
        printf("Rainha se move para a esquerda!\n");
        rainhaLoop(movrainha + 1);
    }
}

void bispoLoopCima(int movbispo) {
    if (movbispo < 6){
        printf("Bispo se move para cima!\n");
        bispoLoopDir(movbispo);
    }
    
}

void bispoLoopDir(int movbispod){
    printf("Bispo se move para direita!\n");
    bispoLoopCima(movbispod + 1);
}

int main() {
    //Correção de problemas de acentuação e caracteres especiais.
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    // Move-se cinco casas na diagonal para cima e à direita. 
    /*int bispo = 1;

    while(bispo <=5){
        printf("Bispo se move para cima e direita!\n");
        bispo ++;
    }*/

    // Implementação de Movimentação da Torre
    // Move-se em linha reta horizontalmente cinco casas para a direita.
    /*int torre = 1;
    do {
        printf("Torre se move para a direita!\n");
        torre ++;
    } while (torre <= 5);*/

    // Implementação de Movimentação da Rainha
    // Move-se oito casas para a esquerda.
    /*int rainha;
    for(rainha = 1; rainha <=8; rainha ++){
        printf("Rainha se move para a esquerda!\n");
    }*/

    // Nível Aventureiro - Movimentação do Cavalo
    // Implementação de Movimentação do Cavalo.
    // Move-se duas para cima, uma para a direita (Movimentação em L).
    int cavaloE;
    int cavaloB = 1;
    for(cavaloE = 1; cavaloE <=1; cavaloE ++){
        do{
            printf("Cavalo se move para cima!\n");
            cavaloB ++;
        } while(cavaloB <= 2);
        printf("Cavalo se move para a direita!\n");
        if (cavaloE == 1) continue; 
        if (cavaloE == 2) break; 
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    //Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.

    //Torre
    int torre = 1;
    torreLoop(torre);
    int rainha = 1;
    rainhaLoop(rainha);
    int bispo = 1;
    bispoLoopCima(bispo);

    return 0;
}
