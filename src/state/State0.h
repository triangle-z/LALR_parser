/*************************************************************************
                           State0  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State0> (file State0.h) ----------------
#if ! defined ( STATE_0 )
#define STATE_0

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State0>
// Initial state of the automaton that reads the first symbol of the total
// expression.
//
//------------------------------------------------------------------------

class State0 : public State 
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State0();
    ~State0();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_0