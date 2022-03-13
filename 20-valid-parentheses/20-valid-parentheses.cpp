class Solution {
public:
    bool isValid(string s) {
        int i,j,k=0,m,n;
        stack<char>Stack;

    for(i=0;i<s.size();i++)
    {
       if(s[i]=='(' || s[i]=='['||s[i]=='{')
            Stack.push(s[i]);
       else
       {
            if(((!Stack.empty())&&(Stack.top()=='('))&&(s[i]==')'))
                {
                    Stack.pop();
                }
                else if(((!Stack.empty())&&(Stack.top()=='['))&&(s[i]==']'))
                {
                    Stack.pop();
                }
            else if(((!Stack.empty())&&(Stack.top()=='{'))&&(s[i]=='}'))
                {
                    Stack.pop();
                }
                else
                    return false;
       }
    }
    if(Stack.size()==0)
        return true;
    else
        return false;
        
    }
};