#include <stdio.h>

int main() {

    printf("####   DESAFIO XADREZ!!!   ####\n\n");
    
    // Movimento da Torre (FOR)
    // A Torre deve se mover horizontalmente para a direita
    // Simularemos 5 casas para a Direita usando um loop for

    int i; // Variável de controle para o for
    
    printf("Movimento da Torre (5 casas para a Direita):\n");
    
        for (i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    
    // Movimento do Bispo (WHILE)
    // O Bispo deve se mover na diagonal para cima e para a direita
    // Simularemos 5 casas na diagonal usando um loop while

    int j = 1; // Inicializa o contador
        
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    
        while (j <= 5) 
    {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

   
    // Movimento da Rainha (DO-WHILE)
    // A Rainha deve se mover em todas as direções (aqui: 8 casas para a Esquerda)
    // Simularemos 8 casas para a esquerda usando do-while

    int k = 1; // Inicializa o contador

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    
    do 
    {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    printf("\n");

    // Movimento do Cavalo (FOR E WHILE)
    // O Cavalo deve se mover em "L" duas casas para baixo e uma para a esquerda
    // Simularemos usando dois loops aninhados (for e while)

    int l = 1; // Inicializa o contador

    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");


    while (l--)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }


    return 0;
}
