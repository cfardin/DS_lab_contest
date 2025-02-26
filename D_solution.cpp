#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    stack<int> s;
    while(t--){
        int n;
        scanf("%d", &n);
        if(n==1){
            scanf("%d", &n);
            s.push(n);
        }else if(n==2){
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            if(s.empty()) printf("Empty!\n");
            else printf("%d\n", s.top());
        }
    }
    return 0;
}
