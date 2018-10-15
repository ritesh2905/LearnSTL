#include<iostream>
#include<map>
using namespace std;

//main function
int main()
{
    map<int,string> m; //declaring a map with int,string type
    int n,i,k;
    string s;

    cout <<"\nEnter a limit: ";
    cin>>n;

    //taking input from user in map
    for(i=0;i<n;i++)
    {
        cout<<"Enter no. for "<<i+1<<" map term: ";
        cin>>k;
        cout<<"Enter string for "<<i+1<<" map term: ";
        cin>>s;

        m[k] = s; //inserting values in map: insert key k with value s
    }

    //printing values of map
    cout<<"\nValuse in map are: \n";
    for(auto it :m)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }

    return 0;
}