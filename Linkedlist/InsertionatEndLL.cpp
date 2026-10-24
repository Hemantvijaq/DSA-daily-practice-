/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head == NULL){
            return new Node(x);
        }
        Node*temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
            Node * newNode = new Node(x);
            temp->next = newNode;
            return head;
    }
};