#include <bits/stdc++.h>
using namespace std;

int main(){

	string s = "abcaZeFaKepWWw";

	//hash array

	int hash[60]={0};
	for(int i =0;i<15;i++){
		hash[s[i]-65]++;
	}
	
	//fetch

	cout<<"enter number of char to fetch: \n";

	int x;	cin>>x;

	while (x--){
		cout<<"enter character: \n";
		char c;cin>>c;

		cout<<c<< " appears "<<hash[c-65]<<" times\n";

	}
	return 0;
}
