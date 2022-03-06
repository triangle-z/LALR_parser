/*************************************************************************
                           State7  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State7> (file State7.h) ----------------
#if ! defined ( STATE_7 )
#define STATE_7

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State5.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State7>
// Used to validate an addition or do the product in the second term.
//
//------------------------------------------------------------------------

class State7 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State7();
    ~State7();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_7

