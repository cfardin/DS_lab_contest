#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        stack<char> op;
        string post;
        for(int i=0; i<n; i++){
            if(isalpha(s[i])) post += s[i];
            else if(s[i] == '('){
                op.push(s[i]);
            }
            else if(s[i]==')'){
                while(op.top()!='('){
                    post += op.top();
                    op.pop();
                }
                op.pop();
            }
            else op.push(s[i]);
        }
        cout << post << endl;
    }

}
