#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int escolha_do_jogador, escolha_da_maquina;
	srand(time(0));

	system("cls");

	printf("*** J O K E N P O ***\n\n");
	printf("Escolha uma das opcoes: \n");
	printf("[1] - Pedra\n[2] - Papel\n[3] - Tesoura\n\n");
	scanf("%d", &escolha_do_jogador);

	escolha_da_maquina = rand() % 3 + 1;

	printf("\nESCOLHAS: ");

	switch(escolha_do_jogador){
		case 1:
			printf("\nUsuario: Pedra x ");
			break;
		case 2:
			printf("\nUsuario: Papel x ");
			break;
		case 3:
			printf("\nUsuario: Tesoura x ");
			break;
		default:
			printf("\nOpcao invalida.");
	}

	switch(escolha_da_maquina){
		case 1:
			printf("Maquina: Pedra\n");
			break;
		case 2:
			printf("Maquina: Papel\n");
			break;
		case 3:
			printf("Maquina: Tesoura\n");
			break;
		default:
			printf("Opcao invalida.\n");
	}

	printf("\nRESULTADO: ");

	if (escolha_do_jogador == escolha_da_maquina)
	 {
	 	printf("\nO jogo empatou");
	 } else {
		 		if ((escolha_do_jogador == 1 && escolha_da_maquina == 2) || (escolha_do_jogador == 2 && escolha_da_maquina == 3)){
		 			printf("\nA maquina ganhou o jogo");
		 		} else {
		 			printf("\nO usuario ganhou");
		 		}
	 	 	}	

	return 0;
}