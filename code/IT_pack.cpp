#include "languages\languages.hpp"

//load start_game
void load_1();
//load game
void load_2();
//load choices
void load_3();
//load endings
void load_4();
//load errors
void load_5();
//load end_game
void load_6();

void lang_IT(){

    seeYouNextTimeText = "Alla prossima!";

    waitText = "\nPremi ENTER per continuare...";

    load_1();//start_game
    load_2();//game
    load_3();//choices
    load_4();//endings
    load_5();//errors
    load_6();//end_game
}
void load_1(){
    mainMenu = "***** MENU PRINCIPALE *****";
    optionMenu = "****** MENU OPZIONI ******";

    mainText_1 = "Nuova partita";
    mainText_2 = "Continua";
    mainText_3 = "Opzioni";
    mainText_4 = "Esci";

    mainMenuTextError = "ERRORE DEL MENU";

    newGameText = "Sei sicuro di voler cancellare i tuoi salvataggi?";
    newGameChoice_1 = "Annulla";
    newGameChoice_2 = "Conferma";

    noWipeErrorFound = "Salvataggi cancellati con successo!";
    wipeErrorFound = "Errore nella cancellazione dei salvataggi!";

    optionText_1 = "Torna al menu principale";
    optionText_2 = "Vedi i finali sbloccati";
    optionText_3 = "Cambia lingua";

    optionMenuTextError = "Scelta non valida\n";
    
    finals1[0] = "Normale:  "; finals2[0] = "???????:  ";
    finals1[1] = "Buono:    "; finals2[1] = "?????:    ";
    finals1[2] = "Peggiore: "; finals2[2] = "????????: ";
    finals1[3] = "Perduto:  "; finals2[3] = "???????:  ";
    finals1[4] = "Morto:    "; finals2[4] = "?????:    ";
    
    status[0] = "Completato";
    status[1] = "Incompletato";

    unlockedFinalsText_1 = "\nNumero di finali sbloccati: ";

    languageMenu = "***** CAMBIA LINGUA *****";
    languageText_1 = "Italiano";
    languageText_2 = "English";

    languageError = "Errore nell'impostazione della lingua";

    waitText__ = "Premi ENTER per continuare...";
}
void load_2(){
    gameIntroduction = "Benvenuto!\nTi stai avvicinando in una piramide totalmente\ninesplorata e decidi di entrare...";

    gameText_1 = "Hai deciso di accendere una torcia per poter veder meglio!";
    gameText_2 = "Hai deciso di continuare nell'oscurità, coraggioso...";
    gameText_3 = "Hai aperto il vaso e un ragno ti ha morso, non sai se è velenoso...";
    gameText_4 = "Hai deciso di non aprire il vaso e proseguire...";
    gameText_5 = "Hai fatto scattare tutte le trappole!";
    gameText_6 = " Ma resti stordito dal morso del ragno...";
    gameText_7 = "Una freccia si è conficcata nel tuo piede destro, sei rallentato";
    gameText_8 = "Bevi il siero e guarisci dal veleno del ragno!";
    gameText_9 = "Hai trovato un siero contro il veleno di un ragno, ora sei immune";
    gameText_10 = "Lasci lì la provetta con il dubbio se potesse essere utile";
    gameText_11 = "Continui per il tuo percorso senza sapere cosa c'era nel muro...";
    gameText_12 = "Per un pelo! Ora proseguiamo con cautela";
    gameText_13 = "Hai trovato un passaggio segreto e sei riuscito a infilarti per un pelo al suo interno!";
    gameText_14 = "Decidi di consultare la mappa e ti dirigi verso l'uscita...";
    gameText_15 = "Non consulti la mappa e continui per la tua strada...";
    gameText_16 = "Decidi di proseguire senza alzare il tappeto...";
    gameText_17 = "Sei una persona gentile...";
    gameText_18 = "Stronzo...";
}
void load_3(){
    taskText_1 = "Ti stai adentrando e inizia a diventare buio quindi decidi di:";
    taskText_2 = "Hai trovato un vaso, vuoi aprirlo?";
    taskText_3 = "Hai incontrato un percorso pieno di trappole e devi capire come poter passare, scegli di:";
    taskText_4 = "Trovi un muro strano, vuoi investigare?";
    taskText_5 = "Trovi dietro a un mattone del muro una provetta con del liquido all'interno:";
    taskText_6 = "HAI 10 SECONDI! Un masso sta rotolando dietro di te e devi fuggire!!";
    taskText_7 = "Trovi un tappeto steso a terra, vuoi alzarlo?";
    taskText_8 = "È una mappa! Vuoi consultarla?";
    taskText_9 = "Trovi l'uscita, cosa vuoi fare con il tappeto?";

    choiceText_1 = "Accendere una torcia";
    choiceText_2 = "Continuare nell'oscurità";
    choiceText_3 = "Apri il vaso";
    choiceText_4 = "Continua per la strada";
    choiceText_5 = "Lanciare dei detriti che trovi a terra per far scattar le trappole";
    choiceText_6 = "Chiudi gli occhi e corri sperando che non ti becchi alcuna trappola";
    choiceText_7 = "Investiga";
    choiceText_8 = "Continua ad esplorare";
    choiceText_9 = "Bevilo";
    choiceText_10 = "Lascialo lì e procedi";
    choiceText_11 = "Corri fino al primo angolo che trovi";
    choiceText_12 = "Ti metti a toccare il muro provando a vedere se c'è un passaggio segreto";
    choiceText_13 = "Si";
    choiceText_14 = "No";
    choiceText_15 = "Si";
    choiceText_16 = "No";
    choiceText_17 = "Lascia fuori il tappeto";
    choiceText_18 = "Brucia il tappeto";

    tooLateText = "Ci hai messo troppo e sei stato schiacciato";
    getReadyText = "Preparati... ";
}
void load_4(){
    unlockedFinalsText_2 = "Numero di finali sbloccati: ";

    endingText_1 = "Complimenti! Hai completato il finale più semplice,\nora prova a trovare i restanti ;)\n[FINALE BASE]";
    endingText_2 = "BRAVO! Hai completato il finale migliore,\nora prova a trovare i restanti ;)\n[FINALE BUONO]";
    endingText_3 = "Ciao? Hai completato il finale peggiore possibile (senza morire o perderti),\nmi sa che ti serve un corso di sopravvivenza...\nOra prova a trovare i restanti ;)\n[FINALE CATTIVO]";
    endingText_4 = "Dato che il tuo piede ha una freccia conficcata al suo interno\nnon sei riuscito a correre abbastanza velocemente ed il masso ti ha schiacciato.\n[FINALE MORTE]";
    endingText_5 = "Non hai voluto consultare il tappeto, era una mappa...\nOra sei perso per sempre all'interno della piramide per sempre!\n[FINALE PERDUTO]";
}
void load_5(){
    sortEndingError = "ERRORE NEL SORTEGGIO DEL FINALE";
    fileNotFound = "FILE NON TROVATO ";
    savingFinalError = "ERRORE NEL SALVATAGGIO DEL FINALE";
    cinClearError = "errore di std::cin, input errato per il tipo di variabile assegnato";
    invalidChoiceText = "Scelta non valida\n";
}
void load_6(){
    waitText_ = "\nPremi ENTER per tornare al menu principale...";
    
    thanksForPlaying = "Grazie per aver giocato!\nQuesto è il mio primo progetto quindi spero vi sia piaciuto,\nper ogni riscontro di bug o altro siete pregati di comunicarcelo!";
    gameDev = "Programmatore del Gioco: ";
}
