class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> st;
        for(int i=0;i<o.size();i++){
            if(o[i]=="C"){
                st.pop();
            }
            else if(o[i]=="D"){
                int a =st.top();
                st.push(2*a);
            }
            else if(o[i]=="+"){
int a = st.top();
st.pop();

int b = st.top();

st.push(a);
st.push(a + b);               
            }
            else{
                int a=stoi(o[i]);
                st.push(a);
            }
        }
        int ans =0;
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
};