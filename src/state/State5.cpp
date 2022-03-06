/*************************************************************************
                           State5  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State5> (file State5.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State5.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State5::transition(Automaton* automaton, Symbole* s)
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
          displayAction("EXPR","offset","State 8");
        #endif
        automaton->offset(s, new State8(), false);
        break;
      default:
        handleError(automaton, s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State5::State5() : State("State 5") {
#ifdef MAP
    cout << "Appel au constructeur de <State5>" << endl;
#endif
} //----- End of State5 (constructeur)

State5::~State5() {
#ifdef MAP
    cout << "Appel au destructeur de <State5>" << endl;
#endif
} //----- End of ~State5

//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

void State5::displayExpectedResults() const
{
  cout << "Expected symbols : integer or '('" << endl ; 
}