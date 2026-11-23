#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("==================================================================== \n");
	printf("CHOISIR LE TYPE DE STATISTIQUE : \n");
	printf("==================================================================== \n");
	printf(" 1 : statistiques d'accidents par année   \n");
	printf(" 2 : statistiques par rapport à l’âge des personnes impliquées dans les accidents  \n");
	printf(" 3 : données liées à un accident qui sera recherché par son année et son collision_id  \n");
	printf("==================================================================== \n");
	int a;
	
	while(scanf("%d",&a) != 1|| (a !=1 && a != 2 && a != 3)){
	printf("entrez soit 1 soit 2 soit 3 \n");
	int c;
	while ((c= getchar()) != '\n' && c != EOF){}
	}
	if (a== 1){
				//fichier annee 
	}
	if (a==2){
				//fichier age
	}
	if (a==3){
				//crash data
	}
	printf("%d \n", a);
	return 1;
}
