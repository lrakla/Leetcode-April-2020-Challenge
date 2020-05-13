class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(string s:strs){
            string s1 = s;
            sort(s1.begin(),s1.end());
            m[s1].push_back(s);
        }
        vector<vector<string>> v;
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
    }
};