#include <bits/stdc++.h>
#include <map>  
#include <vector>
#include <algorithm>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequency;
        vector<int> result;
        for(int num : nums) {
            frequency[num]++;
        }
        vector<pair<int, int>> freqVec(frequency.begin(), frequency.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k && i < freqVec.size(); ++i) {
            result.push_back(freqVec[i].first);
        }
        return result;
    }