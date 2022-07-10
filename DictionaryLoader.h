//
// Created by shawn on 7/10/2022.
//

#ifndef ANAGRAM_DICTIONARYLOADER_H
#define ANAGRAM_DICTIONARYLOADER_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
class DictionaryLoader {

private:
    vector<string> words;
    string pathToDictionary;

public:
    explicit DictionaryLoader(const string& path);
    vector<string>* getWords();
    bool loadDictionary();
};


#endif //ANAGRAM_DICTIONARYLOADER_H
