// Given a linked list, you have to perform the following task:

// Extract the alternative nodes starting from second node.
// Reverse the extracted list.
// Append the extracted list at the end of the original list.

class Solution
{
public:
    void rearrange(struct Node *odd)
    {
        if (odd == NULL || odd->next == NULL || odd->next->next == NULL)
        {
            return;
        }

        struct Node *even = odd->next;
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = NULL;

        while (odd->next)
        {
            struct Node *temp = odd->next->next;
            odd->next->next = even;
            even = odd->next;
            odd->next = temp;

            if (temp != NULL)
                odd = temp;
        }
        odd->next = even;
    }
};