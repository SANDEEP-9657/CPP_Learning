// fermat number

#include<bits/stdc++.h>
using namespace std;


int Fermat(int n){
    if(n==0){
        return 3;
    }
    if(n==2){
    
        return 5;
    }
    
    return static_cast<int>(pow(2,static_cast<int>(pow(2,n)))) + 1;
    
}
int main(){
    
    int n;
    cout <<"Enter the value of n" << endl;
    cin >> n;
    cout << Fermat(n);
    
    return 0;
}