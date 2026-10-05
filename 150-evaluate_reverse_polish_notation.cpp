class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        char op=' ';
        int num=0;
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
              if (tokens[i] != "+" &&
                tokens[i] != "-" &&
                tokens[i] != "*" &&
                tokens[i] != "/") {

                st.push(stoi(tokens[i]));
            }
            else
            {   if(tokens[i]=="+")
                {
                    int x=st.top();
                    st.pop();
                    st.top()+=x;
                }
               else if(tokens[i]=="-")
                {
                    int x=st.top();
                    st.pop();
                    st.top()-=x;
                }
                else if(tokens[i]=="*")
                {
                    int x=st.top();
                    st.pop();
                    st.top()*=x;
                }
                if(tokens[i]=="/")
                {
                    int x=st.top();
                    st.pop();
                    st.top()/=x;
                }
            }
        }
        return st.top();
    }
};