#include <bits/stdc++.h>
using namespace std;
int ctr =1;

void test(int times){
	if(ctr>times){
		return;
	}
	else{
		cout<<ctr<<endl;
		ctr++;
		test(times);
	}
	return ;
}

int main(){
	cout<<"enter no: \n";

	int x;cin>>x;

	test(x);


	return 0;
}