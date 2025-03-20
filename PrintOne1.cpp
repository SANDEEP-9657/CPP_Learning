// PrintOne1

#include <bits/stdc++.h>
using namespace std;



void PrintOne1(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == n-1 || j == n/2 || i+j == n/2){
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
    PrintOne1(n);
    

    return 0;
}