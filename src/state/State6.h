/*************************************************************************
                           State6  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State6> (file State6.h) ----------------
#if ! defined ( STATE_6 )
#define STATE_6

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State6>
// Used to validate an expression inside parenthesis or do an addition or
// product directly after an open parenthesis '('
//
//------------------------------------------------------------------------

class State6 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State6();
    ~State6();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_6

