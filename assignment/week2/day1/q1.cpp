class Solution {
public:
    bool isAnagram(string s, string t) {
         //approach one is simply osrting approach in which we simply sort both the string and compare the two.
        vector<int> cnt(26,0);
        for(char & ch: s){
            cnt[ch -'a']++;
        }
        for(char &ch : t){
            cnt[ch -'a']--;
        }
        for(int i = 0;i<cnt.size();i++){
            if(cnt[i] != 0){
                return false;
            }
         
        }
           return true;
    }
};