#include <string>
#include <iostream>
#include <fstream>
#include "Calendar.h"
using namespace std;

int main(){
    fstream dataFile;
    dataFile.open("Calendar_Events.txt", ios::in);
    string e, l;
    int d;
    float t;
    if (dataFile.is_open())
        {
            
        }
    return 0;
}

