#include <bits/stdc++.h>
using namespace std;

bool isDominantElement(vector<int>a,int n){
    if(n==0)
    return false;
    if(n==1)
    return true;
    
    sort(a.begin(), a.end());
    vector<int> freq;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            freq.push_back(cnt);
            cnt=1;
        } 
        else
        cnt++;
    }
    
    freq.push_back(cnt);
    sort(freq.begin(),freq.end());
    int len=freq.size();
    if(freq[len-1]==freq[len-2]){
        return false;
    }
    else
    return true;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        cout<<((isDominantElement(A,N))?"YES":"NO")<<endl;
    }
    return 0;
    
    
}
