// Merge sort in linked list
// Benefits of using the merge sort in linked list->
// 1. In case of linked list, we do not have to have another storage, so space complexity is O(1) with same time complexity.
// 2. Quick sort requires more of the indexing part. In linked list, accessing by index is not possible so Quick sort is not so beneficial in case of linked list.

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

//Entering at the head
node* pushAtHead(node *head,int d)
{
    node *temp = new node(d);
    temp->next = head;
    return temp;
}

//Printing the linked list.
void printLinkedList(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

//Splitting the linked list into two halves.
void splitLinkedList(node *head,node **a,node **b)
{
    node *slow = head;
    node *fast = head;
    while(1)
    {
        if(fast->next!=NULL&&fast->next->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        else
        break;
    }
    *a = head;
    *b = slow->next;
    slow->next = NULL;

}

//Merging the two sorted linked list.
node* mergeLinkedList(node *a,node *b)
{
    //Base Case
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    node *result = NULL;
    if(a->data<=b->data)
    {
        result = a;
        result->next = mergeLinkedList(a->next,b);
    }
    else
    {
        result = b;
        result->next = mergeLinkedList(a,b->next);
    }
    return result;
}

//Creating the merge sort
node* mergeSort(node *head)
{
    //Base Case -> Linked list has 0 or 1 element.
    if(head==NULL || head->next==NULL)  
    {
        return head;
    }
    //Recursive Case
    //Step 1. split linked list into two halves
    node *a = NULL;
    node *b = NULL;
    splitLinkedList(head,&a,&b);

    node* head_first = mergeSort(a);
    node* head_second = mergeSort(b);


    //Step 2. Merging the two halves.
    node *new_head = mergeLinkedList(head_first,head_second);
    return new_head;
}

int main()
{
    node *head = new node(10);
    head = pushAtHead(head,2);
    head = pushAtHead(head,8);
    head = pushAtHead(head,7);
    head = pushAtHead(head,4);
    head = pushAtHead(head,5);
    head = pushAtHead(head,6);
    printLinkedList(head);
    cout<<endl;
    head = mergeSort(head);
    printLinkedList(head);
    return 0;
}
