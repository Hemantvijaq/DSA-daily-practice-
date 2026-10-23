/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        // code here
        if(head == NULL) return head;
        Node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }
};
