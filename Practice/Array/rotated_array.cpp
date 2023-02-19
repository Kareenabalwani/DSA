#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int search(vector<int>& nums, int target) {
    auto it = find(nums.begin(),nums.end(),target);
    int index = it - nums.begin();
    return index;
 }
// int search(vector<int>& nums, int target) {
    // auto it = find(nums.begin(),nums.end(),target);
    // int index = it - nums.begin();
    // return index;
        // sort(nums.begin(),nums.end());
        // int start = 0;
        // int end = nums.size()-1;
        // while(start <= end ){
        //     int mid = (start + end)/2;
        //     if(nums[mid] == target){
        //         int val =  mid;
        //     }
        //     // 0 1 2 3 4 5 6 7  
        //     if(target < nums[mid]){
        //         end = mid-1;
        //     }
        //     if(target > nums[mid]){
        //         start = mid +1;
        //     }
            
        // }
        // return -1;
    // }

int main(int argc, char const *argv[])
{
    int n;
    cout << "enter n:";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
     int val;
     cin >>val;
     arr.push_back(val);
    }
    int m;
    cout << "enter target:";
    cin >> m;

    int ans = search(arr, m);
    cout<<"ans is:"<<ans;

    return 0;
}
