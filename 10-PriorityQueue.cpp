#include<iostream>
#include<queue>
using namespace std;

//declaring priority queue 
priority_queue<int> pq;

//function to print current queue
void print()
{
    if(pq.empty()) //checking for empty queue
    {
        cout<<"\nStack is empty!!!";
        return;
    }    
    else
    {
        priority_queue<int> k; //declaring a new queue to store current queue
        k = pq; //assining value to new queue
        cout<<"\nThe Queue is:\n";
        while(!k.empty())  //loop for printing the queue while poping greatest element from queue
        {
            cout<<"\t"<<k.top();
            k.pop();
        }
    }
}

void poping()
{
    if(pq.empty()) //checking for empty queue
    {
        cout<<"\nQueue is empty nothing to pop!!!";
        return;
    }
    else 
    {
        pq.pop();
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
        cout<<"\nEnter a choice:\n1.Push\n2.Pop\n3.View top\n4.View Queue\nChoice: ";
        cin>>n;

        switch(n)
        {
            case 1: int element;
                    cout<<"\nEnter a element to push: ";
                    cin>>element;
                    pq.push(element);
                    print();
                    break;

            case 2: poping();
                    break;
            
            case 3: if(pq.empty()) //checking for empty queue
                        cout<<"\nStack is empty!!!";
                    else
                        cout<<"\nThe top is: "<<pq.top(); //top will return the greatest value in priority_queue
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