/*************************************************************************
                           State4  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State4> (file State4.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State4.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State4::transition(Automaton* automaton, Symbole* s)
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
          displayAction("EXPR","offset","State 7");
        #endif
        automaton->offset(s, new State7(), false);
        break;
      default:
        handleError(automaton, s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State4::State4() : State("State 4") {
#ifdef MAP
    cout << "Appel au constructeur de <State4>" << endl;
#endif
} //----- End of State4 (constructeur)

State4::~State4() {
#ifdef MAP
    cout << "Appel au destructeur de <State4>" << endl;
#endif
} //----- End of ~State4

//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

void State4::displayExpectedResults() const
{
  cout << "Expected symbols : integer or '('" << endl ; 
}