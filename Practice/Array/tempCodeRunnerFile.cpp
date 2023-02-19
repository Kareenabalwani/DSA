
int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid;
        while(start <= end){
             mid = (start + end)/2;
            if(nums[mid] == target){
                return mid;
            }
            // 0 1 2 4|  5 6 7  
            
            if(target < nums[mid]){
                end = mid-1;
            }