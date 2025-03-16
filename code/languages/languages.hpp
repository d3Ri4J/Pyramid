#pragma once

#ifndef LANGUAGES_HPP
#define LANGUAGES_HPP

#include <string>
//* languages:
#include "lang_IT\IT_header.hpp"
#include "lang_EN\EN_header.hpp"

//! errors
extern std::string fileNotFound;
extern std::string sortEndingError;
extern std::string savingFinalError;
extern std::string cinClearError;
extern std::string invalidChoiceText;

//menu titles
extern std::string mainMenu;
extern std::string optionMenu;

//main menu choices
extern std::string mainText_1;
extern std::string mainText_2;
extern std::string mainText_3;
extern std::string mainText_4;
//main menu sorting error
extern std::string mainMenuTextError;

//new game
extern std::string newGameText;
extern std::string newGameChoice_1;
extern std::string newGameChoice_2;

//wipe errors
extern std::string noWipeErrorFound;
extern std::string wipeErrorFound;

//option menu choices
extern std::string optionText_1;
extern std::string optionText_2;
//option menu sorting error
extern std::string optionMenuTextError;

//finals for "show finals unlocked"
extern std::string finals1[5];
extern std::string finals2[5];
extern std::string status[2];

//finals unlocked
extern std::string unlockedFinalsText_1;
extern std::string unlockedFinalsText_2;

//adios
extern std::string seeYouNextTimeText;

//start text of the game
extern std::string gameIntroduction;

//all the "press to continue" texts
extern std::string waitText;
extern std::string waitText_;
extern std::string waitText__;

//game texts
extern std::string gameText_1;
extern std::string gameText_2;
extern std::string gameText_3;
extern std::string gameText_4;
extern std::string gameText_5;
extern std::string gameText_6;
extern std::string gameText_7;
extern std::string gameText_8;
extern std::string gameText_9;
extern std::string gameText_10;
extern std::string gameText_11;
extern std::string gameText_12;
extern std::string gameText_13;
extern std::string gameText_14;
extern std::string gameText_15;
extern std::string gameText_16;
extern std::string gameText_17;
extern std::string gameText_18;

//choices task text
extern std::string taskText_1;
extern std::string taskText_2;
extern std::string taskText_3;
extern std::string taskText_4;
extern std::string taskText_5;
extern std::string taskText_6;
extern std::string taskText_7;
extern std::string taskText_8;
extern std::string taskText_9;

//choice choices texts
extern std::string choiceText_1;
extern std::string choiceText_2;
extern std::string choiceText_3;
extern std::string choiceText_4;
extern std::string choiceText_5;
extern std::string choiceText_6;
extern std::string choiceText_7;
extern std::string choiceText_8;
extern std::string choiceText_9;
extern std::string choiceText_10;
extern std::string choiceText_11;
extern std::string choiceText_12;
extern std::string choiceText_13;
extern std::string choiceText_14;
extern std::string choiceText_15;
extern std::string choiceText_16;
extern std::string choiceText_17;
extern std::string choiceText_18;

//if you take too long
extern std::string tooLateText;
extern std::string getReadyText;

//endigs texts
extern std::string endingText_1;
extern std::string endingText_2;
extern std::string endingText_3;
extern std::string endingText_4;
extern std::string endingText_5;

//end_game texts
extern std::string thanksForPlaying;
extern std::string gameDev;

#endif