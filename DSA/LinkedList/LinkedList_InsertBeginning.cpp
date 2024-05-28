#include <bits/stdc++.h>
using namespace std;
struct node 
{
    int info;
    node* link;
} *start = NULL;
int main()
{
    int size, data;
    cout << "Enter the size of linkedlist : " << endl;
    cin >> size;

    cout << "Enter the elements in the Linkedlist :" << endl;
    for(int i = 0; i < size; i++) 
    {
        cin >> data;
        node* temp = new node;
        temp->info = data;
        temp-> link = NULL;

        if(start == NULL)
        {
            start = temp;
        }
        else 
        {
            node* ptr;
            ptr = start;
            while(ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }

    node* p;
    p = start;
    cout << "Your linkedlist before insertion is as follows:  " << endl;

    while(p != NULL)
    {
        cout << p->info << endl;
        p = p->link;
    }

    int item;
    cout << "Enter the value of item : ";
    cin >> item;

    node *insert = new node;
    insert->info = item;
    insert->link = start;
    start = insert;

    node* i;
    i = start;
    cout << "Your linkedlist after insertion is as follows:  " << endl;

    while(i != NULL)
    {
        cout << i->info << endl;
        i = i->link;
    }
return 0;
}