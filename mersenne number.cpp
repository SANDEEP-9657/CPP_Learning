// mersenne number

#include <bits/stdc++.h>
using namespace std;

bool isMersenneNumber(int n){
    int i = 1;
    int val = 0;
    while(val<n){
        val = pow(2,i) - 1;
        i++;
        if(val == n){
            return true;
        }
    }

    return false;
}


int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isMersenneNumber(n)){
        cout << "it is mersenne number" << endl;
    }
    else{
        cout << "it is not mersenne number" << endl;
    }

    return 0;
}