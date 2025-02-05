class Solution {
public:
    bool isPalindrome(string s) {
      int first=0;
      int last=s.size()-1;

      while(first<=last){
        if( !isalnum(s[first])){
            first++;
        }else if(!isalnum(s[last])){
            last--;
        } else {
            int h1 =    tolower(s[first]);
            int h2 =    tolower(s[last]);
        if(h1!=h2){
            return false;
        }
        first++;
            last--;
        }
      }
    return true;
    }
};