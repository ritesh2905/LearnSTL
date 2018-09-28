#include<iostream>
#include<tuple>
using namespace std;


int main()
{
	//declaring tuple
	tuple<int,int,int> t1;

	//adding values to tuple
	t1 = make_tuple(9,2,11);

	//printing tuple
	cout<<t1.first<<t1.second<<t1.third;

	return 0;
}
