//write a program to find the sum of n natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout << "enter the number :"<<endl;
    cin >> n;
    
    int sum = 0;
    for(i=1;i<=n;i++){
        sum += i;
    }
    
    cout << "The Sum of " << n << "  Natural Numbers is " << sum ;

    return 0;
}