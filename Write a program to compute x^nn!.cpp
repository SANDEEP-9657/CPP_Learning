// Write a program to compute x^n/n!.

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact =1;
    int i;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int x , n;
    cout << "Enter the value of x and n" << endl;
    cin >> x >> n;
    float xn = static_cast<int>(pow(x,n));
    cout << xn / fact(n) << endl;
    
    
}