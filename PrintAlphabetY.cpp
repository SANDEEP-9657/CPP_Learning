// PrintAlphabetY

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetY(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(((i==j) && (i<=n/2 && j<=n))|| (i+j == n-1)){
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
    PrintAlphabetY(n);
    

    return 0;
}