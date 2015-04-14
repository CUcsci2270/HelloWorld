#include <iostream>
#include <string>

using namespace std;

struct node

{

char data;

node * next;

node * prev;

};



bool isPalindrome(node *head, node *tail)

{

    while(head!=NULL && tail!=NULL)

    {
         if(head == tail || head->prev == tail)
            break;

         if(head->data != tail->data)

         {

               return false;

         }

         head = head->next;

         tail = tail->prev;

    }

return true;

}

int main()
{
    node *head = new node;
    head->data = 'b';
    head->prev = NULL;

    node *x = new node;
    x->data = 'a';
    x->prev = head;
    head->next = x;

    node *x1 = new node;
    x1->data = 'a';
    x1->prev = x;
    x->next = x1;

    node *n = new node;
    n->data = 'a';
    n->prev = x1;
    x1->next = n;

    node *tail = new node;
    tail->data = 'b';
    tail->prev = n;
    tail->next = NULL;
    n->next = tail;

    bool answer = isPalindrome(head, tail);
    if(answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
