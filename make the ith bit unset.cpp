// make the ith bit unset

#include <iostream>
#include<cmath>
using namespace std;

int main()
{   
    int n ,i;
    cout <<"Enter the number and ith value" << endl;
    cin >> n >> i ;
    n = n ^  static_cast<int>(pow(2,i)) ;
    cout << n << endl;
    return 0;
}