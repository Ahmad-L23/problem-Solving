#include <iostream>
#include <iomanip>
using namespace std;


bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Year, short Month)
{
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
        (Month == 4 || Month == 6 || Month == 9 || Month == 11) ? 30 : 31;
}

short NumberOfDaysFromBeginningOfyear(short Year, short Month, short Day)
{
    if (Month == 1)
        return Day;

    short DaysFromBeginning = 0;
    for (int i = 1; i < Month; i++)
    {
        DaysFromBeginning += NumberOfDaysInMonth(Year, i);
    }
    return DaysFromBeginning + Day;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}
short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}


int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    cout << "Number Of days from the beginning of the year is " << NumberOfDaysFromBeginningOfyear(Year, Month, Day);
    system("pause>0");
    return 0;
}

