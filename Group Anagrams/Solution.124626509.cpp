class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        //unordered_set <string> strset;
        map <string,int> strmap;
        string temp,temp2;
        int j=0,k=0;
        for(int i=0; i<strs.size();i++)
        {
            temp=strs[i];
            sort(temp.begin(),temp.end());
            if(strmap.count(temp)==0)
                {
                strmap.insert(pair <string,int>(temp,j));
                result.push_back(vector<string>());
                result[j].push_back(strs[i]);
                j++;
                }
                else{
                    k=strmap.find(temp)->second;
                    result[k].push_back(strs[i]);
                }    
                 
        }
        return result;
    }
};