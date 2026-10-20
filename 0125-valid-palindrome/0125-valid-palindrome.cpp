class Solution {
public:
    bool isPalindrome(string s) {
        string :: iterator i = s.begin();
        string :: iterator j = s.end()-1;
         while(i<j){
            if(!isalnum(*i)){
                i++; 
             continue;  
            }
            if(!isalnum(*j)){
                j--;
                continue;
            }
            if(tolower(*i)!=tolower(*j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};