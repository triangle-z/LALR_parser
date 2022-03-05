#include <iostream>
#include "automaton/Lexer.h"
#include "automaton/Automaton.h"

int main(void) {

   string expression ;
   cout << "Enter your expression" << endl;
   cin >> expression ;

   Automaton automaton(expression);
   automaton.launch();

   return 0;
}