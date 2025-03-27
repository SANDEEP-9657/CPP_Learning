// Array Palindrome
#include<iostream>
#include<vector>
using namespace std;



bool isPalindrome(vector<int> arr){
    int left = 0;
    int right = arr.size()-1;
    while(left < right){
        if(arr.at(left)!=arr.at(right)){
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}
int main(){
    vector<int> vec = {1,1,0,0,9,1,1};
    if(isPalindrome(vec)){
        cout << "The array is Palindrome" << endl;
    }
    else{
        cout << "The array is not Palindrome" << endl;
    }
}