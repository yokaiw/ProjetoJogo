#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*
Emelly Alves da Gama - RA: 21592269;
Vinicius Henrique Medeiros Soares - RA: 21433620;
Caique Rodrigues Simões- RA: 20501139;
Yuri G. W. Calori Lemes - RA: 21577292;
*/

int main(){
    int interacoes = 0, sala = 1, escolha;
    bool vaiProPortal;
    int salaAleatoria;

    while (sala < 9 ){
      printf("Voce esta na sala: %d \n ",sala);
      printf("Escolha seu caminho:\n ");
      if(sala != 6 ){
        printf("Caminho Vermelho - [1] \n" );
         
      }
      printf("Caminho preto - [2] \n ");
      scanf("%d", &escolha);
      
      interacoes++;
      vaiProPortal = (sala == 8 && escolha == 2 );
      srand(time(0));
      salaAleatoria =((rand()%5)+1); 
      sala = ( salaAleatoria * vaiProPortal) + ((sala + escolha) * !vaiProPortal );

    }

    if(interacoes >= 7 ){
      printf("Voce utilizou 7 ou mais movimentos! Voce perdeu!\n ");
    }
    else{
      printf("Voce ganhou! Voce utilizou apenas %d movimentos \n", interacoes);
    }
    return 0;
}