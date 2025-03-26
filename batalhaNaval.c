#include <stdio.h>

#define linhas 10
#define colunas 10

void imprimirTabuleiroDeDez(int matriz[linhas][colunas]){
    
    printf("\n  "); // espaço para alinhas as LETRAS com os ZEROS.
    
    for(char letra = 'A'; letra <= 'J'; letra++){ // Loop para printar as letras das colunas.
        printf("%2c", letra);
    }
    
    printf("\n"); // Quebra de linha para que as letras fiquem em cima dos ZEROS.
    
    for(int i = 0; i < linhas; i++){
        printf("%2d ", i + 1); // printa os numeros antes dos ZEROS.

        for(int j = 0; j < colunas; j++){ // loop atribiu valores aos indices.
            matriz[i][j] = 0;

            for(int k = 3; k < 6; k++){ // injeta o 'navio' na linha 5 da matriz.
                matriz[4][k] = 3;
            }

            for(int l = 7; l < 10; l++){ // Injeta o 'navio' na coluna 'I' e nas linhas 8, 9, 10.
                matriz[l][8] = 3;
            }

            for(int m = 0; m < 3; m++){ // Injeta o navio na Horizontal, começa em [0,0].
                matriz[m][m] = 3;
            }

            for(int n = 0; n < 3; n++){ // Injeta o navio na Horizontal, começa em [0,0].
                matriz[n][n] = 3;
            }

            for(int o = 0 ; o < 3 ; o++){ // injeta o navio na diagonal [7,0]
               matriz[8 - o][0 + o] = 5;
            }
            
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

}

int main() {
    
    int tabuleiro[linhas][colunas];
    
    // Espaço para melhor tabulação
    printf("\n"); 

    // Chama a função para imprimir o tabuleiro
    imprimirTabuleiroDeDez(tabuleiro);

    // Espaço para melhor tabulação.
    printf("\n");
    
    return 0;
}

/*

    SAIDA ESPERADA ! NOVATO

    A B C D E F G H I J
  1 0 0 0 0 0 0 0 0 0 0
  2 0 0 0 0 0 0 0 0 0 0
  3 0 0 0 0 0 0 0 0 0 0 
  4 0 0 0 0 0 0 0 0 0 0
  5 0 0 0 0 0 0 0 0 0 0
  6 0 0 0 0 0 0 0 0 0 0
  7 0 0 0 0 0 0 0 0 0 0
  8 0 0 0 0 0 0 0 0 0 0
  9 0 0 0 0 0 0 0 0 0 0
 10 0 0 0 0 0 0 0 0 0 0


*/