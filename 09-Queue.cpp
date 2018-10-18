#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

//function to print current queue
void print()
{
    if(q.empty()) //checking for empty list
    {
        cout<<"\nStack is empty!!!";
        return;
    }    
    else
    {
        queue<int> k; //declaring a new stack to store current queue
        k = q; //assining value to new queue
        cout<<"\nThe Queue is:\n";
        while(!k.empty())  //loop for printing the queue while poping elements from queue
        {
            cout<<"\t"<<k.front();
            k.pop();
        }
    }
}

void poping()
{
    if(q.empty()) //checking for empty queue
    {
        cout<<"\nQueue is empty nothing to pop!!!";
        return;
    }
    else 
    {
        q.pop();
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
        cout<<"\nEnter a choice:\n1.Push\n2.Pop\n3.View front and back\n4.View Queue\nChoice: ";
        cin>>n;

        switch(n)
        {
            case 1: int element;
                    cout<<"\nEnter a element to push: ";
                    cin>>element;
                    q.push(element);
                    print();
                    break;

            case 2: poping();
                    break;
            
            case 3: if(q.empty()) //checking for empty queue
                        cout<<"\nStack is empty!!!";
                    else
                        cout<<"\nThe front is: "<<q.front()<<" and the back is: "<<q.back(); //front and back will give front and back element of the stack
                    break;
            
            case 4: print();
                    break;
            
            default: cout<<"\nWrong choice!!!";
        }

        cout<<"\nTo continue press 1 ......................... ";
        cin>>k;

    }while(k==1);

    return 0;
}