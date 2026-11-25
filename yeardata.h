#ifndef YEARDATA_H
#define YEARDATA_H


typedef struct{
	int nb_accident;
	int indemnes;
	int tues;
	int blesse_grave;
	int blesse_leger;
	} Yeardata ;



int max(int a, int b);
void initialiser_tab(Yeardata *tab);
int tabinfos();
#endif
