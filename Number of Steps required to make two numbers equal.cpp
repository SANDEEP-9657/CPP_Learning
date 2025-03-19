// Number of Steps required to make two number 

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int count = 0;
   
    while(n>0){
        if(n&1 > 0){
            count++;
        }
        n=n>>1;
        
        
    }
    
    return count;
}

int main(){
    int n,m;
    cout << "Enter the numbers" << endl;
    cin >> n >> m;
    cout << countSetBits(n^m) << endl;
    
}