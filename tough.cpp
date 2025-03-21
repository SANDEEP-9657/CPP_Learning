// PrintAlphabetZ

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetZ(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((j==n/2 && i<=n/2) || ((i+j <= n-1 && (j<=3*(n/4) && j>=n/2 )) && ((i-j >= -(n/2) && (i-j <=0))  || ( i>=(n/4) &&  (j<=3*(n/4) && j >= n/2))) )){
                cout << "*";
            }
            else{
                cout << "_";
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
    PrintAlphabetZ(n);
    

    return 0;
}