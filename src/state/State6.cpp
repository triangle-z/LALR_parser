/*************************************************************************
                           State6  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Realisation of the class <State6> (file State6.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State6.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State6::transition(Automaton* automaton, Symbole* s)
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
      case CLOSEPAR:
        #ifdef TRACE
          displayAction("CLOSEPAR","offset","State 9");
        #endif
        automaton->offset(s, new State9());
        break;
      default:
        handleError(automaton, s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State6::State6() : State("State 6") {
#ifdef MAP
    cout << "Appel au constructeur de <State6>" << endl;
#endif
} //----- End of State6 (constructeur)

State6::~State6() {
#ifdef MAP
    cout << "Appel au destructeur de <State6>" << endl;
#endif
} //----- End of ~State6

//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

void State6::displayExpectedResults() const
{
  cout << "Expected symbols : '+', '*' or ')'" << endl ; 
}