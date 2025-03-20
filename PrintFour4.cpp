// PrintFour4

#include <bits/stdc++.h>
using namespace std;



void PrintFour4(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( i == n/2 || j == n/2 || i+j == n/2 ){
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
    PrintFour4(n);
    

    return 0;
}