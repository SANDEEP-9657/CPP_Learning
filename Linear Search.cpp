// Linear Search
#include <iostream>
#include<vector>
using namespace std;


int LinearSearch(vector<int> arr , int k){
    int i;
    for(i=0;i<arr.size();i++){
        if(arr.at(i)==k){
            return i;
        }
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
    cout << "Enter the search element" << endl;
    int ele;
    cin >> ele;
    cout << "the element found at index " << LinearSearch(vec,ele);
    

    return 0;
}