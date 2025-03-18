// Evil Number

#include <bits/stdc++.h>
using namespace std;

int DecToBin(int n){
    int bin = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 2;
        bin = bin + rem * pow(10,len);
        len++;
        n/=2;
    }
    
    return bin;
}


bool isEvilNumber(int n){
    int bin = DecToBin(n);
    int count = 0;
    while(bin!=0){
        int rem = bin % 10;
        if(rem == 1){
            count++;
        }
        
        bin /= 10;
    }
    
    return count%2 == 0;
    
}

int nthEvil(int n){
    int i=1;
    while(n){
        if(isEvilNumber(i)){
            n--;
        }
        i++;
    }
    return i-1;
}

int main()
{
    int i ,n;
    cout << "Enter the range" << endl;
    cin >> n ;
    for(i=1;i<=n;i++){
        if(isEvilNumber(i)){
            cout << i << " ";
        }
    }

    return 0;
}