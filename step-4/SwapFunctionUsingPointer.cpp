#include <iostream>
#include <ostream>

using namespace std;

int swap(int *a, int *b);

int main()
{
    int x, y;

    cout << "enter first integer : ";
    cin >> x;
    cout << "enter second integer";
    cin >> y;

    cout << "before swap : " << endl;
    cout << "value of first interger : " << x << endl;
    cout << "value of second interger : " << y << endl;

    swap(x, y);
    cout << "swap result" << endl;
    cout << "value of first interger : " << x << endl;
    cout << "value of second interger : " << y << endl;

    return 0;
}


int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
