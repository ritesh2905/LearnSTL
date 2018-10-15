#include<iostream>
#include<list>
using namespace std;

//declaring int list
list<int> l;

//function for printing whole list
void print()
{
    if(l.empty())
    {
        cout<<"\nList is empty!!!";
    }
    else
    {
        cout<<endl;
        for(auto v : l)
        {
            cout<<v<<"->";
        }
    }
}

//function for insertion at begning of the list
void insertAtBegning(int n)
{
    l.push_front(n); //push_front will push the element at the begning of the list
    
    print();
}

//functin for insertion at any point in the list
void insertAtMiddle(int n)
{
    int pos; 

    //taking position as input to enter element at a desired place in list
    cout<<"\nEnter position to insert number: ";
    cin>>pos;

    if(l.size() < pos) //checking that user entered the accatable position
    {
        cout<<"\nPosition entered the size of list!!!";
        return;
    }
    else
    {
        list<int>::iterator it = l.begin(); //declaring it as iterator for iterating in the list
    
        advance(it,pos-1); //advance is used to iterator point to the desired pointer
    
        l.insert(it,n); //using insert function to insert value in the list
    }
    
    
    print();
}

//insertion at end of the list
void insertAtEnd(int n)
{
    l.push_back(n); //using push_back to push the element at the back of the list 
    
    print();
}

//function to handle different case of insertion methods 
void insertion()
{
    int n,k;

    //giving different choice to the user for inserting values in the list
    cout<<"Enter a choice in INSERTION :\n1.Insertion at begning\n2.Insertion in middle\n3.Insertion at end\nChoice: ";
    cin>>n;

    cout<<"\nEnter number to insert: ";
    cin>>k;

    //different cases of insertion handled by different functions
    switch(n)
    {
        case 1: insertAtBegning(k);
                break;
        case 2: insertAtMiddle(k);
                break;
        case 3: insertAtEnd(k);
                break;
        default: cout<<"\nWrong Choice!!!";
    }
}

//function for deletion from begning of the list
void deleteAtBegning()
{

}

//function for deletion from the middle of the list
void deleteAtMiddle()
{

}

//function for deletion from the end of the list
void deleteAtEnd()
{

}

//function to handle different case  of the deletion method
void deletion()
{
    int n;
    cout<<"Enter a choice in DELETION :\n1.Deletion at begning\n2.Deletion in middle\n3.Deletion at end\nChoice: ";
    cin>>n;

    switch(n)
    {
        case 1: deleteAtBegning();
                break;
        case 2: deleteAtMiddle();
                break;
        case 3: deleteAtEnd();
                break;
        default: cout<<"\nWrong Choice!!!";
    }

}

int main()
{
    int n,k=0;
    do
    {
        cout<<"\nEnter a choice:\n1.Insertion\n2.Deletion\n3.Print\nChoice: ";
        cin>>n;

        switch(n)
        {
            case 1: insertion();
                    break;
            case 2: deletion();
                    break;
            case 3: print();
                    break;
            default: cout<<"\nWrong Choice!!!";
        }

        cout<<"\nEnter 1 to continue ......";
        cin>>k;

    }while(k==1);

    return 0;
}
