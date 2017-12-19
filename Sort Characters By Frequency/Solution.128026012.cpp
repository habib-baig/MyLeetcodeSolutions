class Solution {
public:
    
    string frequencySort(string s) {
        map <char,int> mymap;
        vector<pair<char,int>> myvec;
        string s1=s;
        for(int i=0; i<s.size(); i++)
        {
        mymap[s[i]]++;
        }
        for(auto p=mymap.begin(); p!=mymap.end(); p++)
        {
            myvec.push_back(*p);
        }
        sort(myvec.begin(),myvec.end(),[=](pair<char,int> a, pair<char,int>  b){
        return a.second > b.second;
        }
            );
        int i=0,temp;
        
        for(auto p=myvec.begin(); p!=myvec.end(); p++)
        {
            temp=p->second;
            while(temp--){
                s1[i]=p->first;
                i++;
            }
        }
    return s1;
    }
    
};