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
    string word = "";
    while(!in.eof())
    {
        int current_pos = in.tellg();
        if (current_pos == -1)
        {
            break;
        }
        in >> word >> ws;

        int len = word.size();
        string temp = "";
        for(int i = 0; i < len; i++)
        {
            if (!ispunct(word.at(i)))
            {
                temp += word.at(i);
            }
            else if (isupper(word.at(i)))
            {
                temp += tolower(word.at(i));
            }
            else
            {
                temp += word.at(i);
            }
        }
        word = temp;

        int resultslen = results.size();

        for (int i = 0; i < resultslen; i++)
        {
            if (word == results.at(i).word)
            {

                results.at(i).positions.push_back(current_pos);
            }
        }


        int excludelen = excluded.size();
        for (int i = 0; i < excludelen; i++)
        {
            if (word == excluded.at(i))
            {
                continue;
            }
        }
        int dictlen = dictionary.size();
        for (int i = 0; i < dictlen; i++)
        {
            if (word == dictionary.at(i))
            {
                continue;
            }

        }

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