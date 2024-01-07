class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char a=s[i];
            if(a == '(' || a== '[' || a=='{'){
                st.push(a);
            }
            else{
                if(!st.empty()){
                    char b=st.top();
                    if(a == '(' && b==')'){
                        st.pop();
                    }
                    if(a == '[' && b==']'){
                        st.pop();
                    }
                    if(a == '{' && b=='}'){
                        st.pop();
                    }
                    else{
                        return false;
                    }


                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};