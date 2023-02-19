#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n= nums.size();
    int pos=-1;  
    int val=1;
    vector<int> v;
 for(int i=0; i<nums.size();i++){
    v.push_back(val);
    val++;

 }
    int element;      
    for(int i=0; i<n;i++){
      
        int count=0;
        if(nums[i]==nums[pos]){
            count++;
            cout<<"\n counted ! "<<nums[i];
        }
        cout<<" \nit is:"<<count;
        if(count>1){
            element=nums[i];
        }
    }


        if(element){
            return element;
        }else{
            return -1;
        }
    }
};


int main(){
 vector<int> nums = {1,2,4,3,2};
 Solution s;
 cout<<"this is: "<<s.findDuplicate(nums);
 return 0;
}