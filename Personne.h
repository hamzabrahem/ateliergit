
#define perso_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>




typedef struct Personne
{
	SDL_Surface *images[2][4]; /*!< matrices contenant les 24 frames*/
	SDL_Rect position;
	int direction;
	int nbr_frame;
	/*
		0:droite
		1:gauche
	*/
	double vitesse,acceleration,vitesse_saut;

}Personne;



void initPerso(Personne *p);


void afficherPerso(Personne p, SDL_Surface * screen);


void deplacerPerso (Personne *p,int dt);



void animerPerso (Personne* p);



void saut (Personne* p) ;


 
