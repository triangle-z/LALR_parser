#include "Lexer.h"
#include <iostream>
using namespace std;

Symbole * Lexer::Consulter() {
   if (!tampon) {

      if (tete==flux.length())
         tampon = new Symbole(FIN);
      else
      {

         switch (flux[tete]) {
            case '(':
               tampon = new Symbole(OPENPAR);
               tete++;
               break;
            case ')':
               tampon = new Symbole(CLOSEPAR);
               tete++;
               break;
            case '*':
               tampon = new Symbole(MULT);
               tete++;
               break;
            case '+':
               tampon = new Symbole(PLUS);
               tete++;
               break;
            default:
               if (flux[tete]<='9' && flux[tete]>='0') {
                  int resultat = flux[tete]-'0';
                  int i=1;
                  while (flux[tete+i]<='9' && flux[tete+i]>='0') {
                     resultat = resultat*10+(flux[tete+i]-'0');
                     i++;
                  }
                  tete = tete+i;
                  tampon = new Entier(resultat);
               }
               else {
                  tampon = new Symbole(ERREUR);
               }
         }
      }
   }
   return tampon;
}

void Lexer::Avancer() {
   tampon = nullptr;
}

void Lexer::Ajouter(Symbole* symbole) {
   Avancer() ;
   string toAdd = "" ;
   switch (*symbole) {
      case OPENPAR:
         toAdd = "(" ;
         break;
      case CLOSEPAR:
         toAdd = ")" ;
         break;
      case MULT:
         toAdd = "*" ;
         break;
      case PLUS:
         toAdd = "+" ;
         break;
      default:
         toAdd = symbole->getValue() ;
   }
   cout<<"-----> Ajoute "<<toAdd<<endl ;
   flux = flux.insert(6,toAdd);
}

