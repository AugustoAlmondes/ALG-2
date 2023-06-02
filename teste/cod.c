#include <stdio.h>
#include <string.h>

typedef struct{
	char pais[20];
	int ouro, prata, bronze;
} medalhas;

void leitura(medalhas medalhaspais[], int casos);
void ordena(medalhas medalhaspais[], int casos);
void ordenaOuro(medalhas medalhaspais[], int casos);
void ordenaPrata(medalhas medalhaspais[], int casos);
void ordenaBronze(medalhas medalhaspais[],int casos);
void imprime(medalhas medalhaspais[], int casos);

void main(int argc, char *argv[]){
	
	FILE *fentrada, *fsaida;
	int casos, i;
    medalhas medalhaspais[casos + 1];

	for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
	}

	fentrada = fopen("entrada.txt","r");
	fsaida = fopen("saida.txt","w");
	
	fscanf(fentrada, "%d", &casos);
	printf("Valor de casos %d\n", casos);
	for(i = 0; i <= casos; i++){
		fscanf(fentrada, "%s %d %d %d", medalhaspais[i].pais, &medalhaspais[i].ouro, &medalhaspais[i].prata, &medalhaspais[i].bronze);
	}
    fclose(fentrada);
    
	ordenaOuro(medalhaspais, casos);
	ordenaBronze(medalhaspais, casos);
	ordenaPrata(medalhaspais, casos);
	ordena(medalhaspais, casos);
	
	for(i = 0; i < casos; i++){
		fprintf(fsaida, "%s %d %d %d\n", medalhaspais[i].pais, medalhaspais[i].ouro, medalhaspais[i].prata, medalhaspais[i].bronze);
	}
    fclose(fsaida);
}
void ordena(medalhas medalhaspais[], int casos){

	int i = 1, j;
	medalhas pivo;

	while (i < casos){
		j = i - 1;
		pivo = medalhaspais[i];
		while (j >= 0 && medalhaspais[j].ouro < pivo.ouro){
			medalhaspais[j + 1] = medalhaspais[j];
			j--;
		}
		medalhaspais[j + 1] = pivo;
		i++;
	}
}
void ordenaOuro(medalhas medalhaspais[], int casos){

	int i = 1, j;
	medalhas pivo;

	while (i < casos){
		j = i - 1;
		pivo = medalhaspais[i];
		while(j >= 0 && strcmp(medalhaspais[j].pais, pivo.pais) > 0){
			medalhaspais[j + 1] = medalhaspais[j];
			j--;
		}
		medalhaspais[j + 1] = pivo;
		i++;
	}
}
void ordenaBronze(medalhas medalhaspais[], int casos){

	int i = 1, j;
	medalhas pivo;

	while (i < casos){
		j = i - 1;
		pivo = medalhaspais[i];
		while (j >= 0 && medalhaspais[j].bronze < pivo.bronze){			
			medalhaspais[j + 1] = medalhaspais[j];
			j--;
		}
		medalhaspais[j + 1] = pivo;
		i++;
	}
}
void ordenaPrata(medalhas medalhaspais[], int casos){
	
	int i = 1, j;
	medalhas pivo;

	while (i < casos){
		j = i - 1;
		pivo = medalhaspais[i];
		while (j >= 0 && medalhaspais[j].prata < pivo.prata){
			medalhaspais[j + 1] = medalhaspais[j];
			j--;
		}
		medalhaspais[j + 1] = pivo;
		i++;
	}
}