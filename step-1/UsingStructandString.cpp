#include <iostream>
#include <string>

using namespace std;

struct
{
    string Name, Study, Faculty, Class;
} d;

int main()
{
    cout << "Name : ";
    getline(cin, d.Name);
    cout << "Study : ";
    getline(cin, d.Study);
    cout << "Class : ";
    getline(cin, d.Class);
    cout << "Faculty : ";
    getline(cin, d.Faculty);

    cout << d.Name << " studying " << d.Study << " at class " << d.Class << " faculty " << d.Faculty << endl;

    return 0;
}
