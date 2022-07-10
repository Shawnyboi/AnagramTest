//
// Created by shawn on 7/10/2022.
//

#ifndef ANAGRAM_ANAGRAMS_H
#define ANAGRAM_ANAGRAMS_H

#include <iostream>
#include <vector>
#include "AnagramMap.h"
#include "DictionaryLoader.h"
#include "InputOutputHandler.h"


class Anagrams {
private:
    AnagramMap* anagramMap;
    DictionaryLoader* dictLoader;

public:
    explicit Anagrams(const char* pathToDict);
    ~Anagrams();
    void run();
};


#endif //ANAGRAM_ANAGRAMS_H
