// Pattern 14

#include <iostream>
using namespace std;

int main()
{
    int i , j , n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ascii = 65;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j >= n/2 &&  i-j>=-(n/2) &&  i-j<=n/2 && i+j<=3*(n/2) ){
                cout<<char(ascii);
                ascii++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        ascii=65;
    }

    return 0;
}