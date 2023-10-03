#include <iostream>

using namespace std;

int main()
{
    int num1, num2, res;

    num1 = 3;
    num2 = 2;

    res = num1 + num2;
    cout << res;

    //addition operation using user input
    cout << endl << "==========================" << endl;
    cout << "addition operation";
    cout << endl << "==========================" << endl;
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;
    res = num1 + num2;
    cout << "result : " << res;

    //reduction operation using user input
    cout << endl << "==========================" << endl;
    cout << "reduction operation";
    cout << endl << "==========================" << endl;
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;
    res = num1 - num2;
    cout << "result : " << res;

    //multiplication operation using user input
    cout << endl << "==========================" << endl;
    cout << "multiplication operation";
    cout << endl << "==========================" << endl;
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;
    res = num1 * num2;
    cout << "result : " << res;

    //division operation using user input
    cout << endl << "==========================" << endl;
    cout << "multiplication operation";
    cout << endl << "==========================" << endl;
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;
    res = num1 / num2;
    cout << "result : " << res;

    //modulus operation using user input
    cout << endl << "==========================" << endl;
    cout << "modulus operation";
    cout << endl << "==========================" << endl;
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;
    res = num1 % num2;
    cout << "result : " << res;

    return 0;
}
