#include<iostream>
#define Node struct node
using namespace std;

Node{
    int data;
    Node *link;
};

Node *root = NULL;

void insert(int data)
{
    Node *tmp;
    tmp = new Node;
    
    tmp->data = data;
    tmp->link = NULL;
    
    if(root==NULL)
    root = tmp;
    
    else
    {
        Node *p;
        p = root;
        while(p->link!=NULL)
        p = p->link;
        
        p->link = tmp;
    }

}

void addAtFirst(int data)
{
    Node *tmp;
    tmp = new Node;
    
    tmp->data = data;
    tmp->link = NULL;
    
    if(root==NULL)
    root = tmp;
    
    else
    {
        Node *p;
        p = root;
        root = tmp;
        tmp->link = p;
    
    }
}

        void deleteAtFirst()
        {
          
          
            node *p;
            p = root;
            root=root->link;
            p->link = NULL;
            
            delete p;            
         
        }
        
         void deleteAtLast()
        {
          
          
            node *p;
            p = root;
            root=root->link;
            
            
            delete p;            
         }

void display()
{
    Node *tmp;
    tmp = root;
    
    if(root==NULL)
    cout << "List is empty!" << endl;
    
    else
    {
    while(tmp!=NULL)
    {
        cout << "Data: " << tmp->data << "\t Link: " << tmp->link << "\t Self: " << tmp << endl;
        tmp = tmp->link;
    }
    }
}

int main()
{
    int data;
    
    cout << "root = " << root << endl << endl;
    
    for(int i=1;i<=5;i++)
    {
        cout << "Enter data: ";
        cin >> data;
        addAtFirst(data);
    }
    
    cout << "root = " << root << endl << endl;
    
    display();
    deleteAtFirst();
    
    cout << endl << endl;
    
    display();
     
    
}
