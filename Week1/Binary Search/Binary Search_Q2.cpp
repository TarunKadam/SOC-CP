#include <bits/stdc++.h>
using namespace std;

int MaxHeight(long long int n){
    long long int mid=0;
    long long int sum=0;
    long long int left=1;
    long long int right=45000;
vector<int> triangle;
    for(int i=1;i<45000;i++){
        triangle.push_back(i*(i+1)/2);
    }

    while(left<=right){
        mid=left+(right-left)/2;
        sum=triangle[i];
        if(sum==n)
        return mid;
        else if(sum<n)
        left=mid+1;
        else
        right=mid-1;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int N;
	    cin>>N;
	    cout<<MaxHeight(N);
	}

}
