class Solution {
public:
    int repeatedStringMatch(string &A, string &B) {
 int n=A.size(),m=B.size();
    string C;
    if(n==0 || m==0) return -1;
    if(m<n)
    {
        size_t found=A.find(B);
        if(found != string::npos) return 1;
        C=A+A;
        found=C.find(B);
        if(found != string::npos) return 2;
        else return -1; 
    }
    
    int rat=ceil(double(m)/n);
    C=A;
    for(int i=2; i<=rat; ++i)
    {
        C+=A;
    }
    for(int i=rat; i<=rat+2; ++i)
    {
        size_t found = C.find(B);
        if(found != string::npos) return i;
        C+=A;
    }
    
    return -1;
    }
};