#include <bits/stdc++.h>

using namespace std;

 
// A Linked List Node
struct Node
{
    char data;
    Node* next;
 
    Node(char ch)
    {
        this->data = ch;
        this->next = nullptr;
    }
};
 
// Construct `s1` and `s2` out of the given linked list with consecutive
// list elements in the forward and backward direction
void construct(Node* &head, string &s1, string &s2)
{
    // base case
    if (head == nullptr) {
        return;
    }
 
    s1 += head->data;
    construct(head->next, s1, s2);
    s2 += head->data;
}
 
// Function to check if a given linked list of characters is a palindrome
bool isPalindrome(Node* head)
{
    // construct string `s1` and `s2` with consecutive elements of the linked list
    // starting from the beginning and the end
    string s1, s2;
    construct(head, s1, s2);
 
    // check if the linked list is a palindrome
    return s1 == s2;
}
 
int main()
{
    Node* head = new Node('A');
    head->next = new Node('B');
    head->next->next = new Node('C');
    head->next->next->next = new Node('B');
    head->next->next->next->next = new Node('A');
 
    if (isPalindrome(head)) {
        cout << "Linked List is a palindrome.";
    }
    else {
        cout << "Linked List is not a palindrome.";
    }
 
    return 0;
}





