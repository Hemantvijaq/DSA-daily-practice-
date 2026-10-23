/* Structure of Linked List Node
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
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == NULL) return head;
        if( x == 1){
        Node*temp = head;
            head = head->next;
            free(temp);
            return head;
        }
        Node*temp = head;
        Node * prev = NULL;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            if(cnt == x){
                prev->next = prev->next->next;
               free(temp);
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
        
    }
};