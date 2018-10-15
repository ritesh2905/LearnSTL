#include<iostream>
#include<stack>
using namespace std;

stack<int> s; //declaring stack with int type

void print()
{
    if(s.empty())
    {
        cout<<"\nStack is empty!!!";
        return;
    }    
    else
    {
        stack<int> k;
        k = s;
        cout<<"\nThe stack is:\n";
        while(!k.empty())
        {
            cout<<"\t"<<k.top();
            k.pop();
        }
    }
}

void poping()
{
    if(s.empty())
    {
        cout<<"\nStack is empty nothing to pop!!!";
        return;
    }
    else
    {
        s.pop();
        print();
    }

}

//main function
int main()
{
   
    int k=0;

    do
    {
        int n;
        cout<<"\nEnter a choice:\n1.Push\n2.Pop\n3.View top\nChoice: ";
        cin>>n;

        switch(n)
        {
            case 1: int element;
                    cout<<"\nEnter a element to push: ";
                    cin>>element;
                    s.push(element);
                    print();
                    break;

            case 2: poping();
                    break;
            
            case 3: if(s.empty())
                        cout<<"\nStack is empty!!!";
                    else
                        cout<<"\nThe top is: "<<s.top();
                    break;
            
            default: cout<<"\nWrong choice!!!";
        }

        cout<<"\nTo continue press 1 ......................... ";
        cin>>k;

    }while(k==1);

    return 0;
}