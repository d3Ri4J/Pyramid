#include "languages\languages.hpp"

//load start_game
void load__1();
//load game
void load__2();
//load choices
void load__3();
//load endings
void load__4();
//load errors
void load__5();
//load end_game
void load__6();

void lang_EN(){

    seeYouNextTimeText = "See ya!";

    waitText = "\nPress ENTER to continue...";

    load__1();//start_game
    load__2();//game
    load__3();//choices
    load__4();//endings
    load__5();//errors
    load__6();//end_game
}
void load__1(){
    mainMenu = "***** MAIN MENU *****";
    optionMenu = "****** OPTION MENU ******";

    mainText_1 = "New Game";
    mainText_2 = "Continue";
    mainText_3 = "Options";
    mainText_4 = "Quit";

    mainMenuTextError = "MAIN MENU ERROR";

    newGameText = "Are you sure you want to delete all your saves?";
    newGameChoice_1 = "Cancel";
    newGameChoice_2 = "Confirm";

    noWipeErrorFound = "Saves deleted successfully!";
    wipeErrorFound = "AN error occurred when trying to delete saves!";

    optionText_1 = "Return to main menu";
    optionText_2 = "See finals unlocked";
    optionText_3 = "Change language";
    optionText_4 = "Delete saves";

    optionMenuTextError = "Invalid choice\n";
    
    finals1[0] = "Normal: "; finals2[0] = "??????: ";
    finals1[1] = "Good:   "; finals2[1] = "????:   ";
    finals1[2] = "Bad:    "; finals2[2] = "???:    ";
    finals1[3] = "Lost:   "; finals2[3] = "????:   ";
    finals1[4] = "Death:  "; finals2[4] = "?????:  ";
    
    status[0] = "Completed";
    status[1] = "Incomplete";

    unlockedFinalsText_1 = "\nNumber of finals unlocked: ";

    languageMenu = "***** CHANGE LANGUAGE *****";
    languageText_1 = "Italiano";
    languageText_2 = "English";

    languageError = "Language change failed";

    waitText__ = "Press ENTER to continue...";
}
void load__2(){
    gameIntroduction = "Welcome!\nYou're approaching a completely unexplored\npyramid and decide to enter...";

    gameText_1 = "You've decided to turn on a flashlight to see better!";
    gameText_2 = "You decided to continue in the darkness, brave...";
    gameText_3 = "You opened the vase and a spider bit you, you don't know if it's poisonous...";
    gameText_4 = "You decided not to open the vase and continue...";
    gameText_5 = "You've triggered all the traps!";
    gameText_6 = " But you're still dazed from the spider bite...";
    gameText_7 = "An arrow has lodged in your right foot, you've been slowed down.";
    gameText_8 = "You drink the serum and are cured of the spider venom!";
    gameText_9 = "You found a serum against spider venom, now you're immune.";
    gameText_10 = "You leave the test tube there, wondering if it could be useful.";
    gameText_11 = "You continue on your path, unaware of what was in the wall...";
    gameText_12 = "That was close! Now, let's proceed with caution.";
    gameText_13 = "You found a secret passage and managed to squeeze through it by a hair's breadth!";
    gameText_14 = "You've decided to consult the map and head towards the exit...";
    gameText_15 = "You've decided to ignore the map and continue...";
    gameText_16 = "You've decided to continue without lifting the carpet...";
    gameText_17 = "You are a good person...";
    gameText_18 = "Asshole...";
}
void load__3(){
    taskText_1 = "You're venturing deeper and it's starting to get dark, so you decide to:";
    taskText_2 = "You found a vase, do you want to open it?";
    taskText_3 = "You've encountered a path full of traps and you need to figure out how to get through, choose to:";
    taskText_4 = "You find a strange wall, do you want to investigate?";
    taskText_5 = "Behind a brick in the wall, you find a test tube with liquid inside:";
    taskText_6 = "YOU HAVE 10 SECONDS! A boulder is rolling behind you and you have to escape!!";
    taskText_7 = "You find a rug lying on the ground, do you want to lift it?";
    taskText_8 = "It's a map! Do you want to consult it?";
    taskText_9 = "You find the exit, what do you want to do with the rug?";

    choiceText_1 = "Turn on a flashlight";
    choiceText_2 = "Continue in the darkness";
    choiceText_3 = "Open the vase";
    choiceText_4 = "Continue down the path";
    choiceText_5 = "Throw debris you find on the ground to trigger the traps";
    choiceText_6 = "Close your eyes and run, hoping you don't get caught in any traps";
    choiceText_7 = "Investigate";
    choiceText_8 = "Continue to explore";
    choiceText_9 = "Drink it";
    choiceText_10 = "Leave it there and proceed";
    choiceText_11 = "You run to the first corner you find";
    choiceText_12 = "You start touching the wall, trying to see if there's a secret passage";
    choiceText_13 = "Yes";
    choiceText_14 = "No";
    choiceText_15 = "Yes";
    choiceText_16 = "No";
    choiceText_17 = "Leave the carpet outside";
    choiceText_18 = "Burn the carpet";

    tooLateText = "You took too long and were crushed";
    getReadyText = "Get ready... ";
}
void load__4(){
    unlockedFinalsText_2 = "Number of finals unlocked: ";

    endingText_1 = "You've completed the easiest ending,\nnow try find the other finals ;)\n[BASIC ENDING]";
    endingText_2 = "BRAVO! You've completed the best ending,\nnow try find the other finals ;)\n[GOOD ENDING]";
    endingText_3 = "Hello? You've completed the worst ending (without dying or getting lost),\ni think you'll need a some survival lessons...\nNow try find the other finals ;)\n[BAD ENDING]";
    endingText_4 = "Since your foot has an arrow stuck in it,\nyou weren't able to run fast enough and the boulder crushed you.\n[DEATH ENDING]";
    endingText_5 = "You choose to not pick up the carpet, it was a map...\nNow you're lost in the Piramid forever!\n[LOST ENDING]";
}
void load__5(){
    sortEndingError = "ERROR: FINAL SORTING";
    fileNotFound = "FILE NOT FOUND ";
    savingFinalError = "FINAL SAVING ERROR";
    cinClearError = "std::cin error, input not valid for variable expected";
    invalidChoiceText = "Invalid choice\n";
}
void load__6(){
    waitText_ = "\nPress ENTER to return to the main menu...";
    
    thanksForPlaying = "Thanks for Playing!\nThis is my first project so I hope you enjoyed,\nif you encounter some bugs please feel free to report them!";
    gameDev = "Game Dev: ";
}
