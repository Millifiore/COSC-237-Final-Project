#ifndef Calendar_H
#define Calendar_H
class Calendar {
    private:
        string event;
        int date;
        float time;
        string location;
    public:
        Calendar(){
            event = " ";
            date = 00-00-0000;
            time = 00.00;
            location = " ";
            };
        void setEvent(string e)
            {event = e;}
        void setDate(int d)
            {date = d;}
        void setTime(float t)
            {time = t;};
        void setLocation(string l);
            {location = l;}
    
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


