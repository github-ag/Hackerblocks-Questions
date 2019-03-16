#include<iostream>
#include<climits>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}

};
node* insertinbst(node *root,int data)
{
	if(root==NULL)
		return new node(data);
	if(data<root->data)
	{
		root->left=insertinbst(root->left,data);
		return root;
	}
	else
	{
		root->right=insertinbst(root->right,data);
		return root;
	}
}
node *build()
{
	
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	node *root=NULL;
	for(int j=0;j<n;j++)
	{
		root=insertinbst(root,a[j]);
	}
	return root;
}
void print(node *root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
node* deleteinbst(node *root,int data)
{
	if(root==NULL)
		return NULL;
	if(data<root->data)
	{
		root->left = deleteinbst(root->left,data);
		return root;
	}
	else if(data>root->data)
	{
		root->right = deleteinbst(root->right,data);
		return root;
	}
	else if(data==root->data)
	{
        //case 1(zero children)
        if(root->left==NULL && root->right==NULL)
        {
        	delete root;
        	return NULL;
        }
        //case 2(one children)
        if(root->left!=NULL&&root->right==NULL)
        {
        	node *temp=root->left;
        	delete root;
        	return temp;
        }
        if(root->right!=NULL&& root->left==NULL)
        {
        	node *temp=root->right;
        	delete root;
        	return temp;
        }
        //case 3 two children
        if(root->left!=NULL &&root->right!=NULL)
        {
        	node *replace=root->right;
        	while(replace->left!=NULL)
        	{
        		replace=replace->left;
        	}
        	root->data=replace->data;
        	root->right=deleteinbst(root->right,replace->data);
        	return root;
        }
	}

}
int main()
{
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
	{
        node *root=build();
        //print(root);
        int n,arr[1000];
        cin>>n;
        for(int j=0;j<n;j++)
        {
        	cin>>arr[j];
        	deleteinbst(root,arr[j]);
        }
        print(root);
        cout<<"\n";


	}
	return 0;
}
