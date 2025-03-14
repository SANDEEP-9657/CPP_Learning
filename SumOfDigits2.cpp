
// Find the sum of digits 
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
        
            sum += rem;

        n = n / 10;
    }
    
    cout << "The Sum of  digits of the number is" << sum << endl;
    
    
}