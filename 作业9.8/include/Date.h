class Date
{
public:
   Date( int = 1, int = 1, int = 2000 );
   void print();
   void setDate( int, int, int );
   void setMonth( int );
   void setDay( int );
   void setYear( int );
   void nextDay();

   int getMonth();
   int getDay();
   int getYear();

private:
   int month;
   int day;
   int year;
   bool leapYear();
   int monthDays();
};
