/*************************************************************************
                           State1  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//--------- Realisation of the class <State1> (file State1.cpp) ----------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State1.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State1::transition(Automaton* automaton, Symbole* s)
{
#ifdef TRACE
      displayState();
#endif
    
    switch(*s) {
      case PLUS:
        #ifdef TRACE
          displayAction("PLUS","offset","State 4");
        #endif
        automaton->offset(s, new State4());
        break;
      case MULT:
        #ifdef TRACE
          displayAction("MULT","offset","State 5");
        #endif
        automaton->offset(s, new State5());
        break;
      case FIN:
        #ifdef TRACE
          displayAction("FIN","offset","Raftel");
        #endif
        automaton->endAlgorithm() ;
        return false ;
        break;
      default:
        displayError(s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State1::State1() : State("State 1") {
#ifdef MAP
    cout << "Appel au constructeur de <State1>" << endl;
#endif
} //----- End of State1 (constructeur)

State1::~State1() {
#ifdef MAP
    cout << "Appel au destructeur de <State1>" << endl;
#endif
} //----- End of ~State1