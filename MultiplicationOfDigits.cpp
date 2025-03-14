
// Find the multiplication of digits 
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int mul=1 ;
    while(n !=0){
        int rem = n % 10;
        
            mul*= rem;

        n = n / 10;
    }
    
    cout << "The Sum of  digits of the number is" << mul << endl;
    
    
}