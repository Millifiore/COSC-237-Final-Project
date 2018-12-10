#include <string>
#include <iostream>
#include <fstream>
#include "Calendar.h"
using namespace std;

int main(){
    fstream dataFile;
    dataFile.open("Calendar_Events.txt", ios::in);
    string e, d, t, l;
    string event[8]
    if (!dataFile)
        {
            cout << "Couldn't open the file" << endl;
        }
    else
        {int i = 0;
        string line;
        while (getline(dataFile, line))
            {
             event[i] = line;
             i++;
            }
        }
    dataFile.close();
    Calendar event1;
    event1.setEvent(event[0]);
    event1.setDate(event[1]);
    event1.setTime(event[2]);
    event1.setLocation(event[3]);
    
    Calendar event2;
    event2.setEvent(event[4]);
    event2.setDate(event[5]);
    event2.setTime(event[6]);
    event2.setLocation(event[7]);
    
    
    return 0;
}

