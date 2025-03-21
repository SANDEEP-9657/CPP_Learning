// Pattern 11

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cout <<"Enter the value of n" <<endl;
    cin >> n;
    int i , j;
    int ascii = 65;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i+j <= n-1 ){
                cout << char(ascii) << " ";
            }
            else{
                cout << " ";
            }
            
        }
        ascii++;
        cout << endl;
    }

    return 0;
}