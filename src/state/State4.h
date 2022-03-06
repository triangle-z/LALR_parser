/*************************************************************************
                           State4  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State4> (file State4.h) ----------------
#if ! defined ( STATE_4 )
#define STATE_4

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State2.h"
#include "State3.h"
#include "State7.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State4>
// Used to compute the second term of an addition
//
//------------------------------------------------------------------------

class State4 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State4();
    ~State4();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_4

