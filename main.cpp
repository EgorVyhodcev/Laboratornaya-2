#include <iostream>

using namespace std;

int main()
{
    int cow;
    cout << "Enter the amount of cows: ";
    cin >> cow ;
    cout << endl;
    if ( cow == 11 || cow == 12 || cow == 13 || cow == 14)
    {
       cout << cow << " " << "korov\n";
       return 0;
    }
    if (cow % 10 == 1)
        cout << cow << " " << "korova\n";
    if (cow % 10 == 0 || cow % 10 == 5 || cow % 10 == 6 || cow % 10 == 7 || cow % 10 == 8 || cow % 10 == 9)
        cout << cow << " " << "korov\n";
    if (cow % 10 == 2 || cow % 10 == 3 || cow % 10 == 4)
        cout << cow << " " << "korovy\n";
    return 0;
}
