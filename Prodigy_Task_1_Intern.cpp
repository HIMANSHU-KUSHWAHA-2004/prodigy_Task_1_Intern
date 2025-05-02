#include <iostream>
using namespace std;

void convertFromCelsius(double temp) {
    double fahrenheit = (temp * 9/5) + 32;
    double kelvin = temp + 273.15;
    cout << "Fahrenheit: " << fahrenheit << " °F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;
}

void convertFromFahrenheit(double temp) {
    double celsius = (temp - 32) * 5/9;
    double kelvin = celsius + 273.15;
    cout << "Celsius: " << celsius << " °C" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;
}

void convertFromKelvin(double temp) {
    double celsius = temp - 273.15;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << "Celsius: " << celsius << " °C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " °F" << endl;
}

int main() {
    double temperature;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temperature;
    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    switch(toupper(unit)) {
        case 'C':
            convertFromCelsius(temperature);
            break;
        case 'F':
            convertFromFahrenheit(temperature);
            break;
        case 'K':
            convertFromKelvin(temperature);
            break;
        default:
            cout << "Invalid unit. Please enter C, F, or K." << endl;
    }

    return 0;
}
