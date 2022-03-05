#include "Symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

int Symbole::getValue() {
   return -1 ;
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

int Entier::getValue() {
   return valeur ;
}

void Expression::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

int Expression::getValue() {
   return valeur ;
}

