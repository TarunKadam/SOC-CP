#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int i=0,j=0,cnt=0;
        while(i<n && j<n){
            if(a[i]==b[j]){
                cnt++;
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else
            j++;
        }
        cout<<cnt<<endl;
}
}
