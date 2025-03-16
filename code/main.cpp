#include "languages\languages.hpp"
#include "header\start.hpp"
#include "header\game.hpp"
#include <unistd.h>

int main()
{
    //load the default language
    lang_EN();

    while(true){
        do{
            //open menu
            start_game();
            
            //annulla lo start
            if(start == -1 || start == 3){
                system("cls");
                std::cout << seeYouNextTimeText <<std::endl;
                sleep(2);
                return 1;
            }
        }while(start == 2);

        //gioca al gioco
        game();

        //thanks for playing
        end_game();
    };
    
    return 0;
}