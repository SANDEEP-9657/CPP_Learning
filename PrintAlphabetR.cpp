// PrintAlphabetR

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetR(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((j == 0  ) || ( i == 0 && j <=n/2 ) || (j==n/2 && i<=n/2) || (i==n/2 && j <=n/2) || (i-j == n/2) ){
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
    PrintAlphabetR(n);
    

    return 0;
}