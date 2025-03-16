#include "languages\languages.hpp"
#include "header\game.hpp"
#include "header\errors.hpp"
#include <chrono>
#include <thread>

class choices;

void choices::c1(){

    int choice;

    do{
        std::cout << taskText_1 <<std::endl;
        std::cout << "1. " << choiceText_1 << '\n'
                  << "2. " << choiceText_2 <<std::endl;

        std::cin >> choice; 
        clearCin();

    }while(validChoice(choice));

    *a = choice;
}
void choices::c2(){

    int choice;

    do{
        std::cout << taskText_2 <<std::endl;
        std::cout << "1. " << choiceText_3 << '\n'
                  << "2. " << choiceText_4 <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *b = choice;
}
void choices::c3(){

    int choice;

    do{
        std::cout << taskText_3 <<std::endl;
        std::cout << "1. " << choiceText_5 << '\n'
                  << "2. " << choiceText_6 <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *c = choice;
}
void choices::c4(){

    int choice;

    do{
        std::cout << taskText_4 <<std::endl;
        std::cout << "1. " << choiceText_7 << '\n'
                  << "2. " << choiceText_8 <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *d = choice;
}
void choices::c5(){

    int choice;

    do{
        std::cout << taskText_5 <<std::endl;
        std::cout << "1. " << choiceText_9 << '\n'
                  << "2. " << choiceText_10 <<std::endl;

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
            
            std::cout << taskText_6 <<std::endl;
            std::cout << "1. " << choiceText_11 << '\n'
                      << "2. " << choiceText_12 <<std::endl;
            auto start = std::chrono::system_clock::now();

            std::cin >> choice;
            clearCin();

            auto end = std::chrono::system_clock::now();
            
            auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

            if(diff.count() > 10000){
                system("cls");
                std::cout << tooLateText <<std::endl;
                failed = true;
                std::cout << getReadyText;
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
        std::cout << taskText_7 <<std::endl;
        std::cout << "1. " << choiceText_13 << '\n'
                  << "2. " << choiceText_14 <<std::endl;
        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *g = choice;
}
void choices::c8(){

    int choice;

    do{
        std::cout << taskText_8 <<std::endl;
        std::cout << "1. " << choiceText_15 << '\n'
                  << "2. " << choiceText_16 <<std::endl;

        std::cin >> choice;
        clearCin();

    }while(validChoice(choice));

    *h = choice;
}
void choices::c9(){

    int choice;

    do{
        std::cout << taskText_9 <<std::endl;
        std::cout << "1. " << choiceText_17 << '\n'
                  << "2. " << choiceText_18 <<std::endl;

        std::cin >> choice;
        clearCin();
        
    }while(validChoice(choice));
        
    *i = choice;
}