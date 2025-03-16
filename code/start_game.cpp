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
            std::cerr << "FILE NOT FOUND " << fileName <<std::endl;
            return -1;
        }else{
            file >> temp;
            sum += temp;

            file.close();
        }
    }

    return sum;
}
int finals = getFinal();

void wait__(){
    std::cout << "Premi ENTER per continuare..." <<std::endl;
    std::cin.get(); std::cin.get();
    std::cin.clear();
}
int delete_saves();
int wipe_data();

int opzioni();
void printUnlockedFinals();

std::string mainMenu = "***** MENU PRINCIPALE *****";
std::string optionMenu = "****** MENU OPZIONI ******";

void start_game(){

    int scelta = 0;

    do{
        system("cls");
        std::cout << mainMenu <<std::endl;

        for(int i = 1; i <= 4; i++){
            switch(i){
                case 1:
                    std::cout << i << ". Nuova partita" <<std::endl;
                    break;
                case 2:
                    std::cout << i << ". Continua - (" << finals << "/5)" <<std::endl;
                    break;
                case 3:
                    std::cout << i << ". Opzioni" <<std::endl;
                    break;
                case 4:
                    std::cout << i << ". Esci" <<std::endl;
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
                start = 1;
                break;
            case 3:
                opzioni();
                start = 2;
                break;
            case 4:
                start = 3;
                break;
            default:
                std::cout << "MENU ERROR" <<std::endl;
                break;
        }
    }while(start == 0);
}
int delete_saves(){

    int scelta = 0;

    while(scelta != 1 && scelta != 2){
        system("cls");
        std::cout << "Sei sicuro di voler cancellare i tuoi salvataggi?" <<std::endl;
        std::cout << "1. Annulla\n"
                  << "2. Cancella salvataggi" <<std::endl;
        std::cin >> scelta;
        clearCin();
    }
    
    if(scelta == 1){
        return -1;
    }

    if(wipe_data() == 0){
        std::cout << "Salvataggi cancellati con successo!" <<std::endl;
        wait__();
        return 0;
    }else{
        std::cerr << "Errore nella cancellazione dei salvataggi!" <<std::endl;
        return -1;
    }
}
int wipe_data(){

    std::string fileNames[] = {"code/saves/normal.txt", "code/saves/bad.txt", "code/saves/good.txt", "code/saves/lost.txt", "code/saves/death.txt"};

    for(const std::string& fileName : fileNames){
        std::fstream wipe;
        wipe.open(fileName, std::ios::out);

        if(!wipe.is_open()){
            std::cerr << "FILE NOT FOUND " << fileName <<std::endl;
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
        std::cout << "1. Torna al menu principale\n"
                  << "2. Vedi i finali sbloccati" <<std::endl;
        std::cin >> choice;
        clearCin();

        switch(choice){
            case 1:
                break;
            case 2:
                printUnlockedFinals();
                wait__();
                break;
            default:
                std::cerr << "Scelta non valida" <<std::endl;
                sleep(2);
        }
    }while(choice != 2);

    return 0;
}
void printUnlockedFinals(){

    system("cls");
    std::cout << optionMenu <<std::endl;

    int temp = 0;
    int sum = 0;
    
    std::string finalsFiles[] = {"code/saves/normal.txt", "code/saves/bad.txt", "code/saves/good.txt", "code/saves/lost.txt", "code/saves/death.txt"};
    std::string finals[] = {"Normale:  ", "Buono:    ", "Peggiore: ", "Perduto:  ", "Morto:    "};
    std::string finals2[] = {"???????:  ", "?????:    ", "????????: ", "???????:  ", "?????:    "};
    std::string status[] = {"Completato", "Incompletato"};

    for(int i = 0; i < 5; i++){
        std::fstream unlockedFinals;

        unlockedFinals.open(finalsFiles[i], std::ios::in);
        
        if(!unlockedFinals.is_open()){
            break;
        }

        unlockedFinals >> temp;
        sum += temp;

        if(temp == 1){
            std::cout << finals[i] << status[0] <<std::endl;
        }else{
            std::cout << finals2[i] << status[1] <<std::endl;
        }

        unlockedFinals.close();
    }
    std::cout << "\nNumero di finali sbloccati: " << sum << "/5" <<std::endl;
}