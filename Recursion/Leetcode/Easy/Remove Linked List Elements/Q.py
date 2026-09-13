
# Approach 1 — Separate Head Handling

# class ListNode:

#     def __init__(self, val):
#         self.val = val
#         self.next = None


# def removeElements(head, val):

#     # Remove matching nodes from the beginning
#     while head is not None and head.val == val:
#         head = head.next

#     # Remove matching nodes from the rest
#     curr = head

#     while curr is not None and curr.next is not None:

#         if curr.next.val == val:
#             curr.next = curr.next.next
#         else:
#             curr = curr.next

#     return head


# def printList(head):

#     while head is not None:
#         print(head.val, end=" ")
#         head = head.next

#     print()


# # 7 -> 7 -> 7 -> 7 -> 8 -> 9 -> 7 -> 3

# head = ListNode(7)
# head.next = ListNode(7)
# head.next.next = ListNode(7)
# head.next.next.next = ListNode(7)
# head.next.next.next.next = ListNode(8)
# head.next.next.next.next.next = ListNode(9)
# head.next.next.next.next.next.next = ListNode(7)
# head.next.next.next.next.next.next.next = ListNode(3)

# val = 7

# head = removeElements(head, val)

# printList(head)


# Approach 2 — Dummy Node - Recommended

class ListNode:

    def __init__(self, val):
        self.val = val
        self.next = None


def removeElements(head, val):

    # Create dummy node
    dummy = ListNode(0)

    # Connect dummy to the original list
    dummy.next = head

    # curr starts at dummy
    curr = dummy

    while curr.next is not None:

        if curr.next.val == val:

            # Skip the node that needs to be removed
            curr.next = curr.next.next

        else:

            # Move curr forward
            curr = curr.next

    # Skip dummy
    return dummy.next


def printList(head):

    while head is not None:
        print(head.val, end=" ")
        head = head.next

    print()


# 7 -> 7 -> 7 -> 7 -> 8 -> 9 -> 7 -> 3

head = ListNode(7)
head.next = ListNode(7)
head.next.next = ListNode(7)
head.next.next.next = ListNode(7)
head.next.next.next.next = ListNode(8)
head.next.next.next.next.next = ListNode(9)
head.next.next.next.next.next.next = ListNode(7)
head.next.next.next.next.next.next.next = ListNode(3)

val = 7

head = removeElements(head, val)

printList(head)