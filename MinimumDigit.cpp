
// Find the minimum digit of the number
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int min=0 ;
    while(n !=0){
        int rem = n % 10;
        if(rem < min){
            min = rem;
        }
        n = n / 10;
    }
    
    cout << "The Minimum digit of the number is" << min << endl;
    
    
}