// Write a program to find out how many 1 and 0 in a given number.

#include<iostream>
using namespace std;

void NumOf0n1(int n){
    int c0,c1;
    c0=c1=0;
    while(n!=0){
        int rem = n % 10;
        if(rem == 0){
            c0++;
        }
        else if(rem == 1){
            c1++;
        }
        
        
        n =  n/10;
    }
    
    cout << "THe number of Zeros and Ones in the given number is" << c0 << " " << c1;
}

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n ;
    NumOf0n1(n);
    
    
}