#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if(NULL == head)
        return false;
    
    struct Node *slowPacer = head;
    struct Node *fastPacer = head;
    
    while(fastPacer!=NULL && slowPacer!=NULL)
    {
        slowPacer = slowPacer->next;
        fastPacer = fastPacer->next->next;
        
        if(slowPacer == fastPacer)
              return true;                    
    }
    return false;
}
