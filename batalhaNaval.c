#include <stdio.h>

void imprimirTabuleiroDeDez(int matriz[10][10]){

    printf("\n  "); // espaço para alinhas as LETRAS com os ZEROS.

    for(char letra = 'A'; letra <= 'J'; letra++){ // Loop para printar as letras das colunas.
        printf("%2c", letra);
    }

    printf("\n"); // Quebra de linha para que as letras fiquem em cima dos ZEROS.

    for(int i = 0; i < 10; i++){ // loop para printar os numeros das linhas
        printf("%2d ", i + 1);
   
        for(int j = 0; j < 10; j++){ // loop para printar a matriz, após o numero da linha. correndo linhas e colunas.
          printf("%d ", matriz[i][j]);
       }

        printf("\n");
    }

}

int main() {

    // NAVIO = 3

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 3, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 3, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 3, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
        {0, 0, 0, 0, 0, 0, 3, 3, 3 ,0}
    };
    


   imprimirTabuleiroDeDez(tabuleiro); // Chama a função para imprimir o Tabuleiro

    

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