// PrintAlphabetH

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetH(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==n-1 || j ==0  || i == n/2 ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    PrintAlphabetH(n);
    

    return 0;
}