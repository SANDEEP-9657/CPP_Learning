// Write a program to Calculate Reverse a number using Recursion.

#include <bits/stdc++.h>
using namespace std;

void reverse(int n){
   if(n<=9){
       cout << n;
   }
   else{
       cout << n % 10;
       reverse(n/10);
   }
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
   reverse(n); 
    return 0;
}