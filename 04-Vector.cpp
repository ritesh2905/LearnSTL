#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v)
{
	cout<<endl;
	for(int i=0;i<v.size();i++) //size used to find the size of vector
	{
		//cout<<v[i]<<"->";
		cout<<v.at(i)<<"->";
	}
}

int main()
{
	//defining vector
	vector<int> v;

	int n,i,k;
	cout<<"Enter limit: ";
	cin>>n;

	//inserting values in vector
	for(i=0; i<n; i++)
	{
		cin>>k;
		v.push_back(k); //used to enter values at back
	}
	print(v);

	v.clear(); //removing all elements from vector 
	if(v.empty()) // checking if the vector is empty or not
	{
		cout<<"\nElements from vector has been removed!!!";
	}
	cout<<endl;

	return 0;
}