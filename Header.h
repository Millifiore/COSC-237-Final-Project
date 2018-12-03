#ifndef Calendar_H
#define Calendar_H
class Calendar {
    private:
        string event;
        int date;
        int time;
        string location;
    public:
        Calendar();
        void setEvent(string);
        void setDate(int);
        void setTime(int);
        void setLocation(string);
    
        string getEvent() const
            { return event;}
        int getDate() const
            { return date;}
        int getTime() const
            { return time;}
        string getLocation() const
            { return location;}
    
};

#endif


