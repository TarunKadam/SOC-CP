#include <bits/stdc++.h>
using namespace std;

int XOR(int n, vector<int> a){
    int xornum=0;
    for(int i=0;i<n;i++){
        xornum^=a[i];
    }
    for(int i=0;i<n;i++){
        if(!(a[i]^xornum)){
            return a[i];
        }
    }
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
        cout<<XOR(n,arr);
        
    }


}
