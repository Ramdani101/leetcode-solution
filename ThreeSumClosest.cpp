int threeSumClosest(vector<int>& nums, int target) {
        int result = target;
        int diff = INT_MAX;
        sort(nums.begin(),nums.end());
        bool stop = false;
        for(int i = 0; i < nums.size() && !stop; i++ ){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int dump = nums[i] + nums[left] + nums[right];
                int recentDiff = abs(target - dump);
                if(dump == target){
                    result = target;
                    stop = true;
                    break;
                }else{

                }

                if(recentDiff < diff){
                    diff = recentDiff;
                    result = dump; 
                }else{

                }

                if(dump > target){
                    right--;
                }else{
                    left++;
                }
            }
        }
        return result;
    }