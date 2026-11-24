#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define NB_ANNEE 20
#define PREMIERE_ANNEE 2005

typedef struct{
	int nb_accident;
	int indemnes;
	int tues;
	int blesse_grave;
	int blesse_leger;
	} Yeardata

typedef struct{
	int year;
	int collision_ID[10];
	char vehicule_ID[10];
	int location;
	int user_type;
	int severity;
	int gender;
	int birth_year;
	int purpose;
	}Accident

void initialiser_tab(Yeardata tab[]){
	for(int i=0;i<NB_ANNEE;i++){
		tab[i].nb_accident=0;
		tab[i].indemnes=0;
		tab[i].tues=0;
		tab[i].blesse_grave=0;
		tab[i].blesse_leger=0;
		}
	}

// fonction lire donnée fichier
//fonction affiche tableau de donnée
