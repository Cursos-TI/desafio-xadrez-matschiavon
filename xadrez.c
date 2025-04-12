#include <stdio.h>

//Função Recursiva para a Torre

void moverTorre(int casas){
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

//Função Recursiva para a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//Função Recursiva + Loops Aninhados para o Bispo
void moverBispoRecursivo(int casas) {
    if(casas == 0) return;

    //Simula uma casa na diagonal usando loops aninhados:
    for(int i = 0; i < 1; i++){  //Vertical (simulando cima)
        for(int j = 0; j < 1; j++){ // horizontal (simulando direita)
        }
    }

    moverBispoRecursivo(casas - 1);
}

//Cavalo: Movimento em "L" com loops complexos
//Duas casas para cima e uma para a direita

void moverCavalo(){
    int movimentos = 1;

    for (int i = 0; i < movimentos; i++) {
        for (int passo = 1; passo <= 3; passo++){
            if(passo <= 2){
                if (passo == 2){
                    printf("Cima\n");
                    continue;
                }
                printf("Cima\n");
            } else {
                printf("Direita\n");
                break;
            }
        }
    }
}
int main() {
    
    //Torre: 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    printf("\n");

    //Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    //Cavalo: 2 casas para cima e 1 para a direita (em L)
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    moverCavalo();
    printf("\n");

    return 0;

}