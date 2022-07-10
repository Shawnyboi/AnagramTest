//
// Created by shawn on 7/10/2022.
//

#ifndef ANAGRAM_INPUTOUTPUTHANDLER_H
#define ANAGRAM_INPUTOUTPUTHANDLER_H

#include <iostream>
#include <vector>

using namespace std;

class InputOutputHandler {
public:
    static void displayWelcomeMessage();
    static void displayGoodbyeMessage();
    static void displayAnagrams(const vector<string>& anagrams);
    static const string askForInput();
};


#endif //ANAGRAM_INPUTOUTPUTHANDLER_H
