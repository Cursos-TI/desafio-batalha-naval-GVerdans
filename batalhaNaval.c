#include <stdio.h>

#define linhas 10
#define colunas 10

// função para imprimir o tabuleiro
void imprimirTabuleiroDeDez(int matriz[linhas][colunas]){
    
    printf("\n  "); // espaço para alinhas as LETRAS com os ZEROS.
    
    for(char letra = 'A'; letra <= 'J'; letra++){ // Loop para printar as letras das colunas.
        printf("%2c", letra);
    }
    
    printf("\n"); // Quebra de linha para que as letras fiquem em cima dos ZEROS.
    
    for(int i = 0; i < linhas; i++){
        printf("%2d ", i + 1); // printa os numeros antes dos ZEROS.

        for(int j = 0; j < colunas; j++){ // loop atribui valores aos indices.
            matriz[i][j] = 0;

            // Injeção dos Navios
            for(int k = 3; k < 6; k++){ // injeta o 'navio' na linha 5 da matriz.
                matriz[4][k] = 3;
            }

            for(int l = 7; l < 10; l++){ // Injeta o 'navio' na coluna 'I' e nas linhas 8, 9, 10.
                matriz[l][8] = 3;
            }

            for(int m = 0; m < 3; m++){ // Injeta o navio na Horizontal, começa em [0,0].
                matriz[m][m] = 3;
            }

            for(int n = 0 ; n < 3 ; n++){ // injeta o navio na diagonal [7,0]
               matriz[8 - n][0 + n] = 3;
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

      3
    3 3 3    
      3

      3
     3 3
      3

      3
    3 3 3
  3 3 3 3 3
*/