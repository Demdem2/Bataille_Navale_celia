#include <stdio.h>
#include <string>
#include <string.h>

#define TAILLE 10


typedef struct Case {
	int n_ligne;
	int n_colonne;
}cases;

typedef struct Bateau{
	cases bateau;
	
};

typedef struct Flotte {
	Bateau flotte;
};

void Creacase(cases* n_ligne, cases* n_colonne);
int CompareCase(Creacase(cases* n_ligne, cases* n_colonne));


int main(){
	
	
} 

void Creacase(cases* n_ligne, cases* n_colonne) {
	cases creecase[TAILLE];
	for (int i = 0; i < TAILLE; i++) {
		for (int j = 0; j < TAILLE; j++) {
			creecase[i].n_ligne = 0;
			creecase[j].n_colonne = 0;
		}
	}
	
}

int CompareCase(Creacase(cases* n_ligne,cases* n_colonne)) {
	if (creecase[i].n_ligne==creecase[i+1].n_ligne)
	{
		return 1;
	}
	else {
		return 0;
	}

}


