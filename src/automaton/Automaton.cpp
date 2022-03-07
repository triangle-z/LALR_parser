/*************************************************************************
                           Automaton  -  description
                             -------------------
    start                : 2022
    copyright            : (C) 2022 par Meryem , Ahmed et Salma
*************************************************************************/

//------ Realisation of the class <Automaton> (file Automaton.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Automaton.h"
#include "state/State.h"
#include "state/State0.h"

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods

void Automaton::launch()
// Algorithm :
// Reads the next not read symbol from the expression and makes the right
// transition until there is no symbol left.
{
  bool endTransition = true;
  while(endTransition)
  {
    Symbole* symbol = lexer->Consulter() ;
    endTransition = statesStack.back()->transition(this, symbol);
  }
} //----- End of launch

void Automaton::offset(Symbole * s, State * e, bool consumeChar)
// Algorithm :
// To go in a new state, we just add it to the state stack and the symbol
// to the symbol stack.
{
  if(consumeChar)
  {
    lexer->Avancer() ;
  }
  symbolsStack.push_back(s);
  statesStack.push_back(e);
} //----- End of offset

void Automaton::reduction(int n)
// Algorithm :
// To reduce of n states, we delete the last n states (call to state
// destructor and pop back), and delete the last n symbols adding them to
// a temp vector. We then compute the expression in the temp vector and
// transition to the next state using with an expression containing the 
// value of the previously reduced expression.
{
  vector < Symbole* > lus;
  
  for(int i=0 ; i<n ; i++) {
    delete(statesStack.back());
    statesStack.pop_back();
    lus.push_back(symbolsStack.back());
    symbolsStack.pop_back();
  }
  
  int value = evalExpression(lus);
#ifdef TRACE
  cout << "Reduced expression value : " << value << endl;
#endif
  
  statesStack.back()->transition(this, new Expression(value));
} //----- End of reduction

void Automaton::endAlgorithm() const
{
  cout << endl << "Expression value : " << symbolsStack[0]->getValue() << endl ;
}

void Automaton::handleError() const
{
  lexer->Afficher() ;
}

//---------------------------------------------- Constructors - destructor

Automaton::Automaton(string expression)
// Algorithm :
// Creates a lexer to read the given expression, and initializes the
// automaton with the first state (State0).
{
#ifdef MAP
    cout << "Appel au constructeur de <Automaton>" << endl;
#endif
  lexer = new Lexer(expression);
  statesStack.push_back(new State0());
} //----- End of Automaton (constructeur)

Automaton::~Automaton ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Automaton>" << endl;
#endif
  delete lexer;
} //----- End of ~Automaton


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

int Automaton::evalExpression(vector<Symbole *> exp) const
// Algorithm :
// Checks the type of the expression and compute the resullt accordingly
{ 
  switch(exp.size()) {
    case 1:
      return exp[0]->getValue();
      break;
    case 3:
      if(*exp[2] == OPENPAR) {
        return exp[1]->getValue();
      }
      else if(*exp[1] == PLUS) 
      {
        return exp[0]->getValue() + exp[2]->getValue();
      }
      else if(*exp[1] == MULT) 
      {
        return exp[0]->getValue() * exp[2]->getValue();
      }
      break;
  }
  
  return 0;
  
} //----- End of evalExpression