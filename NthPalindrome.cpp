// Write a program to Find the nth palindrome number.


#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int rev = 0;
    int temp = n;
    while(n!=0){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    
    return ( temp == rev);
}

int nThPalindrome(int n ){

    int i =1;
    while(n){
        if(isPalindrome(i)){
            n--;
        }
        i++;
    }
    return i-1;
}

int main(){
    int n ;
    cout << "Enter the value of n :" << endl;
    cin >> n ;
    
    cout << "the nThPalindrome is " << nThPalindrome(n) ;
    
}