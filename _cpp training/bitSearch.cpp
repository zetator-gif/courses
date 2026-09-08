#include <vector>
#include <iostream>
using namespace std;

int bitSearch(vector<int>&arr, int target) {
    
    int left = 0;
    int right = arr.size() - 1;
    
    
    while (left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
        return mid; 
        }
        
else if (arr[mid] < target){
    left = mid + 1;
    }
else {
    right = mid - 1;
    } //   else if ()
    
    return -1;
    cout << target;
    }
}

//  test cases
int main(){
vector <int> arr = {5, 0, 9, 11};
int target = 10;

sort(arr.begin(), arr.end());

int index = bitSearch(arr, target);

if (index != -1) {
    cout << index;
    }
    else {cout << "0";}
    return 0;
}