class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeTwoLists(l1, l2):
    # Dummy node
    dummy = ListNode()
    # Current points to the last node in our result
    current = dummy

    # Compare nodes from both lists
    while l1 is not None and l2 is not None:

        if l1.val < l2.val:
            current.next = l1
            l1 = l1.next
        else:
            current.next = l2
            l2 = l2.next

        current = current.next

    # Attach whichever list still has nodes
    if l1 is not None:
        current.next = l1

    if l2 is not None:
        current.next = l2

    # Skip dummy node
    return dummy.next    

# Helper function to print linked list
def printList(head):

    while head is not None:
        print(head.val, end=" ")
        head = head.next

    print()


# List 1: 1 -> 3 -> 5
l1 = ListNode(1)
l1.next = ListNode(3)
l1.next.next = ListNode(5)

# List 2: 2 -> 4 -> 6
l2 = ListNode(2)
l2.next = ListNode(4)
l2.next.next = ListNode(6)

# Merge
result = mergeTwoLists(l1, l2)

# Print result
printList(result)