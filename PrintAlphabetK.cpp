// PrintAlphabetK

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetK(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0 || (i+j) == n/2 || (i-j)==n/2 ){
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
    PrintAlphabetK(n);
    

    return 0;
}