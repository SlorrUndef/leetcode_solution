// with 2 stacks time complexity will be better
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') {
                st.push(s[i]);
            } // push "number[word"
            else{
                string curr_str = "";
                
                while(st.top() != '['){
                    curr_str = st.top() + curr_str ; // curr_str = word;
                    st.pop();
                }
              
                st.pop();   // poping '['
                string number = "";
                
                // for calculating number
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int k_time = stoi(number);    // k_time = number
                
                while(k_time--){
                    for(int p = 0; p < curr_str.size() ; p++)
                        st.push(curr_str[p]); //push word k times
                }
            }
        }
        
        s = ""; 
        while(!st.empty()){ //convers stack to string
            s = st.top() + s;
            st.pop();
        }
        return s;
        
    }
};
