#include <bits/stdc++.h>
using namespace std;

void DNA(int N,string str){
    for(int i=0;i<N;i+=2){
        if(str[i]=='0')
            if(str[i+1]=='0')
                cout<<"A";
            else
                cout<<"T";
        else
           if(str[i+1]=='0')
                cout<<"C";
           else
                cout<<"G";
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        DNA(n,s);
        cout<<endl;
        // your code goes here
    }

}
