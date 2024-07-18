#include <iostream>
using namespace std;

int FahrenheitToCelsius(int fahrenheit)
 {
    int celsius = 5.0 / 9.0 * (fahrenheit - 32);
    return celsius;
}

int CelsiusToFahrenheit(int celsius) 
{
    int fahrenheit = (celsius * 9.0 / 5.0) + 32;
    return fahrenheit;
}

int main() 
{
    int choice;
    int temperature;
    do {
        cout << "1. FahrenheitToCelsius" << endl;
        cout << "2. CelsiusToFahrenheit" << endl;
        cout << "3. Exit" << endl;
        cout << "Please, Enter your choice" << endl;
        cin >> choice;

        if (choice == 1)
		 {
            while (true) 
			{
                cout << "Enter temperature in Fahrenheit" << endl;
                if (cin >> temperature)
				 {
                    break;
                } else {
                    cout << "Invalid input! Please re-enter" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
            }
            int celsius = FahrenheitToCelsius(temperature);
            cout << temperature << "F = " << celsius << "C" << endl;
        } else if (choice == 2) {
            while (true) {
                cout << "Enter temperature in Celsius" << endl;
                if (cin >> temperature) {
                    break;
                } else {
                    cout << "Invalid input! Please re-enter" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
            }
            int fahrenheit = CelsiusToFahrenheit(temperature);
            cout << temperature << "C = " << fahrenheit << "F" << endl;
        }
    } while (choice != 3);

    return 0;
}

