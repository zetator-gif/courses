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
    }
        
      //  if
        
     //   else if ()
    
    return -1;
}