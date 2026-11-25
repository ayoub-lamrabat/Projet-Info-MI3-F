#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

Chainon* creationChainon(int age){

	Chainon* c = malloc(sizeof(Chainon));
	if(c==NULL){
		exit(1);
	}
	c->valeur.age=age;
	c->valeur.conducteur=0;
	c->valeur.passager=0;
	c->valeur.pieton=0;
	c->valeur.homme=0;
	c->valeur.femme=0;
	c->valeur.autre_genre=0;
	c->suivant=NULL;
return c;
}

Chainon* insertDebut(Chainon* pliste,int age ){

	Chainon* nouveau=creationChainon(age);
	if (nouveau==NULL){
		exit(2);
	}
	nouveau->suivant=pliste;
return nouveau;
}
	int annee1;
	int type;
	int genre;
	int birth;

	FILE * f = NULL ;
	f = fopen("test.csv", "r");
	char ligne[256] ;
	fgets(ligne, sizeof (ligne),f) ;
	while(fgets(ligne, sizeof(ligne), f) !=NULL){
		if (sscanf(ligne, "%d;%*d;%*[^;];%*d;%d;%*d;%d;%d",&annee1, &type, &genre,&birth ) != 4 || (type != 1 && type !=2 && type != 3 )||(genre != 0 && genre !=1 && genre != 2 )){
		
	continue ;
		
	}
		if(annee1>= 2005 && annee1 <= 2024){
		int age1=annee1-birth;
			if(pliste==NULL){
				pliste=creationChainon(age1);}
			while(pliste!=NULL){
				if(pliste->valeur.age==age1){
					if(type==1){
						pliste->valeur.conducteur++;}
					if(type==2){
						pliste->valeur.passager++;}
					if(type==3){
						pliste->valeur.pieton++;}
					if(genre==1){
						pliste->valeur.homme++;}
					if(genre==2){
						pliste->valeur.femme++;}
					if(genre==0){
						pliste->valeur.autre_genre++;}
				}
				else{
				pliste=pliste->suivant;
				}
			}


		
