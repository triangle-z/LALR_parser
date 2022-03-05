/*************************************************************************
                           Automaton  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//------- Interface of the class <Automaton> (file Automaton.h) -------
#if ! defined ( AUTOMATON_H )
#define AUTOMATON_H

//-------------------------------------------------------- Used interfaces
#include <string>
#include <vector>
#include "symbole/Symbole.h"
#include "automaton/Lexer.h"

//------------------------------------------------------------------ Types
class State ;
class State0 ;

//------------------------------------------------------------------------
// Role of the class <Automaton>
//
// This class serves the purpose of reading through a given expression and
// computing its value. It executes the correct transitions between all
// the states needed by the expression.
//------------------------------------------------------------------------

class Automaton 
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods

    void launch() ;
    // Manual :
    // Call the method once at the beginning and it will compute the
    // expression given when consructed.

    void offset(Symbole* s, State* e, bool consumeChar=true) ;
    // Manual :
    // Goes from the previous state to the one given in parameter using
    // the transition with the symbol in parameter. If the boolean is true
    // (or there is no third parameter), the symbol is removed from the
    // lexer. If not, it's not consumed.
    //
    // Contract :
    // The transition must be valid, this method will not check if we can
    // go from the previous state to e using s.

    void reduction(int n) ;
    // Manual :
    // Will go back n states from the last one in the stack, and then
    // transition to the new last state using an exxpression as the symbol
    //
    // Contract :
    // The number of popped states must be correct, the method won't check
    // if the number of reduced states is correct.

    void endAlgorithm() const ;
    // Manual :
    // Displays the value of the given expression
    //
    // Contract :
    // The algorithm must have ended before and the expression value must
    // be the first (preferably only) of the symbolstack

//---------------------------------------------- Constructors - destructor
    Automaton(string expression) ;
    // Manual :
    // Give to the automaton the expression that you want to evaluate.
    // 
    // Contract :
    // If the expression isn't correct the automaton won't correct it but
    // simply display an error.

    ~Automaton ( ) ;
    // Manual :
    // Detruit l'automaton

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

    int evalExpression(vector<Symbole*> exp) const ;
    // Manual :
    // Gives the result of the symbols given in parameter.
    //
    // Contract :
    // the exp must be either a number (val), an addition (val;'+';val), a
    // product (val;'*';val) or a number between parenthesis (')';val;'(')

//--------------------------------------------------- Protected attributes

	vector<Symbole*> symbolsStack ;
    // Manual :
    // Contains the stack of symbols used throughout the algorithm. At the
    // end of the execution, it will consist of a single symbol which will
    // represent the value of the evaluated expression if not incorrect.

    vector<State*> statesStack ;
    // Manual :
    // Contains the stack of states used throughout the algorithm. At the
    // end of the execution, it will be empty.

    Lexer* lexer ;
    // Manual :
    // Object found on moodle used to read the expression to evaluate.

};

#endif // AUTOMATON_H