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

void ajouter_info(Chainon *c,int type,int genre){
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
			int trouve=0;
			if(pliste==NULL){
				pliste=creationChainon(age1);}
			Chainon *courant=pliste;
			while(courant!=NULL){
				if(courant->valeur.age==age1){
					ajouter_info(courant, type, genre);
					trouve=1;
					break;}
				courant=courant->suivant;
			}
			if(!trouve){
				Chainon *nouveau=creationChainon(age1);
				if(nouveau!=NULL){
					ajouter_info(nouveau, type, genre);
					nouveau->suivant=pliste;
					pliste=nouveau;}
				else{
				pliste=pliste->suivant;
				}
			}
				


	printf("==================================================================== \n");
	printf("CHOISIR L'AGE DONT VOUS VOULEZ LES STATISTIQUES: \n");
	printf("==================================================================== \n");
	int ret;
	while (1) {
		ret = scanf("%d", &agechoix);
		if (ret == 1 && agechoix >= 0 && agechoix <= 120) {
		break;
		}
		int z;
		while ((z = getchar()) != '\n' && z != EOF) {}
		printf("CHOISIR L'AGE DONT VOUS VOULEZ LES STATISTIQUES: : \n");
	}
	int pos = anneechoix - 2005;
	printf("nombre accident sur l annee %d : %d \n ", anneechoix ,tab[pos].nb_accident);
	printf("nombre d indemnes sur l annee %d : %d \n", anneechoix ,tab[pos].indemnes);
	printf("nombre de tues sur l annee %d : %d \n", anneechoix ,tab[pos].tues);
	printf("nombre de blesse grave sur l annee %d : %d \n", anneechoix ,tab[pos].blesse_grave);
	printf("nombre de blesse leger sur l annee %d : %d \n", anneechoix ,tab[pos].blesse_leger);
return 0;	
} 		
