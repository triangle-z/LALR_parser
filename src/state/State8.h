/*************************************************************************
                           State8  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//---------- Interface of the class <State8> (file State8.h) ----------------
#if ! defined ( STATE_8 )
#define STATE_8

//-------------------------------------------------------- Used interfaces

#include <string>
#include "State.h"
#include "automaton/Automaton.h"

//------------------------------------------------------------------------
// Role of the class <State8>
// Used to validate a product
//
//------------------------------------------------------------------------

class State8 : public State
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    bool transition(Automaton* automaton, Symbole* s) ;

//---------------------------------------------- Constructors - destructor
    State8();
    ~State8();

};

#endif // STATE_8