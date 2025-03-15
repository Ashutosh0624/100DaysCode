#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *next;

    node(int data): data{data}, next{nullptr} {}

};

class linkedlist{
    public:
    node *head;

    linkedlist(): head{nullptr} {}
    void print_list() const;
    void set_head(int val);
    void set_tail(int val);
};

void linkedlist::set_head(int val){
    node *newnode = new node(val);
    if (head == nullptr){
        head = newnode;
        return;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}

void linkedlist::set_tail(int val){
    node *newnode = new node(val);
    if(head == nullptr){
        set_head(val);
        return;
    }
    node *curr = head;
    while(curr->next){
        curr = curr->next;
    }
    curr->next = newnode;
}
void linkedlist::print_list() const{
    node *curr = head;
    while(curr){
        std::cout<<curr->data<<" ";
        curr = curr->next;
    }
    std::cout<<std::endl;
}
int main(){
    linkedlist l1;
    l1.set_head(34);
    l1.set_head(45);
    l1.set_tail(88);
    l1.set_tail(55);
    l1.print_list();
    return 0;
}