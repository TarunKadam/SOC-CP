#include <bits/stdc++.h>
using namespace std;

int MinNoOfBox(int a[],int n){
    int max=0;
    for(int j=0;j<n;j++){
        if(max<a[j])
        max=a[j];
    }
    return max;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        cout<<MinNoOfBox(A,N)<<endl;
    }
    return 0;
}
