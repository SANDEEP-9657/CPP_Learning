// References C++

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    cout << r << endl;
    a++;
    cout << r << endl;
    cout << a << endl;
    r-=2;
    cout << a << endl;

    return 0;
}