// Given a linked list sorted in ascending order and
// an integer called data, insert data in the linked
// list such that the list remains sorted.

class Solution
{
public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node *head, int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL || data < head->data)
        {
            newNode->next = head;
            head = newNode;
            return head;
        }

        Node *current = head;
        while (current->next != NULL && current->next->data < data)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;

        return head;
    }
};