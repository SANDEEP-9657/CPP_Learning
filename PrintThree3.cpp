// PrintThree3

#include <bits/stdc++.h>
using namespace std;



void PrintThree3(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || i == n/2 || i == n-1 || j == n-1 ){
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
    PrintThree3(n);
    

    return 0;
}