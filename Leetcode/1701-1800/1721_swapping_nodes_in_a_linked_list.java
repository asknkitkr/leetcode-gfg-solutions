/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        int c = 0;
        ListNode count = head;
        while (count != null) {
            count = count.next;
            c++;
        }
        int k1 = c - k;
        int c1 = 0, c2 = 0;

        ListNode strt = head;
        ListNode end = head;
        while (c1 != k - 1) {
            strt = strt.next;
            c1++;
        }
        while (c2 != k1) {
            end = end.next;
            c2++;
        }
        int temp = strt.val;
        strt.val = end.val;
        end.val = temp;
        return head;
    }
}