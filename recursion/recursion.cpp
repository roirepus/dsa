#include <bits/stdc++.h>
using namespace std;
int ctr =0;

void test(){
	if(ctr==2){
		return;
	}
	else{
		cout<<"1\n";
		ctr++;
		test();
	}
	return ;
}

int main(){

	test();

	return 0;
}