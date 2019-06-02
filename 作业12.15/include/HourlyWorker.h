#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H


class HourlyWorker : public Employee
{
    public:
        HourlyWorker(int =0);
        void setWage(int);
        void setHours(int);
        void getWage() const;
        void getHours() const;
        void Earnings() const;

    private:
        int wage;
        int hours;


};

#endif // HOURLYWORKER_H
