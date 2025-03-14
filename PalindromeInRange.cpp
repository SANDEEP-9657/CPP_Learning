//Write a program to find out all palindrome numbers present within a given range.

#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int temp = n;
    int rev =0;
    while(n!=0){
        rev = (rev * 10) + n % 10 ;
        n /= 10;
    }
    
    if(temp == rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int x , y;
    cout << "Enter the range"<<endl;
    cin >> x >> y;
    
    int i;
    for(i=x;i<=y;i++){
        if(isPalindrome(i)){
            cout << i << endl;
        }
    }
    
}