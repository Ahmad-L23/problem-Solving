#include <iostream>
#include <iomanip>
using namespace std;


short DayOfWeekOrder(short Year, short Month, short Day = 1)
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

string MonthShortName(short MonthOfYearOrder)
{
    string arrDaysName[] = {"", "Jan", "Fep", "Mar", "Apr", "May", "jun", "jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return arrDaysName[MonthOfYearOrder];
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Year, short Month)
{
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
        (Month == 4 || Month == 6 || Month == 9 || Month == 11) ? 30 : 31;
}

#include <iostream>
#include <iomanip>
using namespace std;

void ShowCalendarScreen(short Year, short Month)
{
    string MonthName = MonthShortName(Month);
    short DaysInMonth = NumberOfDaysInMonth(Year, Month);
    short FirstDay = DayOfWeekOrder(Year, Month); 

    cout << "------------------ " << MonthName << " " << Year << " ------------------\n";
    cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    short Day = 1;

    
    for (short i = 0; i < FirstDay; ++i)
        cout << "     ";

    
    for (short i = FirstDay; Day <= DaysInMonth; ++i)
    {
        cout << setw(5) << Day;

        if (i % 7 == 6) 
            cout << endl;

        ++Day;
    }

    cout << "\n-----------------------------------------------\n\n\n";
}

void PrintYearCalendar(short Year)
{
    cout << "--------------------------------------------------------" << endl;
    cout << "              Calendar - " << Year << endl;
    cout << "--------------------------------------------------------" << endl;

    for (short i = 1; i <= 12; i++)
    {
        ShowCalendarScreen(Year, i);
    }
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


int main()
{
    short Year = ReadYear();
    PrintYearCalendar(Year);
    system("pause>0");
    return 0;
}

