class Solution {
public:
    void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
    void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}
    string multiply(string num1, string num2) {
        int len_of_product = num1.size()+num2.size();
        int i,j,k,m,n,t;
        string s1="",s2="";
        for(i=0;i<len_of_product-num1.size();i++)
        {
            s1+="0";
        }
        s1+=num1;
        
        for(i=0;i<len_of_product-num2.size();i++)
        {
            s2+="0";
        }
        s2+=num2;
        
        
        cout<<s1<<" "<<s2<<endl;
        
        string ans="";
        int carry=0;
        vector<string>pros;
        
        for(i=s2.size()-1;i>=0;i--)
        {
            string temp="";
          for(j=s1.size()-1;j>=0;j--)
          {
              int product = (s1[j]-'0')*(s2[i]-'0');
              //cout<<product<<endl;
              if(carry!=0) product+=carry;
              if(product>9)
              {
                  carry=product/10;
              }
              else
                  carry=0;
              temp+=to_string(product%10);
              
              
          }
            
        
            
            //cout<<temp<<endl;
            rightrotate(temp,len_of_product-1-i);
           // cout<<temp<<endl;
            pros.push_back(temp);
            
            
            
        
            
        }
        //for(auto it:pros) cout<<it<<endl;
        
        carry=0;
        for(i=0;i<len_of_product;i++)
        {
          int sum=0;
            for(j=0;j<pros.size();j++)
            {
                sum+=(pros[j][i]-'0');
                
            }
            if(carry!=0) sum+=carry;
            if(sum>9)
            {
                carry=sum/10;
            }
            else
                carry=0;
            ans+=to_string(sum%10);
        }
        
        reverse(ans.begin(),ans.end());
        
        string s="";
        i=0;
        while(ans[i]=='0') i++;
        for(j=i;j<ans.size();j++) s+=ans[j];
        if(s.size()==0) s="0";
        return s;
        
    }
};