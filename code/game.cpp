#include "header\game.hpp"
#include "header\end.hpp"
#include "header\start.hpp"

void wait(){
    std::cout << "\nPremi ENTER per continuare...";
    std::cin.get();
    std::cin.get();

    system("cls");
}
void wait(int x){
    std::cout << "\nPremi ENTER per continuare...";
    std::cin.get();

    system("cls");
}

int game(){
    
    system("cls");
    std::cout << "Benvenuto!\n"
              << "Ti stai addentrando in una piramide totalmente\n"
              << "inesplorata e decidi di entrare..." <<std::endl;
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
            std::cout << "Hai deciso di accendere una torcia per poter veder meglio!" <<std::endl;
        }else{
            std::cout << "Hai deciso di continuare nell'oscurità, coraggioso..." <<std::endl; 
        }
        wait();

        choice.c2();
        if(*b == 1){
            std::cout << "Hai aperto il vaso e un ragno ti ha morso, non sai se è velenoso..." <<std::endl;
        }else{
            std::cout << "Hai deciso di non aprire il vaso e proseguire..." <<std::endl;
        }
        wait();
        
        choice.c3();
        if(*c == 1){
            std::cout << "Hai fatto scattare tutte le trappole! ";
            if(*b == 1){
                std::cout << "Ma resti stordito dal morso del ragno...";
            }
            std::cout << std::endl;
        }else{
            std::cout << "Una freccia si è conficcata nel tuo piede destro, sei rallentato" <<std::endl;
        }
        wait();

        choice.c4();
        if(*d == 1){
            system("cls");
            choice.c5();
            if(*e == 1 && *b == 1){
                std::cout << "Bevi il siero e guarisci dal veleno del ragno!" <<std::endl;
            }
            else if(*e == 1){
                std::cout << "Hai trovato un siero contro il veleno di un ragno, ora sei immune" <<std::endl;
            }
            else{
                std::cout << "Lasci lì la provetta con il dubbio se potesse essere utile" <<std::endl;
            }
        }else{
            *e = 2;
            std::cout << "Continui per il tuo percorso senza sapere cosa c'era nel muro..." <<std::endl;
        }
        wait();

        choice.c6();
        if(*f == 1){
            if(*c == 2){
                system("cls");
                death = true;
                break;
            }else{
                std::cout << "Per un pelo! Ora proseguiamo con cautela" <<std::endl;
            }
        }else{
            std::cout << "Hai trovato un passaggio segreto e sei riuscito a infilarti per un pelo al suo interno!" <<std::endl;
        }
        wait();

        choice.c7();
        if(*g == 1){
            system("cls");
            choice.c8();
            if(*h == 1){
                std::cout << "Decidi di consultare la mappa e ti dirigi verso l'usicita..." <<std::endl;
            }else{
                std::cout << "Non consulti la mappa e continui per la tua strada..." <<std::endl;
            }
        }else{
            *h = 2;
            std::cout << "Decidi di proseguire senza alzare il tappeto..." <<std::endl;
        }
        wait();

        if(*h != 1){
            lost = true;
            break; //nel dubbio non si sa mai ;)
        }else{
            choice.c9();
            if(*i == 1){
                std::cout << "Sei una persona gentile..." <<std::endl;
                wait();
            }else if(*i == 2){
                std::cout << "Stronzo..." <<std::endl;
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