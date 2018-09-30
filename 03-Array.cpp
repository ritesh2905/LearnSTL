#include <iostream>
#include <array>
using namespace std;

int main()
{
	//declaring array
	array<int,10> a;
	array<int, 10> b;
	a = {1,2,3,4,5,6,7,8,9,10};

	//printing
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	//using at
	for(int i=0;i<10;i++)
		cout<<a.at(i)<<" ";
	cout<<endl;

	// using front and back
	cout<<a.front()<<"\t"<<a.back()<<endl;

	//using fill
	b.fill(23);
	for(int i=0;i<10;i++)
		cout<<b.at(i)<<" ";
	cout<<endl;

	//using swap
	a.swap(b);

	cout<<"a: ";
	for(int i=0;i<10;i++)
		cout<<a.at(i)<<" ";
	cout<<endl;

	cout<<"b: ";
	for(int i=0;i<10;i++)
		cout<<b.at(i)<<" ";
	cout<<endl;


	return 0;
}