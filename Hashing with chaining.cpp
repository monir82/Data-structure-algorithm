#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *right=NULL;
};
int hashing(int key,int n)
{
    key=key%n;
    return key;
}
node *createleaf(int key)
{
    node *p=new node;
    p->key=key;
    p->right=NULL;
    return p;
}
void insert(node *p[],int key)
{
    int h=hashing(key,10);
    node *c;
    c=p[h];
    if(p[h]==NULL)
    {
        p[h]=createleaf(key);
    }
    else
    {
        while(c->right!=NULL)
        {
            c=c->right;
        }
        c->right=createleaf(key);

    }
}
void print(node *p[])
{
    for(int i=0;i<10;i++)
    {
        if(p[i]!=0)
        {
            cout<<"P["<<i<<"]";
            node *c=p[i];
            while(c!=NULL)
            {
                cout<<"  ->  "<<c->key;
                c=c->right;
            }
        }
        else cout<<"P["<<i<<"]  ->  "<<p[i];
        cout<<endl;
    }
}
main()
{
    node *p[10]= {NULL};
    int n,t;
    insert(p,5);
    insert(p,15);
    insert(p,20);
    insert(p,11);
    insert(p,21);
    insert(p,40);
    insert(p,31);
    insert(p,32);
    insert(p,4);
    insert(p,25);
    insert(p,7);
    insert(p,2);
    insert(p,1);
    insert(p,3);
    insert(p,9);
    insert(p,6);
    insert(p,7);
    print(p);
}
