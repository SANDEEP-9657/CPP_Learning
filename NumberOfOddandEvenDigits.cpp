// Write a program to find the number of odd and even digits in the given
// number.

#include<iostream>
using namespace std;


void NumberOfOddnEvenDigits(int n){
    int odd = 0;
    int even = 0;
    while(n!=0){
        int rem = n % 10;
        if(rem % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        
        n = n / 10;
    }
    cout << " the number of odd digits is " << odd << " the number of even digits is" << even;
}
int main(){
    int n ;
    cout <<"enter the value of n" << endl;
    cin >> n ;
    NumberOfOddnEvenDigits(n);
    
}