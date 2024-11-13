#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int data;
        node *link;

        node(int x)
        {
            data = x;
            link = NULL;
        }
};
void insert(node* &head,int x)
{
    node *temp = new node(x);
    
    if(head == NULL)
    {
        head = temp;
        return;
    }

    node* ptr = head;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void display(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node *head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);

    display(head);
    
    return 0;
}