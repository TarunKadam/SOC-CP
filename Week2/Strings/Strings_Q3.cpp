#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt_o=0,flag=0,sum=0;
        
        for(int i=0;i<n;i++){
            if(flag==1){
                sum+=cnt_o;
                cnt_o=0;
                flag=0;
            }
            if(s[i]=='('){
                cnt_o++;  
            }
            else{
                if((cnt_o-1)>=0){
                    cnt_o--;
                }
                else{
                    flag=1;
                }
            }
        }
        cout<<sum+cnt_o<<endl;
        cnt_o=0;
        sum=0;
    }
}
