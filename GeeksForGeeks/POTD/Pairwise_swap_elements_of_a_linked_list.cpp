// Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
// For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
// Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

class Solution
{
public:
    Node *pairWiseSwap(struct Node *head)
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;

        while (current != NULL && current->next != NULL)
        {
            next = current->next;
            current->next = next->next;

            if (prev == NULL)
                head = next;
            else
                prev->next = next;

            next->next = current;
            prev = current;
            current = current->next;
        }
        return head;
    }
};