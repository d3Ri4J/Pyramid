#include "header\game.hpp"
#include "header\end.hpp"
#include "header\errors.hpp"

void wait2(){

    std::cout << "\nPremi ENTER per tornare al menu principale..." <<std::endl;
    std::cin.get();

    system("cls");
}

void end_game(){

    char scelta = '?';

    std::cout << "Grazie per aver giocato!" <<std::endl;
    std::cout << "Questo progetto è stato realizzato in una settimana quindi spero vi sia piaciuto,\n"
                << "per ogni report di bug o altro siete pregati di comunicarcelo!" <<std::endl;
    std::cout << "Game Dev: d3R!4J" <<std::endl;
    wait2();
}