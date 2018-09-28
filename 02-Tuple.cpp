#include<iostream>
#include<tuple>
using namespace std;


int main()
{
	//declaring tuple
	tuple<int,int,int> t1;
	tuple<int,string,int> t2;

	//adding values to tuple
	t1 = make_tuple(9,2,11);
	t2 = make_tuple(2," is for ",9);

	//printing tuple
	cout<<get<0>(t1)<<"\t"<<get<1>(t1)<<"\t"<<get<2>(t1)<<"\n";

	int a,b;
	string s;

	//using tie
	tie(a,s,b) = t2;

	//printing
	cout<<a<<s<<b<<endl;

	return 0;
}
