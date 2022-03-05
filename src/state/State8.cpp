/*************************************************************************
                           State8  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State8> (file State8.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State8.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State8::transition(Automaton* automaton, Symbole* s)
{
#ifdef TRACE
      displayState();
#endif
    
    switch(*s) {
      case PLUS:
        #ifdef TRACE
          displayAction("PLUS","reduction","3");
        #endif
        automaton->reduction(3);
        break;
      case MULT:
        #ifdef TRACE
          displayAction("MULT","reduction","3");
        #endif
        automaton->reduction(3);
        break;
      case CLOSEPAR:
        #ifdef TRACE
          displayAction("CLOSEPAR","reduction","3");
        #endif
        automaton->reduction(3);
        break;
      case FIN:
        #ifdef TRACE
          displayAction("FIN","reduction","3");
        #endif
        automaton->reduction(3);
        break;
      default:
        displayError(s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State8::State8() : State("State 8") {
#ifdef MAP
    cout << "Appel au constructeur de <State8>" << endl;
#endif
} //----- End of State8 (constructeur)

State8::~State8() {
#ifdef MAP
    cout << "Appel au destructeur de <State8>" << endl;
#endif
} //----- End of ~State8

