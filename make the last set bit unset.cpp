//  make the last set bit unset

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    n = n & n-1;
    cout << n;
    
}

