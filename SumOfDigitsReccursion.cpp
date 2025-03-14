// WWAP to sum of digits of a number using recurssion.

#include<iostream>
using namespace std;

int sum(int n ){
    
   if(n<=9){
       return n;
   }
   else{
       return n % 10 + sum (n/ 10);
   }
    
   
}

int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n ;
    
    cout << "The Sum of digits of  the given number" << sum(n) << endl;
}