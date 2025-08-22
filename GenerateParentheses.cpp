class Solution {
public:
    void mainRecursive(string currCouple, int l, int r, vector<string>& result){
        if(l == 0 && r == 0){
            result.push_back(currCouple);
        }else{
            if(l > 0){
                mainRecursive(currCouple + "(", l-1, r, result);
            }

            if(r > l){
                mainRecursive(currCouple + ")", l, r-1, result);
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        mainRecursive("", n, n, result);
        return result;
    }
};