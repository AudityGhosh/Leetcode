class Solution {
    public ListNode removeNodes(ListNode head) {
        ListNode prev = null, curr = head;

        // reverse the arrows from --> to <--
        while(curr != null){
            ListNode next = null;
            if(curr.next != null){
                next = curr.next;
            }
            curr.next = prev;

            prev = curr;
            curr = next;
        }


        // perform given action
        head = prev;
        curr = prev.next;
        while(curr != null){
            if(curr.val < prev.val){
                prev.next = curr.next;
            }else{
                prev = prev.next;
            }
            curr = curr.next;
        }

    

        // reverse the arrows from <-- to -->
        prev = null;
        curr = head;

        while(curr != null){
            System.out.println(curr.val);
            ListNode next = null;
            if(curr.next != null){
                next = curr.next;
            }
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        return prev;

    }
    
}