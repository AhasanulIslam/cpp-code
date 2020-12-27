#include <iostream>
#define node struct Node

using namespace std;

    node *root = NULL;
    
    
    node{
    int data;
    node *right;
    node *left;
    };
    
   void creat_node()
    {
    int data;
    cin >> data;

    node *temp;
    temp = new node;

    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    if(root == NULL) 
    {
    root = temp;
    }
    
    else
    {
        node *parent,*current;
        parent = root;
        current = root;

        while(current)
        {
            parent = current;
            if(temp->data > current->data)
            {
             current = current->right;
             
             }
             
            else 
            {
            current = current->left;
            }
        }
        if(temp->data>parent->data) parent->right = temp;
        else parent->left = temp;
     } 
 }
    
    void in_order(node *temp)
    {
    if(root==NULL)
    {
     cout << "Tree is null..." << endl;
     }
    else
    {
        if(temp->left)
        {
            in_order(temp->left);
            }

        cout << temp->data <<  "\n";

        if(temp->right)
            {
            in_order(temp->right);
            }
    }
}

void pre_order(node *temp)
{
    if(root==NULL)
    { 
    cout << "Tree is null.." << endl;
    }
    else
    {

        cout << temp->data << "\n";

        if(temp->left)
        {
          pre_order(temp->left);
            }

        if(temp->right)
        {
            pre_order(temp->right);
        }   
    }
}

void post_order(node *temp)
{
    if(root==NULL) 
    cout << "Tree is null..." << endl;
    
    
    else
    {
        if(temp->left)
        {
            post_order(temp->left);
        }
        
        if(temp->right)
        {
       post_order(temp->right);
        }
        
        cout << temp->data << "\n";
    }
   
}
    
        int main (void)
    {
        
        for(int i=1; i<=5; i++)
        {
            creat_node();
        }
        
        
        cout << "pre_order" << endl;
        pre_order(root);
        
        cout << "in_order" << endl;
        in_order(root);
        
        cout << "post_order" << endl;
        post_order(root);
        
        
    }    
