/* nome: joel anderson rodrigues */
/* matricula: 571518 */
/* questão: 03 */
/* data: 15/01/2025 */
/* ambiente: linux */
/* ferramenta: neovim */
/* versão compilador: 14.2.1 */

/* Escreva um programa em C que leia dois valores inteiros, sendo estes a quantidade de linhas */
/* (l) e a quantidade de colunas (c) de uma matriz de inteiros (que deverá ser criada / declarada */
/* de tamanho “l x c”). Então, leia os elementos desta matriz (informando antes de cada leitura */
/* qual a linha e coluna a ser digitada) e exiba a matriz (de forma tabular com os números */
/* dispostos em linhas e colunas – com os números numa mesma linha sendo separados por */
/* uma tabulação) na tela. */

#include <stdio.h>

int main() {
    int l, c, num;

    printf("Didite a quantidade de linhas e colunas da matriz: ");
    scanf("%d %d", &l, &c);

    int matriz[l][c];

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite o valor para a linha[%d] e coluna[%d]: ", i, j);
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
