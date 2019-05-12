
class Time
{
    public:
        Time(int =0,int =0,int =0);
        void setTime(int ,int ,int );
        void setHour(int );
        void setMinute(int );
        void setSecond(int );

        unsigned int getHour();
        unsigned int getMinute();
        unsigned int getSecond();

        void printUniversal() const;
        void printStandard() const;

    private:
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};

