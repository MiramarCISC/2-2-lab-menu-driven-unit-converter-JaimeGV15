#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) 
{

    return inches * CENTIMETERS_PER_INCH;
}

double centimetersToInches(double centimeters) 
{
    // TODO: return centimeters converted to inches.
    return centimeters / CENTIMETERS_PER_INCH;
}

double poundsToKilograms(double pounds) 
{
    // TODO: return pounds converted to kilograms.
    return pounds / POUNDS_PER_KILOGRAM;
}

double kilogramsToPounds(double kilograms) 
{
    // TODO: return kilograms converted to pounds.
    return kilograms * POUNDS_PER_KILOGRAM;
}

double fahrenheitToCelsius(double fahrenheit) 
{
    // TODO: return Fahrenheit converted to Celsius.
    return ((fahrenheit - 32) * (5.0 / 9.0)); // Jaime: added a parenthesis to close the 5/9, so its easier to see in the part of the formula, it's a matter of personal taste, more than anything.
}

double celsiusToFahrenheit(double celsius) 
{
    // TODO: return Celsius converted to Fahrenheit.
    return ((celsius * (9.0 / 5.0)) + 32); // Jaime: I added a parenthesis here also, the same as in fahrenheit to celsius, personal taste
}

bool isValidMenuChoice(int choice) 
{
    // TODO: return true when choice is between EXIT_CHOICE and CELSIUS_TO_FAHRENHEIT.
    return choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT;
}

bool requiresNonNegativeValue(int choice) 
{
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
    // TODO: return true for choices 1 through 4.
    return choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS;
}

bool isValidValueForChoice(int choice, double value) 
{
  
    if(!isValidMenuChoice(choice)) 
    {
    return false;
}
if(requiresNonNegativeValue(choice) && value < 0)
{
    return false;
}
    return true;
}
void printMenu() 
{
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
    
} //Jaime: I added an extra space to give the intial square bracket its own line, so its easier to see where it begins and where it ends
