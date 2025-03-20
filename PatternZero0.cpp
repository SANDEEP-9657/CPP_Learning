// 

#include <bits/stdc++.h>
using namespace std;

void PrintZer0(int n){
    int i , j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(i == 0 || j == 0  || j == n-1 || i == n-1 ){
               cout << " * " ;
           }
           else{
               cout << "   ";
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
    PrintZer0(n);
    

    return 0;
}