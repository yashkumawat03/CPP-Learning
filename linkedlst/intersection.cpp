 //ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // unordered_map<ListNode*, int> vis;
        // ListNode* temp1 = headA;
        // while(temp1!= NULL){
        //     vis[temp1]++;
        //     temp1= temp1->next;
        // }
        // ListNode* r = NULL;
        // ListNode* temp2 = headB;
        // while(temp2!= NULL){
        //     if(vis[temp2] == 1){
        //         r = temp2;
        //         break;
        //     }
        //     vis[temp2]++;
        //     temp2= temp2->next;
        // }

        // return r;