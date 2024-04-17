#include <bits/stdc++.h>
using namespace std;

double addition(auto a, auto b) // Function for the addition of two numbers
{
     
    return (a + b);
}

double subtraction(auto a, auto b) // Function for the subtraction of two numbers
{
   return double(a) - b;

    
}

double multiplication(auto a, auto b) // Function for the multiplication of two numbers
{
    return a * b;
}

double division(auto a, auto b) // Function for the division of two numbers
{
    return double(a) / b;
}
int main()
{
    int choice;
    double num1, num2;

    do
    {
        cout << "1.Additon" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "5.Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            cout << "The addition of the first and second number will be: " << addition(num1, num2);
            cout << endl;
            break;

        case 2:

            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            cout << "The subtraction of the first and second number will be " <<double(subtraction(num1, num2));
            cout << endl;
            break;

        case 3:

            cout << "Enter first number";
            cin >> num1;

            cout << "Enter second number";
            cin >> num2;

            cout << "The multiplication of the first and second number will be " << multiplication(num1, num2);
            cout << endl;
            break;

        case 4:

            cout << "Enter first number";
            cin >> (num1);

            cout << "Enter second number";
            cin >> num2;

            cout << "The division of the first and second number will be " << double(division(num1, num2));
            cout << endl;
            break;

        case 5:
            cout << "Exiting the program!" << endl;
            break;

        default:
            cout << "Invalid choice! Please choose a valid option" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}