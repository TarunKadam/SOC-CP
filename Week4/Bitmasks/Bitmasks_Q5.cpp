#include <bits/stdc++.h>
using namespace std;

int minSum(int n,vector<int> a){
    int result=0;
    for(int i=0;i<n;i++){
        result^=a[i];
    }
    return result;
}

int main() {
    int t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int num;
        for(int i=0;i<n;i++){
            cin>>num;
            arr.push_back(num);
        }
        cout<<minSum(n,arr)<<endl;
    }
}
