#include<iostream>
using namespace std;

int main()
{
	//initialising pair
	pair<int,int> p1;
	pair<int,string> p2;
	
	//putting values in pair 
	p1 = make_pair(6,9);
	p2 = make_pair(1,"Ritz");
	
	//print the values
	cout<<p1.first<<"\t"<<p1.second<<"\n";
	cout<<p2.first<<"\t"<<p2.second<<"\n";
	
	//swaping values of pair
	swap(p1.first,p1.second);
	cout<<p1.first<<"\t"<<p1.second<<"\n";
	
	return 0;
}
