#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loco();


int main(){
	loco();

	int segundos = time(0);
	srand(segundos);
	int totaltentativas;	
	int numerosecreto = rand() % 100, chute,nivel;
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) Difícil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	if(nivel == 1){ totaltentativas = 20; printf("Voce Tem 20 tentativas!\n");}
	if(nivel == 2){totaltentativas = 15; printf("Voce Tem 15 tentativas!\n");}
	if(nivel == 3){totaltentativas = 6; printf("Voce Tem 2 tentativas!\n");}
	for(int i =1;i<=totaltentativas;i++){
		printf("Voce tem %d Tentativas!\n", i -1);

		printf("Qual é o Seu %d Numero? ¬>",i);
		scanf("%d", &chute);
		printf("\nVoce Chutou [%d] Vezes| Numero: %d",i,chute);
		int acertou = chute == numerosecreto;
		int maior = chute > numerosecreto;
		int menor = chute < numerosecreto;
		int negativo = chute < 0;
		if(acertou){
			printf("\nParabens, você acertou!\nJogue de Novo, Voce é um Bom Jogador!\n");
			break;
		}
		if(negativo){
			printf("\nVoce Nao Pode Chutar Numeros Negativos!\n");
			i--;
			continue;
		}
		if(maior){printf("\nSeu Chute Foi Maior Que o Numero Secreto!\n");}
		if(menor){printf("\nSeu Chute Foi Menor Que o Numero Escolhido!\n");}



	}
	printf("Fim De Jogo!\n");
}


void loco(){
printf("    ____                            _           __         \n");
printf("   / __ )___  ____ ___       _   __(_)___  ____/ /___   \n");  
printf("  / __  / _ \\/ __ `__ \\_____| | / / / __ \\/ __  / __ \\   \n");  
printf(" / /_/ /  __/ / / / / /_____/ |/ / / / / / /_/ / /_/ /   \n");  
printf("/_____/\\___/_/ /_/ /_/      |___/_/_/ /_/\\__,_/\\____/   \n");   
                                                         

}