#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "yeardata.h"

#define NB_ANNEE 20
#define PREMIERE_ANNEE 2005


void initialiser_tab(Yeardata *tab){
	for(int i=0;i<NB_ANNEE;i++){
		tab[i].nb_accident=0;
		tab[i].indemnes=0;
		tab[i].tues=0;
		tab[i].blesse_grave=0;
		tab[i].blesse_leger=0;
		}
	}
int max(int a, int b){
	return (a>b) ? a : b ;
}

int tabinfos(){
	int annee ;
	int anneechoix ;
	int severite ;
	int coliden ;
	FILE * f = NULL ;
	f = fopen("test.csv", "r");
	Yeardata tab [NB_ANNEE];
	initialiser_tab(tab) ;
	char ligne[256] ;
	fgets(ligne, sizeof (ligne),f) ;

	while(fgets(ligne, sizeof(ligne), f) !=NULL){
	if (sscanf(ligne, "%d;%d;%*[^;];%*d;%*d;%d",&annee, &coliden, &severite ) != 3 || (severite != 1 && severite !=2 && severite != 3 && severite != 4)){
	continue ;
	}
	
	if (annee >= 2005 && annee <= 2024){
	int i= annee-2005 ;
	tab[i].nb_accident = max(tab[i].nb_accident , coliden) ;
	
	if(severite == 1){
	tab[i].indemnes++ ;
	}
	if(severite == 2){
	tab[i].tues++ ;
	}
	if(severite == 3){
	tab[i].blesse_grave++ ;
	}
	if(severite == 4){
	tab[i].blesse_leger++ ;
	}
	}
	}
	
	
	printf("==================================================================== \n");
	printf("CHOISIR UNE ANNEE ENTRE 2005 ET 2024 : \n");
	printf("==================================================================== \n");
	int ret;
	while (1) {
		ret = scanf("%d", &anneechoix);
		if (ret == 1 && anneechoix >= 2005 && anneechoix <= 2024) {
		break;
		}
		int z;
		while ((z = getchar()) != '\n' && z != EOF) {}
		printf("CHOISIR UNE ANNEE ENTRE 2005 ET 2024 : \n");
	}
	int pos = anneechoix - 2005;
	printf("nombre accident sur l annee %d : %d \n ", anneechoix ,tab[pos].nb_accident);
	printf("nombre d indemnes sur l annee %d : %d \n", anneechoix ,tab[pos].indemnes);
	printf("nombre de tues sur l annee %d : %d \n", anneechoix ,tab[pos].tues);
	printf("nombre de blesse grave sur l annee %d : %d \n", anneechoix ,tab[pos].blesse_grave);
	printf("nombre de blesse leger sur l annee %d : %d \n", anneechoix ,tab[pos].blesse_leger);
return 0;	
} 
