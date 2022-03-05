/*************************************************************************
                           State7  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State7> (file State7.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State7.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State7::transition(Automaton* automaton, Symbole* s)
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
          displayAction("MULT","offset","State 5");
        #endif
        automaton->offset(s, new State5());
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

State7::State7() : State("State 7") {
#ifdef MAP
    cout << "Appel au constructeur de <State7>" << endl;
#endif
} //----- End of State7 (constructeur)

State7::~State7() {
#ifdef MAP
    cout << "Appel au destructeur de <State7>" << endl;
#endif
} //----- End of ~State7