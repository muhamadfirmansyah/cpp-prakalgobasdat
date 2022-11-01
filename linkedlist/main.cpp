
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Membuat nodes
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    // mengalokasikan 3 nodes pada heap
    one = new Node();
    two = new Node();
    three = new Node();

    // mengisi nilai
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // menghubungkan nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // keluarkan nilai dari linkedlist
    head = one;
    while (head != NULL)
    {
        cout << head->value;
        head = head->next;
    }
}