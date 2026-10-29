/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int val) {
		data = val;
		this->next = this->prev = nullptr;
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
      };
      Node * deleteLastNode(Node *head) {
          // Write your code here
          if(head == NULL || head->next == NULL){
              return NULL;
          }
          Node * tail = head;
          while(tail->next != NULL){
              tail = tail->next;
          }
          Node * newTail = tail->prev;
          newTail->next = nullptr;
          tail->prev = nullptr;
          free(tail);
          return head;
      }
      
    Node* delPos(Node* head, int k) {
        // code here
        if(head == NULL){
            return NULL;
        }
        Node * temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            if(cnt == k ) break;
            temp = temp->next;
        }
        Node * prev = temp->prev;
        Node * front = temp->next;
        
        if(prev == NULL && front == NULL){
            return NULL;
        }else if (prev == NULL){
            return deleteHead(head);
        }else if ( front == NULL){
         return  deleteLastNode(head);  
        }
        prev->next = front;
        front->prev = prev;
        temp->next = nullptr;
        temp->prev = nullptr;
        free(temp);
        return head;
    }
};