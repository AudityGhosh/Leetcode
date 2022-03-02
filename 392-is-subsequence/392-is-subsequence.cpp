class Solution {
public:
    bool sub(string a, string b,int m,int n){
        if(m==0) return true; 
        if(n==0) return false; 
        if(a[m-1]==b[n-1]) return sub(a,b,m-1,n-1); 
        return sub(a,b,m, n-1);
    }
    bool isSubsequence(string s, string t) { 
        return sub(s,t,s.size(),t.size());
        
    }
    /*A     U       D       I       T       Y*/
};