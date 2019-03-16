#include<iostream>
#include<math.h>
#include<unordered_map>
#include<vector>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    /*node()
    {
        
        left=NULL;
        right=NULL;
    }*/
};

node* build()
{
    int n;
    cin>>n;
    int number = pow(2,n)-1;
    node *nodes=new node[number];
    int d;
    cin>>d;
    nodes[0].data=d;
    int itr = pow(2,n-1)-1;
    
    for(int i=0;i<itr;i++)
    {
        int d;
        cin>>d;
        if(d==-1)
        nodes[i].left=NULL;
        else{
        nodes[i].left=&(nodes[(2*i)+1]);
        (nodes[i].left)->data=d;
        }
        cin>>d;
        if(d==-1)
        nodes[i].right=NULL;
        else{
        nodes[i].right=&(nodes[(2*i)+2]);
        nodes[i].right->data=d;
        }
    }
    node *root=&nodes[0];
    return root;
    

}
void print(node* root)
{
   node* temp=root;
   if(temp==NULL)
   return;
   cout<<temp->data<<" ";
   print(root->left);
   print(root->right);
}
unordered_map<int,vector<int> >mp;
void traverse(node *root,int dist=0)
{
  
  node *temp=root;
  if(temp==NULL)
  return;
  mp[dist].push_back(temp->data);
  traverse(root->left,dist-1);
  traverse(root->right,dist+1);
  
}
void print_hashmap()
{
    for(auto n:mp)
    {
        for(int i=0;i<n.second.size();i++)
        cout<<n.second[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    node *root;
    root=build();
    //print(root);
    traverse(root);
    print_hashmap();
    return 0;

}
