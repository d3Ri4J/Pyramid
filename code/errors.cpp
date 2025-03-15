#include "header\errors.hpp"

int clearCin(){

    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cerr << "std::cin errore, input errato per il tipo di variabile assegnato";

        return -1;
    }

    return 0;
}
int validChoice(int x){

    if(x != 1 && x != 2){
        system("cls");
        std::cerr << "Scelta non valida";

        return 1;
    }

    return 0;
}