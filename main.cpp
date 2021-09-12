#include <iostream>

using namespace std;

int count_cows (int);

int main()
{
    int cow;
    cout << "Enter the amount of cows: ";
    cin >> cow ;
    count_cows(cow);
    cout << endl;
    return 0;
}

int count_cows (int c){
     if ( c == 11 || c == 12 || c == 13 || c == 14)
    {
       cout << c << " " << "korov\n";
       return 0;
    }
    if (c % 10 == 1)
        cout << c << " " << "korova\n";
    if (c % 10 == 0 || c % 10 == 5 || c % 10 == 6 || c % 10 == 7 || c % 10 == 8 || c % 10 == 9)
        cout << c << " " << "korov\n";
    if (c % 10 == 2 || c % 10 == 3 || c % 10 == 4)
        cout << c << " " << "korovy\n";
}
