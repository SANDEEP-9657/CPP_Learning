// Check if binary representation of a number is palindrome

#include <iostream>
#include<cmath>
using namespace std;

int DecToBin(int n){
    int bin = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 2 ;
        bin = bin + rem * pow(10,len);
        len++;
        n/=2;
    }
    
    return bin;
}

bool isPalindrome(int n){
    int bin = DecToBin(n);
    int temp = bin;
    int rev  =0 ;
    while(temp !=0){
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    
    return rev == bin;
}

int main()
{
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isPalindrome(n)){
       cout << "the binary representation of the number is palindrome" <<endl;
   }
   else{
       cout << "the binary representation of the number is not palindrome" << endl;
   }
}