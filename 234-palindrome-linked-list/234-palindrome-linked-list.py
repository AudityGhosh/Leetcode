# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        # convert linked list to a list and check if palindrome.
        node_val = []
        while head!=None:
            node_val.append(head.val)
            head = head.next
        
        
        if node_val == node_val[::-1]:
            return True
        else:
            return False
            
        