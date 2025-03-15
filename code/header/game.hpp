#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
//header to save the choices
#include "extern_choices.hpp"

//start menu
void start_game();
//gameplay
int game();
//final things of the game + quit
void end_game();

class choices{
    public:
    //function for every choice
        void c1(), c2(), c3(),
             c4(), c5(), c6(),
             c7(), c8(), c9();
};

class endings{
    public:
        //finali sbloccati
        int finali = 0;

        int sort_ending();

        void ending1(); //normal (nbasic ending)
        void ending2(); //perfectionist (good ending)
        void ending3(); //worst ending (bad ending)
        void ending4(); //death (secret ending)
        void ending5(); //lost (secret ending)
};

#endif