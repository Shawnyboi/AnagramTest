//
// Created by shawn on 7/9/2022.
//

#ifndef ANAGRAM_ANAGRAMMAP_H
#define ANAGRAM_ANAGRAMMAP_H


#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
class AnagramMap {
private:
    unordered_map<string, vector<string>> map;
    static string sortString(string s);
    void checkInWord(const string& word);

public:
    void createAnagramMap(const vector<string>* words);
    vector<string> getAnagrams(const string& word);
};


#endif //ANAGRAM_ANAGRAMMAP_H
