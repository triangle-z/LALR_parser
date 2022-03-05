/*************************************************************************
                           State0  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State0> (file State0.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State0.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State0::transition(Automaton* automaton, Symbole* s)
{
#ifdef TRACE
      displayState();
#endif
    
    switch(*s) {
      case INT:
        #ifdef TRACE
          displayAction("INT","offset","State 3");
        #endif
        automaton->offset(s, new State3());
        break;
      case OPENPAR:
        #ifdef TRACE
          displayAction("OPENPAR","offset","State 2");
        #endif
        automaton->offset(s, new State2());
        break;
      case EXP:
        #ifdef TRACE
          displayAction("EXPR","offset","State 1");
        #endif
        automaton->offset(s, new State1(), false);
        break;
      default:
        displayError(s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State0::State0() : State("State 0") {
#ifdef MAP
    cout << "Appel au constructeur de <State0>" << endl;
#endif
} //----- End of State0 (constructeur)

State0::~State0() {
#ifdef MAP
    cout << "Appel au destructeur de <State0>" << endl;
#endif
} //----- End of ~State0