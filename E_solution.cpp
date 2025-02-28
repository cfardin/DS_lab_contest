#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr2;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> k;

    for(int i=0; i<=n-k; i++){
        int m = arr[i];
        for(int j=1; j<k; j++){
            if(arr[i+j]>m) m = arr[i+j];
        }
        arr2.push_back(m);
    }

    for(int i: arr2){
        cout << i << " ";
    }
}
