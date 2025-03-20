// PrintAlphabetE

#include <bits/stdc++.h>
using namespace std;



void PrintAlphabetE(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || j ==0 || i ==n-1 || i == n/2 ){
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
    PrintAlphabetE(n);
    

    return 0;
}