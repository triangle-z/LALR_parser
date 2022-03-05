/*************************************************************************
                           State9  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State9> (file State9.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State9.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State9::transition(Automaton* automaton, Symbole* s)
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

State9::State9() : State("State 9") {
#ifdef MAP
    cout << "Appel au constructeur de <State9>" << endl;
#endif
} //----- End of State9 (constructeur)

State9::~State9() {
#ifdef MAP
    cout << "Appel au destructeur de <State9>" << endl;
#endif
} //----- End of ~State9