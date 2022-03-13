#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int data;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
    }
};
void multiply(node *tail, int n)
{
    node *temp = tail, *prevNode = tail;
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
        prevNode->prev = new node((int)(carry % 10));
        carry /= 10;
        prevNode = prevNode->prev;
    }
}
void printFactorial(node *tail)
{
    if (tail == NULL)
        return;
    printFactorial(tail->prev);
    cout << (tail->data);
}
int main()
{
    node tail(1);
    for (int i = 2; i <= 100000; i++)
    {
        multiply(&tail, i);
    }
    printFactorial(&tail);
    cout << endl;
    return 0;
}