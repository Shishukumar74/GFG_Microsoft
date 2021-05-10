#include<bits/stdc++.h>
using namespace std;
int Lucky_number(int n){
	static int counter = 2;
	int next_position = n;
	if(counter>n)
	return 1;
	if(n%counter==0)
	return 0;
	next_position = next_position - (next_position/counter);
	counter++;
	return Lucky_number(next_position);
}
int main(){
	if(Lucky_number(1))
	cout<<"Lucky_number";
	else
	cout<<"Not Lucky_number";
	
}
