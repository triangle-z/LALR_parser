# LALR_parser

LALR parser that can compute expresions containing parenthesis, additions and soustractions. If the expression contains an error, the parser will tell us where it is, and if it's a missing closing parenthesis, it will be added at the end of the expression.

<!-- About this project -->
## About this project

This project is a LALR parser that can compute expressions composed of parenthesis, additions and soustractions.

<!-- GETTING STARTED -->
## Getting Started

This section will show how to install and use this LALR parser.

### Installation

You need to open a terminal in the bin folder and execute the following commands
* build the parser
  ```sh
  make LALR_parser
  ```

* launch the parser
  ```sh
  ./LALR_parser
  ```

### Use

After launching the parser, this line should be displayed :
   ```sh
   Enter your expression
   ```
Write your expression here and the result will be displayed
The expression must have that form :
   ```sh
   1+2+((3+3)*4*5)
   ```

<!-- TO GO FURTHER -->
## To go further

This section will show how to display the exact steps taken by the parser, or trace the objects constructed and destroyed.

### Parser steps details

Open the makefile found in the bin and modify the line 12 as follows to add "-D TRACE"
   ```sh
   CCFLAGS = -ansi -pedantic -std=c++11 -I $(SOURCE) -D TRACE
   ```

### Trace of heap usage

Open the makefile found in the bin and modify the line 12 as follows to add "-D MAP"
   ```sh
   CCFLAGS = -ansi -pedantic -std=c++11 -I $(SOURCE) -D MAP
   ```

### Both details

Open the makefile found in the bin and modify the line 12 as follows to add "-D TRACE -D MAP"
   ```sh
   CCFLAGS = -ansi -pedantic -std=c++11 -I $(SOURCE) -D TRACE -D MAP
   ```
