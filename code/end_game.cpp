#include "languages\languages.hpp"
#include "header\game.hpp"
#include "header\end.hpp"
#include "header\errors.hpp"

void wait2(){

    std::cout << waitText_ <<std::endl;
    std::cin.get();

    system("cls");
}

void end_game(){

    std::cout << thanksForPlaying <<std::endl;
    std::cout << gameDev << " d3R!4J" <<std::endl;
    wait2();
}