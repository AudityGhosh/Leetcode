# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def func(head):
            a=head.val*2
            if head.next:
                a+=func(head.next)
            head.val=a%10 #update list with last digit now 
            return a//10 #return carry
        a=func(head) #if carry, it will be head 
        if a:
            return ListNode(a,head)
        return head
        