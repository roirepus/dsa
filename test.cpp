#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;

	int a[n]={0},b[n]={0},c[n]={0};
	int ctr=0;

	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(a[i]==b[c[j]]){
				ctr++;
			}
		}
	}
	cout<<ctr;



	return 0;
}