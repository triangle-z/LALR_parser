/*************************************************************************
                           State2  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State2> (file State2.h) ----------------
#if ! defined ( STATE_2 )
#define STATE_2

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State2.h"
#include "State3.h"
#include "State6.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State2>
// Used to read the symbol directly after an open parenthesis '('
//
//------------------------------------------------------------------------

class State2 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State2();
    ~State2();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_2

