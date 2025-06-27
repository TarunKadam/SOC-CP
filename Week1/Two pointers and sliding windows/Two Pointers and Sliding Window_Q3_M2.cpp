#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        int s=0,e=1,diff=0,flag=0;
        while(e<n){
            diff=a[e]-a[s];
            if(diff==b){
                cout<<"1"<<endl;
                flag=1;
                break;
            }
            else if(diff>b){
                s++;
            }
            else
            e++;
        }
        if(flag==0)
        cout<<"0"<<endl;
    }
}
        
