/*************************************************************************
                           State5  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State5> (file State5.h) ----------------
#if ! defined ( STATE_5 )
#define STATE_5

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "State2.h"
#include "State3.h"
#include "State8.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State5>
// Used to compute the second term of a product
//
//------------------------------------------------------------------------

class State5 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;
    
//---------------------------------------------- Constructors - destructor
    State5();
    ~State5();

};

#endif // STATE_5

