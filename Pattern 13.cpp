// Pattern 13

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cout <<"Enter the value of n" <<endl;
    cin >> n;
    int i , j;
    int ascii = 65;
    int l = 0;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(j<=n/2){
            if((i-j >= 0 && (i>=n/2 && j>=n/2)) || (i+j >= n-1 &&(i>=n/2 && j<=n/2))|| i==n-1 ){
                cout << char(ascii) ;
                ascii++;
                
            }
            else{
                cout << " ";
            }
            }
            
            else{
                if((i-j >= 0 && (i>=n/2 && j>=n/2)) || (i+j >= n-1 &&(i>=n/2 && j<=n/2))|| i==n-1 ){
                ascii--;
                cout << char(ascii-1) ;
                
                
            }
            }
    }
             ascii=65;
      
        cout << endl;
        
       
    }

    return 0;
}