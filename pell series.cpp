// pell series

#include<bits/stdc++.h>
using namespace std;


int pellNumber(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    
    return 2 * pellNumber(n-1) + pellNumber(n-2) ;
}

int main(){
    int n ;
    cout << "Enter the number" << endl;
    cin >> n;
    int i =0;
    while(n--){
        cout << pellNumber(i) << endl;
        i++;
    }
    
}