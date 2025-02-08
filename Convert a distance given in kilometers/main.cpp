#include <iostream>
#include <iomanip>

using namespace std;

double readValue()
{
    double ValueInKillo = 0;
    cout << "Enter the Value to Convert\n";
    cin >> ValueInKillo;
    return ValueInKillo;
}

long double convertTomMeter(double kilometers)
{
    return kilometers * 1000;
}

long double convertToCentimeters(double kilometers)
{
    return kilometers * 100000;
}

long double convertToMmillimeters(double kilometers)
{
    return kilometers * 1000000;
}

void print(long double Meter, long double Centimeters, long double Mmillimeter)
{
    cout << fixed << setprecision(0);
    cout << "Distance in Meter: " << Meter << " m\n";
    cout << "Distance in Centimeters: " << Centimeters << " cm\n";
    cout << "Distance in Millimeters: " << Mmillimeter << " mm\n";
}

int main()
{
    double kilometers = readValue();
    print(convertTomMeter(kilometers), convertToCentimeters(kilometers), convertToMmillimeters(kilometers));

    return 0;
}
