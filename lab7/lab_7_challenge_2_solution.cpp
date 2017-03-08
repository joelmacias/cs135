/*
 CS135L Lab 8 Programming Challenge 2 Solution
 
 Write a C++ program that prints out the hours, minutes, and seconds in a day
 
 Example output:
 
 0:0:0  <-- start
 0:0:1
 0:0:2
 .
 .
 .
 0:0:58
 0:0:59
 0:1:0
 .
 .
 .
 23:59:57
 23:59:58
 23:59:59 <-- end
 
 
 
 
 */

#include <iostream>


using namespace std;

int main(){
    
    // declare variables for time
    int seconds,minutes, hours;
    // first for loop will count hours
    for (hours=0; hours<= 23; hours++){
        // second for loop will count minutes
        for (minutes =0; minutes <= 59; minutes++){
            // third for loop will count seconds.
            for (seconds = 0; seconds <= 59; seconds++){
                cout<< hours << ":" << minutes << ":" << seconds << endl;
            }
            
        }
    }
    
    return 0;
}

/*
 
 //Michael Jorgensen from lab section 1004 this solution

int main(){
    int hour = 0;
    int minute = 0;
    int second = 0;
    
    while (hour != 23 || minute != 59 || second != 60)
    {
        cout << hour << ":" << minute << ":" << second << endl;
        second++;
        if (second >= 60 && (hour != 23 || minute != 59))
        {
            second = 0;
            minute++;
        }
        if (minute >= 60)
        {
            minute = 0;
            hour++;
        }
    }
    return 0;
}
 
 */
