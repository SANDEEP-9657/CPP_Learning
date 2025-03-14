// WAP to swap two number Without using temp variable.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the two numbers" << endl;
    cin >> a >> b;
    
    // a = a + b;
    // b = a- b;
    // a = a-b;
    
    
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b ;
    
    b = a+b - (a=b);
    cout << a << b << endl;

    return 0;
}