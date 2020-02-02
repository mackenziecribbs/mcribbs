/**
 *  @author Mackenzie Cribbs
 *  @date 2/2/2020
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "mcribbs";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": Time on my hands" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Get time from input along with a duration" << endl;
    cout << "The output will be the sum which is the time that follows the user's input" << endl;
    cout << endl;

   // cout << "Time: " << "3:57"\n
   // << "Duration: " << "1:05" << endl;

    // Prompt and read the input
    cout << "   Time: ";
    int timeHours;
    int timeMinutes;
    int durationHours;
    int durationMinutes;

    cin >> timeHours;
    cin.get(); // discards the colon
    cin >> timeMinutes;

    cout << "   Duration: ";
    cin >> durationHours;
    cin.get();
    cin >> durationMinutes;

    // Processing

    int time = timeHours * 60 + timeMinutes;
    int duration = durationHours * 60 + durationMinutes;
    int after = time + duration;
    int before = 1440 + time - duration;
    int sumHours = after / 60 % 12;
    int sumMinutes = after % 60;
    int diffHours = before / 60;
    int diffMinutes = before % 60;

    // Output
    cout << endl;
    cout << durationHours << ":" << durationMinutes << " hours after, and before, "
    << timeHours << ":" << timeMinutes << " is [" << sumHours << ":" << sumMinutes
    << ", " << diffHours << ":" << diffMinutes << "]" << endl;

    cout << setfill('0');
    cout << setw(2) << after / 60 << ":" << setw(2) << after % 60;


    return 0;
}
