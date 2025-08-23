class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, float> m;
        for(size_t i = 0; i < position.size();i++){
            m[-position[i]] = (double)(target-position[i])/speed[i];
        }
        int result = 0;
        double currSlowest = 0;
        for(auto it : m){
            if(it.second > currSlowest){
                currSlowest = it.second;
                result++;
            }
        }
        return result;
    }
};