/*************************************************************************
                           State3  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State3> (file State3.h) ----------------
#if ! defined ( STATE_3 )
#define STATE_3

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State3>
// Used to read and evaluate an integer symbol
//
//------------------------------------------------------------------------

class State3 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State3();
    ~State3();

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayExpectedResults() const ;

};

#endif // STATE_3

