#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n ;
    if ( n == 11 || n == 12 || n == 13 || n == 14)
    {
       cout << n << " " << "korov\n";
       return 0;
    }
    if (n % 10 == 1)
        cout << n << " " << "korova\n";
    if (n % 10 == 0 || n % 10 == 5 || n % 10 == 6 || n % 10 == 7 || n % 10 == 8 || n % 10 == 9)
        cout << n << " " << "korov\n";
    if (n % 10 == 2 || n % 10 == 3 || n % 10 == 4)
        cout << n << " " << "korovy\n";
    return 0;
}
