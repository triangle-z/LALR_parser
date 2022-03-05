# Ecrire make exec pour compiler l'analyseur, puis ./exec pour lancer

ECHO = @echo
RM = @rm
RMFLAGS = -f
TOUCH = @touch

SOURCE = ../src

COMP = g++
EDL = g++
CCFLAGS = -ansi -pedantic -std=c++11 -I $(SOURCE) #-D TRACE# -D MAP
LDFLAGS = -Wall -pedantic -std=c++11

INTERFACE = $(AUTOMATON) $(MAIN) $(STATE) $(SYMBOL)
OBJETS = $(INTERFACE:.h=.o)
EXE = LALR_parser
EFFACE = clean

MAIN = Main.h
AUTOMATON = Automaton.h Lexer.h
SYMBOL = Symbole.h
STATE = State.h State0.h State1.h State2.h State3.h State4.h State5.h State6.h State7.h State8.h State9.h

Main=main/Main

Automaton=automaton/Automaton
Lexer=automaton/Lexer

Symbole=symbole/Symbole

State=state/State
State0=state/State0
State1=state/State1
State2=state/State2
State3=state/State3
State4=state/State4
State5=state/State5
State6=state/State6
State7=state/State7
State8=state/State8
State9=state/State9

all: $(EXE)

affiche:
	$(ECHO) ">>> Interface <"$(INTERFACE)">"
	$(ECHO) ">>> Objets <"$(OBJETS)">"

$(EXE) : $(OBJETS)
	$(ECHO) ">>> Edition des liens de <"$(EXE)">"
	$(EDL) $(LDFLAGS) -o $(EXE) $(OBJETS)

define run
	$(ECHO) ">>> Compilation de < $< >"
	$(COMP)  $(CCFLAGS) -c $(SOURCE)/$<
endef

Main.o:$(Main).cpp
	$(run)

Automaton.o:$(Automaton).cpp
	$(run)

Lexer.o:$(Lexer).cpp
	$(run)

Symbole.o:$(Symbole).cpp
	$(run)

State.o:$(State).cpp
	$(run)

State0.o:$(State0).cpp
	$(run)

State1.o:$(State1).cpp
	$(run)

State2.o:$(State2).cpp
	$(run)

State3.o:$(State3).cpp
	$(run)

State4.o:$(State4).cpp
	$(run)

State5.o:$(State5).cpp
	$(run)

State6.o:$(State6).cpp
	$(run)

State7.o:$(State7).cpp
	$(run)

State8.o:$(State8).cpp
	$(run)

State9.o:$(State9).cpp
	$(run)

# Cible de nettoyage

$(EFFACE) :
	$(ECHO) ">>> Nettoyage du repertoire ($(EXE) $(OBJETS) core)"
	$(RM) $(RMFLAGS) $(EXE) $(OBJETS) core

main/Main.cpp : automaton/Lexer.h
automaton/Automaton.cpp :
automaton/Automaton.h : symbole/Symbole.h automaton/Lexer.h state/State.h state/State0.h
automaton/Lexer.cpp:
automaton/Lexer.h : symbole/Symbole.h
symbole/Symbole.cpp:
symbole/Symbole.h:
state/State.cpp:
state/State.h : symbole/Symbole.h automaton/Automaton.h
state/State0.cpp:
state/State0.h : State.h State1.h State2.h State3.h automaton/Automaton.h
state/State1.cpp:
state/State1.h : State.h State4.h State5.h automaton/Automaton.h
state/State2.cpp:
state/State2.h : State.h State2.h State3.h State6.h automaton/Automaton.h
state/State3.cpp:
state/State3.h : State.h automaton/Automaton.h
state/State4.cpp:
state/State4.h : State.h State2.h State3.h State7.h automaton/Automaton.h
state/State5.cpp:
state/State5.h : State.h State2.h State3.h State8.h automaton/Automaton.h
state/State6.cpp:
state/State6.h : State.h State4.h State5.h State9.h automaton/Automaton.h
state/State7.cpp:
state/State7.h : State.h State5.h automaton/Automaton.h
state/State8.cpp:
state/State8.h : State.h automaton/Automaton.h
state/State9.cpp:
state/State9.h : State.h automaton/Automaton.h