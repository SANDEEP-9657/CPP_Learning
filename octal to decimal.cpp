//  octal to decimal

#include<bits/stdc++.h>
using namespace std;

int OctToDec(int n){
    int dec = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 10;
        dec = dec + rem * pow(8,len);
        len++;
        n/=10;
    }
    
    return dec;
}



int main(){
    int n;
    cout << "Enter the Oct number" << endl;
    cin >> n;
    cout << OctToDec(n) << endl;
}