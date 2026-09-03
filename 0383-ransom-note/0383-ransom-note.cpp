class Solution {
public:
    bool canConstruct(string ransomNote, string m) {
        int s=ransomNote.size();
        int c=0;
        unordered_map<char,int> mp;
        for(auto ch : ransomNote)mp[ch]++;
        for(int i=0;i<m.size();i++){
             if(mp.find(m[i])!=mp.end()){
                c++;
                mp[m[i]]--;
                if(mp[m[i]]==0)mp.erase(m[i]);
             }
        }
        if(c==s)return true;
        return false;
    }
};