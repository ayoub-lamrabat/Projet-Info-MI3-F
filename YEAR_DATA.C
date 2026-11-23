#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define NB_ANNEE 20


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
	}Victime


void initialiser_tab(Yeardata tab[]){
