// Pattern 10

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cout <<"Enter the value of n" <<endl;
    cin >> n;
    int i , j;
    
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if((i-j>=0 && i <=n/2)  || (i+j<=n-1 && i>=n/2) ){
                cout << j+1 << " ";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}