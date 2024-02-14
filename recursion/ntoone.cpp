#include <bits/stdc++.h>
using namespace std;
int ctr =1;

void test(int times){
	if(times<ctr){
		return;
	}
	else{
		cout<<times<<endl;
		test(--times);
	}
	return ;
}

int main(){
	cout<<"enter no: \n";

	int x;cin>>x;

	test(x);


	return 0;
}