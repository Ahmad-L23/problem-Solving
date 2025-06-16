#include <iostream>
using namespace std;


short DayOfWeekOrder(short Year, short Month, short Day)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + 12 * a - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

}

string DayShortName(short DayOfWeekOrder)
{
    string arrDaysName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDaysName[DayOfWeekOrder];
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

    cout << "Date      : " << Month << "/" << Day << "/" << Year << endl;
    cout << "Day Order : " << DayOfWeekOrder(Year, Month, Day) << endl;
    cout << "Day Name    : " << DayShortName(DayOfWeekOrder(Year, Month, Day));
    system("pause>0");
    return 0;
}

