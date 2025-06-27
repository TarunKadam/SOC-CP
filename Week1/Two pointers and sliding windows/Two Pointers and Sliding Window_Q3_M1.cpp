#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b,sum=0,diff=0,flag=0;
        cin>>n>>b;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            sum=a[i]+b;
            diff=a[i]-b;
            for(int j=0;j<n;j++){
                if(a[j]==sum || a[j]==diff){
                    flag=1;
                    cout<<"1"<<endl;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
        cout<<"0"<<endl;
    }
}
        
