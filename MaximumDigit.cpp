
// Find the maximum digit of the number
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int max=0 ;
    while(n !=0){
        int rem = n % 10;
        if(rem > max){
            max = rem;
        }
        n = n / 10;
    }
    
    cout << "The MAximum digit of the number is" << max << endl;
    
    
}