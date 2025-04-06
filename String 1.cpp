// String 1

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "My name is Vurimundara Sandeep Reddy";
    string  ans;
    int i;
    for(i=str.length()-1;i>-1;i--){
        ans.push_back(str[i]);
    }
    
    int l = 0 , r = str.length()-1;
    while(l<r){
        swap(str[l],str[r]);
        l++;
        r--;
    }
    
    reverse(str.begin(),str.end());
    cout << str << endl;
    cout << ans << endl;
    

    return 0;
}