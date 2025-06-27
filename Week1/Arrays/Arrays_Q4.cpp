#include <iostream>
using namespace std;

long long int MinMoves(long long int a[],long long int n){
    long long int moves=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])
        while(a[i]<a[i-1]){
            a[i]++;
            moves++;
        }
    }
    return moves;
}

int main() {
	long long int N;
	cin>>N;
	long long int A[N];
	for(int i=0;i<N;i++){
	    cin>>A[i];
	}
	cout<<MinMoves(A,N);
    return 0;
}
