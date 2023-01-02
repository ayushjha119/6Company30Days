class Solution {
public:
    int evalRPN(vector<string>& token) {
        
        stack<int> st;
        
       int i=2;
       if(token.size()<2)
           return stoi(token[0]);
        else{
            st.push(stoi(token[0]));
            st.push(stoi(token[1]));
            while(i<token.size()){
            if(token[i]=="+" || token[i]=="-" || token[i]=="*" || token[i]=="/" || token[i]=="*"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(token[i]=="+"){
                    int z = y+x;
                    st.push(z);
                    i++;
                }else if(token[i]=="-"){
                    int z = y-x;
                    st.push(z);
                    i++;
                }
                else if(token[i]=="*"){
                    int z = y*x;
                    st.push(z);
                    i++;
                }
                else {
                    int z = y/x;
                    st.push(z);
                    i++;
                }
            }else{
                st.push(stoi(token[i]));
                i++;
            }
                
            }
            return st.top();
        }
        
        
    }
};