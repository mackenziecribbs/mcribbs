/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h18.h"

// Place your function here
vector<Word> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
    vector<Word> results;
    string wordcheck = "";
    while(getline(in, wordcheck))
    {
        int position = in.tellg();
        if (position == -1)
        {
            break;
        }
        in >> wordcheck >> ws;

        int len = wordcheck.size();
        string temp = "";
        for(int i = 0; i < len; i++)
        {
            if (!ispunct(wordcheck.at(i)))
            {
                temp += wordcheck.at(i);
            }
            else if (isupper(wordcheck.at(i)))
            {
                temp += tolower(wordcheck.at(i));
            }
            else
            {
                temp += wordcheck.at(i);
            }
        }
        wordcheck = temp;

        // if(in.find(word, results))
        // {
        //     position
        //     continue;
        // }

    }


    return results;
}


/////////////// STUDENT TESTING ////////////////////
vector<string> fileToWords(const string& filename);
#include <sstream>
#include <iomanip>
int run()
{
    cout << "Student testing" << endl;
    // vector<string> dictionary = fileToWords("words");
    // vector<string> ignore = fileToWords("excluded.txt");
    // istringstream words("Now is the tyme for all good studunts to "
    //     "come to the aiid of their ai!id classmaates.");
    // vector<Word> misspelled = spellCheck(words, dictionary, ignore);
    // cout << "Misspelled words" << endl;
    // int i{1};
    // for (const auto& e : misspelled)
    // {
    //     cout << setw(4) << i++ << ". " << e.word << ", [ ";
    //     for (auto pos : e.positions)
    //         cout << pos << " ";
    //     cout << "]" << endl;
    // }

    return 0;
}