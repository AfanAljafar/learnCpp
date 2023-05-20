#include <cstring>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

char uname[100], pass[100];
//const char *keyuname = "afan";
//const char *keypass="aljafar";

int main()
{
    cout << "enter username : ";
    cin >> uname;
    cout << "enter password : ";
    cin >> pass;

    if (strcmp(uname, "afan") == 0 && strcmp(pass, "aljafar") == 0)
    {
        cout << "welcome afan" << endl;
    }
    else
    {
        cout << "failed login" << endl;
    }
}
