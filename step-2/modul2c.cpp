#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Enter the order of the day : ";
    cin >> i;

    switch (i)
    {
    case 1:
        cout << "monday \n";
        break;
    case 2:
        cout << "tuesday \n";
        break;
    case 3:
        cout << "wednesday \n";
        break;
    case 4:
        cout << "thursday \n";
        break;
    case 5:
        cout << "friday \n";
        break;
    case 6:
        cout << "saturday \n";
        break;
    case 7:
        cout << "sunday \n";
        break;
    default:
        cout << "order of days out of order \n";
    }
}
