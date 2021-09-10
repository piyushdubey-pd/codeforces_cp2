// red black __init__
#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
    bool color;
    node(int data, bool c){
        this->data=data;
        left=right=NULL;
        color=c;
    }
};
void insertion(struct node temp){
    
}
int main(){
    // 0/false --> black, 1/true --> red
    struct node* root= new node(5,0);
    
    // root and leaves black
    // Search algo --> BST
    // insertion deletion unique


    return 0;
}