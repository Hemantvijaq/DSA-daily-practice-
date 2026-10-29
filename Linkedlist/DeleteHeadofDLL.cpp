/* Structure of doubly linked list Node
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    Node* deleteHead(Node* head) {
        // code here
        if( head == NULL || head->next == NULL){
            return NULL;
        }
        
        Node * prev = head;
        head = head->next;
        head->prev = nullptr;
        prev->next = nullptr;
        free(prev);
        return head;
    }
};
