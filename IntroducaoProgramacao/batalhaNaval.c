#include <stdio.h>
#include <locale.h>
#include <windows.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10 

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    // Nível Novato - Posicionamento dos Navios
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int tabuleiro[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++) {      
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navio1 [3] = {3,3,3};//horizontal
    int navio2 [3] = {3,3,3};//vertical
    int navio3 [3] = {3,3,3};//diagonal
    int navio4 [3] = {3,3,3};//diagonal

    //Posicionamento dos navios
    for (int i = 0; i < 3; i++){
        if (tabuleiro[0][2+i] == 3){
            printf("Posicionamento do navio 1 inválido!\n");
            break;
        } else {
            tabuleiro[0][2+i] = 3;//Navio 1 
        }
        if (tabuleiro[2+i][1] == 3){
            printf("Posicionamento do navio 2 inválido!\n");
            break;
        } else {
            tabuleiro[2+i][1] = 3;//Navio 2
        }
        if (tabuleiro[3+i][4+i] == 3){
            printf("Posicionamento do navio 3 inválido!\n");
            break;
        } else {
            tabuleiro[3+i][4+i] = 3;//Navio 3
        } 
        if (tabuleiro[9-i][3+i] == 3){
            printf("Posicionamento do navio 4 inválido!\n");
            break;
        } else {
            tabuleiro[9-i][3+i] = 3;//Navio 4
        }
    }
    printf("Exibindo como está o campo de batalha antes de iniciar os ataques...\n");
    //Exibição do tabuleiro
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 ou 2 para áreas de água atingidas e 4 ou + para navios atingidos.

    //Matriz dos ataques
    int cone[3][5] = {{0,0,1,0,0},{0,1,1,1,0},{1,1,1,1,1}}, octaedro[3][5] = {{0,0,1,0,0},{0,1,1,1,0},{0,0,1,0,0}}, cruz[3][5] = {{0,0,1,0,0},{1,1,1,1,1},{0,0,1,0,0}};
    //Inicio do ataque cone será no indice tabulerio[1][3]. Inicio do ataque octaedro será tabuleiro[4][4]. Inicio ataque cruz será tabuleiro[3][2].
    //Ataque em cone
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            if ((i == 1 && j == 3) || (i == 2 && j >= 2 && j <=4) || (i == 3 && j >= 1 && j <= 5)){
                tabuleiro[i][j] = tabuleiro[i][j] + 1;
            }
        }
    }
    printf("Ataque em cone!\n");
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Ataque em octaedro
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            if ((i == 3 && j == 4) || (i == 4 && j >= 3 && j <= 5) || (i == 5 && j == 4)){
                tabuleiro[i][j] = tabuleiro[i][j] + 1;
            }
        }
    }
    printf("Ataque em octaedro!\n");
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Ataque em cruz
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            if ((i == 2 && j == 2) || (i == 3 && j >= 0 && j <=4) || (i == 4 && j == 2)){
                tabuleiro[i][j] = tabuleiro[i][j] + 1;
            }
        }
    }
    printf("Ataque em cruz!\n");
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
