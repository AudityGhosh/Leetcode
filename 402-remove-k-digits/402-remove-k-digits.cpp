class Solution {
public:
    string removeKdigits(string num, int k) {
        int i,j,m,n,t;
        n=num.size();
        if(n==k) return "0";
        
        stack<char>str;
        
        for(i=0;i<n;i++)
        {
            while(k>0 && str.size()>0 && str.top()>num[i])
            {
                k--;
                str.pop();
            }
            str.push(num[i]);
        }
        
        while(k>0)
        {
            str.pop();
            k--;
        }
        
        string temp="";
        while(str.size())
        {
            temp+=str.top();
            str.pop();
        }
        
        reverse(temp.begin(),temp.end());
        
        while(temp.size()>1 && temp[0]=='0')
        {
            temp.erase(0,1);
        }
        
        return temp;
    
    }
};