//interative c++ program to check if two linked lists are the same

#include <bits/stdc++.h>
using namespace std;
//structure linked list node
struct Node {
    int data;
    struct Node* next;
};

bool areIdentical(struct Node* a,struct Node* b){
    while(a->data != NULL && b->data != NULL){
        if(a->data != b->data){
            return false;

            a = a->next;
            b = b->next;
        }else{

        return (a == NULL && b == NULL);
    }
    }

};
void push(struct Node ** head_ref, int new_data)
{
struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main(){
    struct Node* a = NULL;
    struct Node* b = NULL;

    push(&a,3);
    push(&a,2);
    push(&a,1);
    push(&b,3);
    push(&b,2);
    push(&b,1);

    if(areIdentical(a,b)){
        cout << "ARE IDENTICAL";
        }else{
        cout << "IS NOT IDENTICAL";
        }


    }


