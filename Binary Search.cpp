// Binary Search
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int BinarySearch(vector<int> arr , int k , int mid){
    if(arr.at(mid) == k){
        return mid;
    }
    if(arr.at(mid)>k){
        return BinarySearch(arr , k , mid/2 );
    }
    if(arr.at(mid)<k){
        return BinarySearch(arr , k , mid * 1.5);
    }
    
    return -1;
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
    int ele;
    cout << "Enter the search element" ;
    cin >> ele;
   sort(vec.begin(),vec.end());
   cout << "the element found at" << BinarySearch(vec , ele , vec.size()/2);

    return 0;
}