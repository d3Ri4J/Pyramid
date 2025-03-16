#include "languages\languages.hpp"
#include "header\game.hpp"
#include "header\end.hpp"
#include "header\start.hpp"

void wait(){
    std::cout << waitText;
    std::cin.get();
    std::cin.get();

    system("cls");
}
void wait(int x){
    std::cout << waitText;
    std::cin.get();

    system("cls");
}

int game(){
    
    system("cls");
    std::cout << gameIntroduction <<std::endl;
    if(start == 1){
        wait(0);
    }else{
        wait();
    }

    choices choice;
    endings ending;

    while(true){
        choice.c1();
        if(*a == 1){
            std::cout << gameText_1 <<std::endl;
        }else{
            std::cout << gameText_2 <<std::endl; 
        }
        wait();

        choice.c2();
        if(*b == 1){
            std::cout << gameText_3 <<std::endl;
        }else{
            std::cout << gameText_4 <<std::endl;
        }
        wait();
        
        choice.c3();
        if(*c == 1){
            std::cout << gameText_5;
            if(*b == 1){
                std::cout << gameText_6;
            }
            std::cout << std::endl;
        }else{
            std::cout << gameText_7 <<std::endl;
        }
        wait();

        choice.c4();
        if(*d == 1){
            system("cls");
            choice.c5();
            if(*e == 1 && *b == 1){
                std::cout << gameText_8 <<std::endl;
            }
            else if(*e == 1){
                std::cout << gameText_9 <<std::endl;
            }
            else{
                std::cout << gameText_10 <<std::endl;
            }
        }else{
            *e = 2;
            std::cout << gameText_11 <<std::endl;
        }
        wait();

        choice.c6();
        if(*f == 1){
            if(*c == 2){
                system("cls");
                death = true;
                break;
            }else{
                std::cout << gameText_12 <<std::endl;
            }
        }else{
            std::cout << gameText_13 <<std::endl;
        }
        wait();

        choice.c7();
        if(*g == 1){
            system("cls");
            choice.c8();
            if(*h == 1){
                std::cout << gameText_14 <<std::endl;
            }else{
                std::cout << gameText_15 <<std::endl;
            }
        }else{
            *h = 2;
            std::cout << gameText_16 <<std::endl;
        }
        wait();

        if(*h != 1){
            lost = true;
            break; //nel dubbio non si sa mai ;)
        }else{
            choice.c9();
            if(*i == 1){
                std::cout << gameText_17 <<std::endl;
                wait();
            }else if(*i == 2){
                std::cout << gameText_18 <<std::endl;
                wait();
            }else{
                wait(0);
            }
        }

        //end the gameplay
        break;
    }

    //*wait() -> std::cin.get() x 2
    //*wait(0) -> std::cin.get() x 1

    //sort the ending
    ending.sort_ending();

    // death ending
    if(sortedNumber == 4){
        wait();
    }else{
        wait(0);
    }
    //! DEBUG PURPOSE ONLY
    // std::cout << sortedNumber <<std::endl;
    return true;
}