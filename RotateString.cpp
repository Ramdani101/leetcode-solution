bool rotateString(string s, string goal) {
        bool result = false;
        for(int i = 0 ; i < s.length(); i++){
            rotate(s.begin(), s.begin()+1, s.end());
            if(s == goal){
                result = true;
                break;
            }
        }
        return result;
    }