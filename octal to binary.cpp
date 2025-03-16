//  octal to binary


#include<bits/stdc++.h>
using namespace std;

int DecToBin(int n){
    int bin = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 2 ;
        bin = bin + rem * pow(10,len);
        n = n / 2;;
        len++;
    }
    
    return bin;
}

int OctToBin(int n){
    int bin = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 10;
        bin = bin + DecToBin(rem)*pow(10,len);
        n = n /10;
        len+=3;
    }
    
    return bin;
}




int main()
{
    int n;
    cout<<"Enter the octal number" << endl;
    cin>>n;
    cout << OctToBin(n) <<endl;
    
}