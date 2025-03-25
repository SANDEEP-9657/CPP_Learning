// reverse the array
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> reverse(vector<int> arr){
    int left = 0;
    int right = arr.size()-1;
    while(left < right){
        int temp = arr.at(left);
        arr.at(left)=arr.at(right);
        arr.at(right)=temp;
        left++;
        right--;
    }
    
    return arr;
}



int main()
{
    vector<int> vec ;
    cout << "Enter the number of elements" ;
    int n;
    cin >> n;
    while(n--){
        int num ;
        cin >> num ;
        vec.push_back(num);
    }
    
    cout << "The reverse of the given array is" << endl;
    vector<int> res = reverse(vec);
    for(auto i : res){
        cout << i << "  ";
    }
   

    return 0;
}