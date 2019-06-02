#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        explicit Time (int =0,int =0,int =0);
        void setTime (int ,int ,int );
        void setSecond (int );

        unsigned int Hour() const;
        unsigned int Minute() const;
        unsigned int Second() const;

        void printUniversal() const;
        void printStandard() const;

    private:
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};
#endif // TIME_H
