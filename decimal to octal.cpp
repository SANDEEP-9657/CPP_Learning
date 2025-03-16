// decimal to octal

#include<bits/stdc++.h>
using namespace std;

int DecToOct(int n){
    int oct = 0;
    int len = 0;
    while(n!= 0){
        int rem = n % 8;
        oct = oct + rem * pow(10,len);
        len++;
        n/=8;
    }
    
    return oct;
}



int main(){
    int n;
    cout << "Enter the Decimal number" << endl;
    cin >> n;
    cout << DecToOct(n) << endl;
}