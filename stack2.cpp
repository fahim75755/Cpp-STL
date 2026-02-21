class Solution {
public:
    string removeDuplicates(string s) {
        
//probably set up deya nai tai ekhane prob krtese
stack<char> st;

for(auto u:s){
    if(!st.empty()){
    if(st.top()!=u){
        st.push(u);

    }  
    else st.pop();
}


else st.push(u);
    }


string res;
while(!st.empty()){
 res += st.top();
    st.pop();
}
reverse(res.begin(),res.end());

return res;

    }
};