// Arrays are not being used to avoid memory wastage

#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
    }
};

void multiply(Node *tail, int n)
{
    Node *temp = tail, *prevNode = tail;
    int carry = 0;
    while (temp != NULL)
    {
        int data = temp->data * n + carry;
        temp->data = data % 10;
        carry = data / 10;
        prevNode = temp;
        temp = temp->prev;
    }

    while (carry != 0)
    {
        prevNode->prev = new Node((int)(carry % 10));
        carry /= 10;
        prevNode = prevNode->prev;
    }
}

void print(Node *tail)
{
    if (tail == NULL)
        return;
    print(tail->prev);
    cout << tail->data;
}

int main()
{
    int n = 20;
    Node tail(1);
    rep(i, 2, n)
        multiply(&tail, i);

    print(&tail);
    cout << endl;
    return 0;
}