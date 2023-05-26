#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    cout << "result of " << a << " + " << b << " = " << c << endl;
    return c;
}

int main()
{
    int x, y, result;

    cout << "enter first integer : ";
    cin >> x;
    cout << "enter second integer : ";
    cin >> y;

    result = sum(x, y);
    //cout << "result of " << x << " + " << y << " = " << result << endl;
    cout << result;

    return 0;
}
