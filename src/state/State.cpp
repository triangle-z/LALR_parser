/*************************************************************************
                           State  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//----------- Realisation of the class <State> (file State.cpp) ----------


//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "State.h"
#include "automaton/Automaton.h"

//----------------------------------------------------------------- PUBLIC

//---------------------------------------------- Constructors - destructor

State::State(string name) : name(name)
{
#ifdef MAP
    cout << "Appel au constructeur de <State>" << endl;
#endif
} //----- End of State (constructeur)

State::~State() {
#ifdef MAP
    cout << "Appel au destructeur de <State>" << endl;
#endif
} //----- End of ~State

//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

void State::handleError(Automaton * a, Symbole* s) const
{
    cout << endl << "Error in state " << name << ", tried to read " ;
    s->Affiche() ;
    cout << endl << endl ;
    a->handleError() ;
    cout << endl ;
    displayExpectedResults() ;
} //----- End of handleError

void State::displayState() const
{
    cout << "--> Currently in state " << name << endl ;
} //----- End of displayState

void State::displayAction(string symboleReceived, string action) const 
{
    cout << "\tReceived '" << symboleReceived << "', we " << action << endl ;
} //----- End of displayAction