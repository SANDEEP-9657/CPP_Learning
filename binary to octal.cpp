// binary to octal 


#include<bits/stdc++.h>
using namespace std;

int BinToDec(int n){
    
    int res = 0;
    int len = 0;
    while(n!=0){
        int rem = n %  10 ;
        res = res + rem * (pow(2,len));
        len++;
        n/=10;
    }
    
    return res;
}


int BinToOct(int n){
    
    int oct = 0 ;
    int len = 0;
    while(n!=0){
        int rem = n % 1000;
        oct = oct + BinToDec(rem) * pow(10,len);
        len++;
        n = n / 1000;
        
    }
    
    return oct;
    
}



int main()
{
    int n;
    cout<<"Enter the binary number" << endl;
    cin>>n;
    cout << BinToOct(n) <<endl;
    
}