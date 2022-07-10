#include "Anagrams.h"

int main(const int argc, const char* const argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: Anagram <dictionary_filename>\n";
        return -1;
    }

    auto* anagrams = new Anagrams(argv[1]);
    anagrams->run();
    delete anagrams;

    return 0;
}
