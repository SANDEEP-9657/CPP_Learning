
// Find the length of the number
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int count = 0;
    while(n !=0){
        count++;
        n = n / 10;
    }
    
    cout << "The Lenght of the number is" << count << endl;
    
    
}