#include "header\game.hpp"
#include "header\end.hpp"
#include <fstream>

class endings;

void saveFinal(int ending){
    
    std::fstream final;

    switch(ending){
        case 1:
            final.open("code/saves/bad.txt", std::ios::out);
            final << 1;
            break;
        case 2:
            final.open("code/saves/good.txt", std::ios::out);
            final << 1;
            break;

        case 3:
            final.open("code/saves/normal.txt", std::ios::out);
            final << 1;
            break;

        case 4:
            final.open("code/saves/death.txt", std::ios::out);
            final << 1;
            break;
        case 5:
            final.open("code/saves/lost.txt", std::ios::out);
            final << 1;
            break;
        default:
            std::cerr << "ERRORE NEL SALVATAGGIO DEL FINALE" <<std::endl;
            break;
    }

    final.close();
}
int getFinals(){
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
void sort(int *x){
    //death ending
    if(death){
        *x = 4;
    }else if(lost){//lost ending
        *x = 5;
    }else{
        //bad ending
        if(*a == 2 && *b == 1){
            if(*c == 2 && *d == 2){
                if(*e == 2 && *f == 2){
                    if(*i == 2){
                        //*returns the number to sort after
                        *x = 1;
                    }
                }
            }
        }//good ending
        else if(*a == 1 && *b == 2){
            if(*c == 1 && *d == 1){
                if(*e == 1 && *g == 1){
                    if(*h == 1 && *i == 1){
                        //*returns the number to sort after
                        *x = 2;
                    }
                }
            }
        }//basic ending
        else{
            //*returns the number to sort after
            *x = 3;
        }
    }
}

int endings::sort_ending(){

    sort(&sortedNumber);

    //* sort the ending
    switch(sortedNumber){
        
        //bad ending
        case 1:
            saveFinal(1);
            ending3();
            break;
        //good ending
        case 2:
            saveFinal(2);
            ending2();
            break;
        //basic ending
        case 3:
            saveFinal(3);
            ending1();
            break;
        //death ending
        case 4:
            saveFinal(4);
            ending4();
            break;
        //lost ending
        case 5:
            saveFinal(5);
            ending5();
            break;
        default:
            std::cerr << "SORTING ERROR" <<std::endl;
            break;
    }
    
    //founds the finals unlocked
    finali = getFinals();

    //finali sbloccati
    std::cout << "Numero di finali sbloccati: " << finali << "/5" <<std::endl;

    return 0;
}

void endings::ending1(){//basic ending

    std::cout << "Complimenti! Hai completato il finale più semplice,\n"
              << "ora prova a trovare i restanti ;)" <<std::endl;
    std::cout << "[FINALE BASE]" <<std::endl;
}
void endings::ending2(){//good ending
    
    std::cout << "BRAVO! Hai completato il finale migliore,\n"
              << "ora prova a trovare i restanti ;)" <<std::endl;
    std::cout << "[FINALE BUONO]" <<std::endl;
}
void endings::ending3(){//bad ending
    
    std::cout << "Ciao? Hai completato il finale peggiore possibile (senza morire o perderti),\n"
              << "mi sa che ti serve un corso di sopravvivenza...\n"
              << "Ora prova a trovare i restanti ;)" <<std::endl;
    std::cout << "[FINALE CATTIVO]" <<std::endl;
}
void endings::ending4(){//death ending

    std::cout << "Dato che il tuo piede ha una freccia conficcata al suo interno\n"
              << "non sei riuscito a correre abbastanza velocemente ed il masso ti ha schiacciato." <<std::endl;
    std::cout << "[FINALE MORTE]" <<std::endl;
}
void endings::ending5(){//lost ending

    std::cout << "Non hai voluto consultare il tappeto, era una mappa...\n"
              << "Ora sei perso per sempre all'interno della piramide per sempre!" <<std::endl;
    std::cout << "[FINALE PERDUTO]" <<std::endl;
}