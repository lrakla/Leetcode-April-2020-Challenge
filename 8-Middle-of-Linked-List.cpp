
/**
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
**/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* init_head = head;
        int count = 1;
        while(head->next!=NULL){
            head=head->next;
            count++;
            
        }
        int steps;
        if((count%2) ==0){
            steps = (count/2);
        }
        else
            steps = (count-1)/2;
        
        while(steps){
            init_head = init_head->next;
            steps--;
            
        }
        
        return init_head;
        
    }
};