#include<iostream>
#include<queue>
using namespace std;

//declaring deque
deque<int> dq;

//function to print deque
void print()
{
    if(dq.empty())
    {
        cout<<"\nNothing to show as deque is empty!!!\n";
        return;
    }
    else
    {
        deque<int> k;
        k = dq;
        cout<<"\nThe deque is: ";
        while(!k.empty())
        {
            cout<<k.front()<<" ";
            k.pop_front();
        }   
    }
}

//function for pushing values
void pushing()
{
    int n,value;
    cout<<"\nSelect a location to push\n1.Front\n2.Back\n3.Desired location\nChoice: ";
    cin>>n;
    cout<<"Enter value to push: ";
    cin>>value;

    switch(n)
    {
        case 1: dq.push_front(value);
                print();
                break;
        
        case 2: dq.push_back(value);
                print();
                break;
        
        case 3: {
                    int pos;
                    deque<int>:: iterator i = dq.begin();
                    cout<<"\nEnter position to insert: ";
                    cin>>pos;
                    advance(i,pos-1);
                    dq.insert(i,value);
                    print();
                    break;
                }
        
        default: cout<<"\nWrong Choice!!!";
    }
}

//function for poping values
void poping()
{
    if(dq.empty())
    {
        cout<<"\nDeque is empty, nothing to pop!!!";
        return;
    }
    else
    {
        int n;
        cout<<"\nSelect a location to pull\n1.Front\n2.Back\nChoice: ";
        cin>>n;
        if(n==1)
        {
            dq.pop_front();
            print();
        }
        else if(n==2)
        {
            dq.pop_back();
            print();
        }
        else
        {
            cout<<"\nWrong Choice!!!";
        }
    }

}

//main function
int main()
{
    int k=0;
    do
    {
        int n;
        cout<<"\nEnter a choice:\n1.Push\n2.Pop\n3.View deque\nChoice: ";
        cin>>n;

        switch(n)
        {
            case 1: pushing();
                    break;

            case 2: poping();
                    break;

            case 3: print();
                    break;

            default: cout<<"\nWrong Choice!!!";

        }
        cout<<"\nEnter 1 to continue ............................. ";
        cin>>k;

    }while(k==1);
    return 0;
}
