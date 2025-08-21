#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        int currCount = 1, result = 0;
        sort(nums.begin(), nums.end());
        for(size_t i = 0; i < nums.size(); i++){
            if(i+1 != nums.size() && nums[i+1] == nums[i]+1){
                    currCount++;
                }else if(i+1 != nums.size() && nums[i+1] == nums[i]){
                    continue;
                }else if(i+1 != nums.size() && nums[i+1] != nums[i]+1){
                    result = max(result, currCount);
                    currCount = 1;
                }
            result = max(result, currCount);
        }
        return result;
    }