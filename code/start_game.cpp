#include "languages\languages.hpp"
#include "header\start.hpp"
#include "header\game.hpp"
#include "header\errors.hpp"
#include <fstream>
#include <unistd.h>

int getFinal(){
    int temp = 0;
    int sum = 0;
    
    std::string fileNames[] = {"code/saves/normal.txt", "code/saves/bad.txt", "code/saves/good.txt", "code/saves/lost.txt", "code/saves/death.txt"};

    for(const std::string& fileName : fileNames){
        std::fstream file;
        file.open(fileName, std::ios::in);

        if(!file.is_open()){
            std::cerr << fileNotFound << fileName <<std::endl;
            return -1;
        }else{
            file >> temp;
            sum += temp;

            file.close();
        }
    }

    return sum;
}

void wait__(){
    std::cout << waitText__ <<std::endl;
    std::cin.get(); std::cin.get();
    std::cin.clear();
}
int delete_saves();
int wipe_data();

int opzioni();
void printUnlockedFinals();
void setLanguage();

void start_game(){

    int scelta = 0;

    do{
        system("cls");
        std::cout << mainMenu <<std::endl;

        for(int i = 1; i <= 4; i++){
            switch(i){
                case 1:
                    std::cout << i << ". " << mainText_1 <<std::endl;
                    break;
                case 2:
                    std::cout << i << ". " << mainText_2 << " - (" << getFinal() << "/5)" <<std::endl;
                    break;
                case 3:
                    std::cout << i << ". " << mainText_3 <<std::endl;
                    break;
                case 4:
                    std::cout << i << ". " << mainText_4 <<std::endl;
                    break;
            }
        }
        std::cin >> scelta;
        clearCin();

        switch(scelta){
            case 1:
                if(delete_saves() == -1){
                    //annulla
                    start = 2;
                }else{
                    //procedi con la nuova partita
                    start = 1;
                }
                break;
            case 2:
                //continua il gioco principale
                start = 11;
                break;
            case 3:
                opzioni();
                start = 2;
                break;
            case 4:
                start = 3;
                break;
            default:
                std::cout << mainMenuTextError <<std::endl;
                break;
        }
    }while(start == 0);
}
int delete_saves(){

    int choice = 0;

    while(choice != 1 && choice != 2){
        system("cls");
        std::cout << newGameText <<std::endl;
        std::cout << "1. " << newGameChoice_1 <<std::endl
                  << "2. " << newGameChoice_2 <<std::endl;
        std::cin >> choice;
        clearCin();
    }
    
    if(choice == 1){
        return -1;
    }

    if(wipe_data() == 0){
        std::cout << noWipeErrorFound <<std::endl;
        wait__();
        return 0;
    }else{
        std::cerr << wipeErrorFound <<std::endl;
        return -1;
    }
}
int wipe_data(){

    std::string fileNames[] = {"code/saves/normal.txt", "code/saves/bad.txt", "code/saves/good.txt", "code/saves/lost.txt", "code/saves/death.txt"};

    for(const std::string& fileName : fileNames){
        std::fstream wipe;
        wipe.open(fileName, std::ios::out);

        if(!wipe.is_open()){
            std::cerr << fileNotFound << fileName <<std::endl;
            return -1;
        }else{
            wipe << 0;
            wipe.close();
        }
    }

    return 0;
}

int opzioni(){

    int choice;

    do{
        system("cls");
        std::cout << optionMenu <<std::endl;
        std::cout << "0. " << optionText_1 <<std::endl
                  << "1. " << optionText_2 <<std::endl
                  << "2. " << optionText_3 <<std::endl
                  << "3. " << optionText_4 <<std::endl;
        std::cin >> choice;
        clearCin();

        switch(choice){
            case 0:
                break;
            case 1:
                printUnlockedFinals();
                wait__();
                break;
            case 2:
                setLanguage();
                wait__();
                break;
            case 3:
                delete_saves();
                break;
            default:
                std::cerr << optionMenuTextError <<std::endl;
                sleep(2);
        }
    }while(choice != 0);

    return 0;
}
void printUnlockedFinals(){

    system("cls");
    std::cout << optionMenu <<std::endl;

    int temp = 0;
    int sum = 0;
    
    std::string finalsFiles[] = {"code/saves/normal.txt", "code/saves/bad.txt", "code/saves/good.txt", "code/saves/lost.txt", "code/saves/death.txt"};

    for(int i = 0; i < 5; i++){
        std::fstream unlockedFinals;

        unlockedFinals.open(finalsFiles[i], std::ios::in);
        
        if(!unlockedFinals.is_open()){
            break;
        }

        unlockedFinals >> temp;
        sum += temp;

        if(temp == 1){
            std::cout << finals1[i] << status[0] <<std::endl;
        }else{
            std::cout << finals2[i] << status[1] <<std::endl;
        }

        unlockedFinals.close();
    }
    std::cout << unlockedFinalsText_1 << sum << "/5" <<std::endl;
}
void setLanguage(){

    int scelta;
    
    do{
        system("cls");
        std::cout << languageMenu <<std::endl;
        std::cout << "1. " << languageText_1 <<std::endl;
        std::cout << "2. " << languageText_2 <<std::endl;
        std::cin >> scelta;
    }while(scelta < 1 && scelta > 2);

    switch(scelta){
        case 1:
            lang_IT();
            break;
        case 2:
            lang_EN();
            break;
        default:
            std::cerr << languageError <<std::endl;
            break;
    }
}