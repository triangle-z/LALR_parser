/*************************************************************************
                           State9  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//----------- Interface of the class <State9> (file State9.h) ------------
#if ! defined ( STATE_9 )
#define STATE_9

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State9>
// Used to validate a parenthesis expression 
//
//------------------------------------------------------------------------

class State9 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State9();
    ~State9();

};

#endif // STATE_9

