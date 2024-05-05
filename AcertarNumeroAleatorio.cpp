#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main(){
	
	int numero_aleatorio;
	int N, i, acerto;
	
	N = 5;
	int vet[N];
	
	for (i = 0; i < N; i++){
		printf("Digite um numero inteiro: ");
		scanf("%i", &vet[i]);
	}
	
	srand(time(NULL));   
    numero_aleatorio = rand()%50;  
    printf("O numero randomico gerado foi %i\n", numero_aleatorio);     
    
    acerto = 0;
    for (i = 0; i < N; i++){
    	if (vet[i] == numero_aleatorio){
    		acerto = acerto + 1;
		}
	}
	
	if (acerto > 0){
		printf("PARABENS!! VOCE ACERTOU!!");
	}
	else{
		printf("VOCE ERROU!! TENTE NOVAMENTE NA PROXIMA :(");
	}
	
   return 0;
}

