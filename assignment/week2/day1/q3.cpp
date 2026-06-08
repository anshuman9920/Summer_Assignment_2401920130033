class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>chfeq;
        for(char ch:magazine){
            chfeq[ch]++;
        }
        for(char ch:ransomNote){
            if(chfeq[ch]>0){
                chfeq[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};