#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void print()
{
	if(v.empty())
	{
		cout<<"\nVector is empty nothing to print!!!";
	}
	else
	{
		for(int i=0;i<v.size();i++)
		{
			cout<<v.at(i)<<"-->";
		}
	}
}

void insertion()
{
	int n,k,p;
	cout<<"1.Insertion at begning\n2.Insertion at end\n3.Insertion in between\nChoice : ";
	cin>>n;
	cout<<"\nEnter the value to insert : ";
	cin>>k;
	if(v.empty())
	{
		v.push_back(k);
	}
	else
	{
		switch(n)
		{
			case 1: v.insert(v.begin(), k);
					break;

			case 2: v.push_back(k);
					break;

			case 3: cout<<"\nEnter a position to be inserted : ";
					cin>>p;
					v.insert(v.begin()+(p-1),k);

			default: cout<<"\nWrong choice!!!";
		}	
	}

	print();
	
}

void del()
{
	int n,p;
	cout<<"\n1.Deletion from back\n2.Deletion from front\n3.Deletion from between\nChoice : ";
	cin>>n;
	if(v.empty())
	{
		cout<<"\nVector is empty!!!";
	}
	else
	{
		switch(n)
		{
			case 1: v.pop_back();
					break;

			case 2: v.erase(v.begin());
					break;

			case 3: cout<<"\nEnter the position : ";
					cin>>p;
					v.erase(v.begin()+(p-1));
					break;

			default: cout<<"\nWrong choice!!!";
		}
	}

	print();

}

int main()
{
	int n,k=0;
	do
	{
		cout<<"Enter a choice:\n1.Insertion\n2.Delete\n3.Print\nChoice : ";
		cin>>n;
		switch(n)
		{
			case 1: insertion();
					break;
			case 2: del();
					break;
			case 3: print();
					break;
			default: cout<<"\nWrong choice please choose correctly!!!";
		}
		cout<<"\nTo continue press 1........";
		cin>>k;
	}while(k==1);
	return 0;
}