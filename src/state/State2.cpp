/*************************************************************************
                           State2  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State2> (file State2.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State2.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State2::transition(Automaton* automaton, Symbole* s)
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
          displayAction("EXPR","offset","State 6");
        #endif
        automaton->offset(s, new State6(), false);
        break;
      default:
        displayError(s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State2::State2() : State("State 2") {
#ifdef MAP
    cout << "Appel au constructeur de <State2>" << endl;
#endif
} //----- End of State2 (constructeur)

State2::~State2() {
#ifdef MAP
    cout << "Appel au destructeur de <State2>" << endl;
#endif
} //----- End of ~State2