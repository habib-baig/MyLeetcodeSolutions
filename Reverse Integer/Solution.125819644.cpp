class Solution {
public:
    int reverse(int x) {
        string s;
        int i=0,flag=0,temp,len;
       
        s=to_string(x);
        cout << "stirng 1 : "<< s << endl;
       
       cout << len << endl;
        if(s[0]=='-')
        {    flag=1;
        s=s.substr(1);
        } 
        len=s.size();
        cout << "stirng 1 : "<< s << endl;
        while(i<len/2)
        {
          temp=s[i];
          s[i]=s[len-1-i];
          s[len-1-i]=temp;
          i++;   
    	}
        try {
            return flag ? 0-stoi(s): stoi(s);
        }
        catch (...)
        {return 0;}
    }
};