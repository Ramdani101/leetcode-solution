bool containsDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size()==1){
            return false;
        }else{
            bool isDuplicate = false;
            sort(nums.begin(),nums.end());
            for(int i = 0; i < nums.size(); i++){
                if(i+1 != nums.size()){
                    if(nums.at(i) == nums.at(i+1)){
                        isDuplicate = true;
                        break;
                    }else{
                        isDuplicate = false;
                    }
                }else{
                    break;
                }
            }
            return isDuplicate;
        }
    }