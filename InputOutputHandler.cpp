//
// Created by shawn on 7/10/2022.
//

#include "InputOutputHandler.h"
const string InputOutputHandler::askForInput() {
    printf("Enter a word to find its anagrams ... \n");
    string input(50, '\0');
    getline(cin, input);
    return input;
}

void InputOutputHandler::displayWelcomeMessage() {
    printf("Hello and welcome to Shawn's anagram finder!\nYou may enter words, one at a time, to find their anagrams.\nEnter nothing to quit.\n\n\n");
}

void InputOutputHandler::displayGoodbyeMessage() {
    printf("\n\nGoodbye : ) \n");
}

void InputOutputHandler::displayAnagrams(const vector<string>& anagrams) {
   if(!anagrams.empty()){
       printf(anagrams[0].c_str());
       for(int i = 1; i < anagrams.size(); i++){
           printf(", %s", anagrams[i].c_str());
       }
       printf("\n\n");
   } else {
       printf("Oops, no anagrams found for that one!\n");
   }
}
