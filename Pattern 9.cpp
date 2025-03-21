// Pattern 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cout <<"Enter the value of n" <<endl;
    cin >> n;
    int i , j;
    int count = 1;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i-j >=0){
                cout << count << " " ;
                count++;
                if(count >9){
                    count = 1;
                }
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}