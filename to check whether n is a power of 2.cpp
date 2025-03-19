// to check whether n is a power of 2

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if( !(n & n-1) ){
        cout << "It is Power of 2" << endl;
    }
    else{
        cout << "it is not a power of 2" <<endl;
    }
    
}

