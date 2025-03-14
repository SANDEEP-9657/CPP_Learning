
// Find the Reverse of the number
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int rev =0 ;
    while(n !=0){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    
    cout << "The Reverse of the number is" << re << endl;
    
    
}