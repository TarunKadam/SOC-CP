#include <bits/stdc++.h>
using namespace std;

int MissingDoll(int a[],int n){
    int element=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            i++;
        }
        else{
            element=a[i];
            break;
        }
    }
    return element;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        cout<<MissingDoll(A,N)<<endl;
    }
}
