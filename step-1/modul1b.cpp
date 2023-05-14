#include <iostream>

using namespace std;

struct
{
    char Name[100], Study[100], Faculty[100], Class[100];
} d;

int main()
{
    cout << "Name : ";
    cin >> d.Name;
    cout << "Study : ";
    cin >> d.Study;
    cout << "Class : ";
    cin >> d.Class;
    cout << "Faculty : ";
    cin >> d.Faculty;

    return 0;
}
