/*************************************************************************
                           State1  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State1> (file State1.h) ----------------
#if ! defined ( STATE_1 )
#define STATE_1

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State4.h"
#include "State5.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State1>
// Used to validate the total expression or do an addition and a product
// not directly after an open parenthesis '('
//
//------------------------------------------------------------------------

class State1 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State1();
    ~State1();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_1