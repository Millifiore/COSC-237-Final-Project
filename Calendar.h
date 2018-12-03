#ifndef Calendar_H
#define Calendar_H
class Calendar {
    private:
        string event;
        int date;
        float time;
        string location;
    public:
        Calendar();
        void setEvent(string);
        void setDate(int);
        void setTime(float);
        void setLocation(string);
    
        string getEvent() const
            { return event;}
        int getDate() const
            { return date;}
        float getTime() const
            { return time;}
        string getLocation() const
            { return location;}
    
};

#endif


