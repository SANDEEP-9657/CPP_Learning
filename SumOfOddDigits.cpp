
// Find the sum of odd digits 
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int sum=0 ;
    while(n !=0){
        int rem = n % 10;
        if(rem %  2 != 0){
            sum += rem;
        }
        n = n / 10;
    }
    
    cout << "The Sum of Odd digits of the number is" << sum << endl;
    
    
}