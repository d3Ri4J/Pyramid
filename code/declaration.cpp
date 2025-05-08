#include "header\start.hpp"
int start = 0;

#include "header\end.hpp"
int sortedNumber = 0;

#include "header\extern_choices.hpp"

//secret final
bool death = false;
bool lost = false;

//saves the choice here
int choice_1 = -1, choice_2 = -1, choice_3 = -1,
    choice_4 = -1, choice_5 = -1, choice_6 = -1,
    choice_7 = -1, choice_8 = -1, choice_9 = -1;

//choice pointers
int* a = &choice_1;
int* b = &choice_2;
int* c = &choice_3;
int* d = &choice_4;
int* e = &choice_5;
int* f = &choice_6;
int* g = &choice_7;
int* h = &choice_8;
int* i = &choice_9;

#include "languages\languages.hpp"
//! errors
std::string fileNotFound;
std::string sortEndingError;
std::string savingFinalError;
std::string cinClearError;
std::string invalidChoiceText;

//menu titles
std::string mainMenu;
std::string optionMenu;

//main menu choices
std::string mainText_1;
std::string mainText_2;
std::string mainText_3;
std::string mainText_4;
//main menu sorting error
std::string mainMenuTextError;

//new game
std::string newGameText;
std::string newGameChoice_1;
std::string newGameChoice_2;

//wipe errors
std::string noWipeErrorFound;
std::string wipeErrorFound;

//option menu choices
std::string optionText_1;
std::string optionText_2;
std::string optionText_3;
std::string optionText_4;
//option menu sorting error
std::string optionMenuTextError;

//finals for "show finals unlocked"
std::string finals1[5];
std::string finals2[5];
std::string status[2];

//finals unlocked
std::string unlockedFinalsText_1;
std::string unlockedFinalsText_2;

//language menu
std::string languageMenu;
//language options
std::string languageText_1;
std::string languageText_2;
//set language error
std::string languageError;

//adios
std::string seeYouNextTimeText;

//start text of the game
std::string gameIntroduction;

//all the "press to continue" texts
std::string waitText;
std::string waitText_;
std::string waitText__;

//game texts
std::string gameText_1;
std::string gameText_2;
std::string gameText_3;
std::string gameText_4;
std::string gameText_5;
std::string gameText_6;
std::string gameText_7;
std::string gameText_8;
std::string gameText_9;
std::string gameText_10;
std::string gameText_11;
std::string gameText_12;
std::string gameText_13;
std::string gameText_14;
std::string gameText_15;
std::string gameText_16;
std::string gameText_17;
std::string gameText_18;

//choices task text
std::string taskText_1;
std::string taskText_2;
std::string taskText_3;
std::string taskText_4;
std::string taskText_5;
std::string taskText_6;
std::string taskText_7;
std::string taskText_8;
std::string taskText_9;

//choice choices texts
std::string choiceText_1;
std::string choiceText_2;
std::string choiceText_3;
std::string choiceText_4;
std::string choiceText_5;
std::string choiceText_6;
std::string choiceText_7;
std::string choiceText_8;
std::string choiceText_9;
std::string choiceText_10;
std::string choiceText_11;
std::string choiceText_12;
std::string choiceText_13;
std::string choiceText_14;
std::string choiceText_15;
std::string choiceText_16;
std::string choiceText_17;
std::string choiceText_18;

//if you take too long
std::string tooLateText;
std::string getReadyText;

//endigs texts
std::string endingText_1;
std::string endingText_2;
std::string endingText_3;
std::string endingText_4;
std::string endingText_5;

//end_game texts
std::string thanksForPlaying;
std::string gameDev;