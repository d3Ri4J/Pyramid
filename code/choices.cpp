#include "header\game.hpp"
#include "header\errors.hpp"
#include <chrono>
#include <thread>

class choices;

void choices::c1(){

    int choice;

    do{
        std::cout << "Ti stai adentrando e inizia a diventare buio quindi decidi di:" <<std::endl;
        std::cout << "1. Accendere una torcia\n"
                  << "2. Continuare nell'oscurità" <<std::endl;

        std::cin >> choice; 
        clearCin();

    }while(validChoice(choice));

    *a = choice;
}
void choices::c2(){

    int choice;

    do{
        std::cout << "Hai trovato un vaso, vuoi aprirlo?" <<std::endl;
        std::cout << "1. Apri il vaso\n"
                  << "2. Continua per la strada" <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *b = choice;
}
void choices::c3(){

    int choice;

    do{
        std::cout << "Hai incontrato un percorso pieno di trappole e devi capire come poter passare, scegli di:" <<std::endl;
        std::cout << "1. Lanciare dei detriti che trovi a terra per far scattar le trappole\n"
                  << "2. Chiudi gli occhi e corri sperando che non ti becchi alcuna trappola" <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *c = choice;
}
void choices::c4(){

    int choice;

    do{
        std::cout << "Trovi un muro strano, vuoi investigare?" <<std::endl;
        std::cout << "1. Investiga\n"
                  << "2. Continua ad esplorare" <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *d = choice;
}
void choices::c5(){

    int choice;

    do{
        std::cout << "Trovi dietro a un mattone del muro una provetta con del liquido all'interno:" <<std::endl;
        std::cout << "1. Bevilo\n"
                  << "2. Lascialo lì e procedi" <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *e = choice;
}
void choices::c6(){

    bool failed; //in time
    int choice;

    do{
        do{
            failed = false;
            
            std::cout << "HAI 10 SECONDI! Un masso sta rotolando dietro di te e devi fuggire" <<std::endl;
            std::cout << "1. Corri fino al primo angolo che trovi\n"
                      << "2. Ti metti a toccare il muro provando a vedere se c'è un passaggio segreto" <<std::endl;
            auto start = std::chrono::system_clock::now();

            std::cin >> choice;
            clearCin();

            auto end = std::chrono::system_clock::now();
            
            auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

            if(diff.count() > 10000){
                system("cls");
                std::cout << "Ci hai messo troppo e sei stato schiacciato" <<std::endl;
                failed = true;
                std::cout << "Preparati... ";
                for(int i = 3; i > 0; i--){
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    std::cout << i << ' ';
                }
                system("cls");
                std::cout << std::endl;
            }
        }while(failed);
    }while(validChoice(choice));

    *f = choice;
}
void choices::c7(){

    int choice;

    do{
        std::cout << "Trovi un tappeto steso a terra, vuoi alzarlo?" <<std::endl;
        std::cout << "1. Si\n"
                  << "2. No" <<std::endl;
        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *g = choice;
}
void choices::c8(){

    int choice;

    do{
        std::cout << "È una mappa! Vuoi consultarla?" <<std::endl;
        std::cout << "1. Si\n"
                  << "2. No" <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *h = choice;
}
void choices::c9(){

    int choice;

    do{
        std::cout << "Trovi l'uscita, cosa vuoi fare con il tappeto?" <<std::endl;
        std::cout << "1. Lascia fuori il tappeto\n"
                    << "2. Brucia il tappeto" <<std::endl;

        std::cin >> choice;
        clearCin();
        
    }while(validChoice(choice));
        
    *i = choice;
}