#include<bits/stdc++.h>
using namespace std;
bool PowerofFour(int num){
	if(num<0)
	return false;
	if(__builtin_popcount(num)==1){
		int k = floor(log2(num)+1);
		if(k&1) return true;
	}
	return false;
}
int main()
{
	cout<<PowerofFour(64);
}
