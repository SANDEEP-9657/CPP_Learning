// PrintAlphabetX

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetX(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j || (i+j==n-1)){
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
    PrintAlphabetX(n);
    

    return 0;
}