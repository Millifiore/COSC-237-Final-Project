#include <iostream>
using namespace std;
#ifndef Calendar_H
#define Calendar_H


class Calendar {
    private:
        string event;
        string date;
        string time;
        string location;
    public:
        Calendar(){
            event = " ";
            date = " ";
            time = " ";
            location = " ";
            };
        void setEvent(string e)
            {event = e;}
        void setDate(string d)
            {date = d;}
        void setTime(string t)
            {time = t;}
        void setLocation(string l)
            {location = l;}
    
        string getEvent() const
            { return event;}
        string getDate() const
            { return date;}
        string getTime() const
            { return time;}
        string getLocation() const
            { return location;}
    
};

#endif
