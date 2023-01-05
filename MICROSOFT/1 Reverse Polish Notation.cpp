/**********************Reverse Polish Notation*******************************************/

/*Intuition*/

/* To tackle such problem we generally need to find the two previous operands of an operator
   we will insert all operands in a stack and as soon as we encounter an operator in the given stirng
   we will take the top two operands out of the stack, perform the operation on them and push them 
   back in the stack
*/



class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i=0;i<tokens.size();i++){
            
            string it=tokens[i];
            if(it=="+" || it=="-" || it=="*" || it=="/" ){
                
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                
                if(it=="+"){
                    st.push(a+b);
                }
                if(it=="-"){
                    st.push(b-a);
                }
                if(it=="*"){
                    st.push(a*b);
                }
                if(it=="/"){
                    st.push(b/a);
                }
                
            }
            else{
                int number=stoi(it);
                st.push(number);
            }
            
        }
        return st.top();
    }
};
