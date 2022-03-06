/*************************************************************************
                           State3  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//--------- Realisation of the class <State3> (file State3.cpp) ----------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State3.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

bool State3::transition(Automaton* automaton, Symbole* s)
{
#ifdef TRACE
      displayState();
#endif
    
    switch(*s) {
      case PLUS:
        #ifdef TRACE
          displayAction("PLUS","reduction","1");
        #endif
        automaton->reduction(1);
        break;
      case MULT:
        #ifdef TRACE
          displayAction("MULT","reduction","1");
        #endif
        automaton->reduction(1);
        break;
      case CLOSEPAR:
        #ifdef TRACE
          displayAction("CLOSEPAR","reduction","1");
        #endif
        automaton->reduction(1);
        break;
      case FIN:
        #ifdef TRACE
          displayAction("FIN","reduction","1");
        #endif
        automaton->reduction(1);
        break;
      default:
        handleError(automaton, s);
        return false;
    }
    
    return true;
} //----- End of transition

//---------------------------------------------- Constructors - destructor

State3::State3() : State("State 3") {
#ifdef MAP
    cout << "Appel au constructeur de <State3>" << endl;
#endif
} //----- End of State3 (constructeur)

State3::~State3() {
#ifdef MAP
    cout << "Appel au destructeur de <State3>" << endl;
#endif
} //----- End of ~State3

//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

void State3::displayExpectedResults() const
{
  cout << "Expected symbols : '+', '*', ')' or EOF" << endl ; 
}