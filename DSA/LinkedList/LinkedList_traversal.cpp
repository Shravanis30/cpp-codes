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
    cout << "Your linkedlist is as follows:  " << endl;

    while(p != NULL)
    {
        cout << p->info*2 << endl;
        p = p->link;
    }

return 0;
}