#include <string>
#include <iostream>
#include <fstream>
#include "Calendar.h"
using namespace std;

int main(){
    fstream dataFile;
    dataFile.open("Calendar_Events.txt", ios::in);
    string e, d, t, l;
    string event[4]
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
    return 0;
}

