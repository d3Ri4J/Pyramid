#include "languages\languages.hpp"
#include "header\errors.hpp"

int clearCin(){

    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cerr << cinClearError <<std::endl;

        return -1;
    }

    return 0;
}
int validChoice(int x){

    if(x != 1 && x != 2){
        system("cls");
        std::cerr << invalidChoiceText;

        return 1;
    }

    return 0;
}