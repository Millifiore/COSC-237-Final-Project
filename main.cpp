#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Calendar.h"
using namespace std;

int main(){
    fstream dataFile;
    dataFile.open("Calendar_Events.txt", ios::in);
    string e, d, t, l;
    string event[8];
    if (!dataFile)
        {
            cout << "Couldn't open the file" << endl;
        }
    else if
        {int i = 0;
        string line;
        while (getline(dataFile, line))
            {
              string items[4];
              Calendar cal;[

              ]
              int date[3];
              string s;
              istringstream contents(&line);
              int i = 0;
              while (getline(contents, s, '|')){
                items[i] = s;
                i++;
              }
              istringstream v(&items[3]);
              int j = 0;
              while (getline(v, s, '-')){
                date[i] = stoi(s);
                j++;
              }

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
