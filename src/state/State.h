/*************************************************************************
                           State  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//-------- Interface of the class <State> (file State.h) --------------
#if ! defined ( STATE_H )
#define STATE_H

//-------------------------------------------------------- Used interfaces

#include <string>
#include "symbole/Symbole.h"

class Automaton ;

//------------------------------------------------------------------------
// Role of the class <State>
// This class represents all the states that the LALR automaton will use.
// Using the polymorphism, we can treat them all in the same way. They
// have identical methods but different implementations.
//
//------------------------------------------------------------------------

class State 
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    virtual bool transition(Automaton* automaton, Symbole* s) = 0 ;
    // Manual :
    // Virtual method that will be redefined in every state. Given an
    // automaton and a symbol, it will make the correct transition whether
    // it is an offset or a reduction.
    //
    // Contract :
    // The symbol given in parameter must have a transition from this
    // state or there will be an error.

//---------------------------------------------- Constructors - destructor
    State(string name) ;
    virtual ~State() ;

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    void displayAction(string symboleReceived, string action) const ;
    // Manual :
    // Displays the received symbol and the action performed (transition)
    // 
    // Contract :
    // <action> should be either "offset to State X" or "reduction of X"

    void displayState() const ;
    // Manual :
    // Displays the name of this state

    void handleError(Automaton * a, Symbole* s) const ;
    // Manual :
    // Displays that there is an error and the symbol that caused it, and
    // calls the error handler in the automaton for more details

    virtual void displayExpectedResults() const = 0 ;
    // Manual :
    // Virtual method that will be redefined in every state. It will
    // display all the symbols expected in a State.

//--------------------------------------------------- Protected attributes
    string name;

};

#endif // STATE_H

