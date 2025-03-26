

#include <bits/stdc++.h>
using namespace std;



vector<int> SortExact(vector<int> arr ){
    int n = arr.size();
    int ele = arr.at(n-1);
    int slow =0 , fast = 0;
    while(fast < n-1){
        if(arr[fast]<ele){
            if(slow != fast){
                int temp = arr.at(slow);
                arr.at(slow)=arr.at(fast);
                arr.at(fast)=temp;
            }
        slow++;
        }
        fast++;
        
    }
    
    int temp = arr.at(fast);
    arr.at(fast )=arr.at(slow);
    arr.at(slow)=temp;
    
    return arr;
}

int main()
{
    int n;
    vector<int> arr;
    cout << "Enter the number of  elements" << endl;
    cin >> n ;
    while(n--){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    vector<int> res = SortExact(arr);
    for(auto i : res){
        cout << i << " ";
    }
    return 0;
}