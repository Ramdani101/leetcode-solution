public class mergedTwoSortedListProblem {
    /*
    You are given the heads of two sorted linked lists list1 and list2.
    Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
    Return the head of the merged linked list.

    Example 1 :
        Input: list1 = [1,2,4], list2 = [1,3,4]
        Output: [1,1,2,3,4,4]

    Example 2:
        Input: list1 = [], list2 = []
        Output: []

    Example 3:
        Input: list1 = [], list2 = [0]
        Output: [0]

    Constraints:
        The number of nodes in both lists is in the range [0, 50].
        -100 <= Node.val <= 100
        Both list1 and list2 are sorted in non-decreasing order.
     */
    public class ListNode {
        int val;
        Solution.ListNode next;
        ListNode(){}
        ListNode(int val) {
            this.val = val;
        }
        ListNode(int val, Solution.ListNode next) {
            this.val = val; this.next = next;
        }
    }

    public Solution.ListNode mergeTwoLists(Solution.ListNode list1, Solution.ListNode list2) {
        // Jika salah satu linked list kosong, kembalikan linked list lainnya
        if (list1 == null) return list2;
        if (list2 == null) return list1;

        // Inisialisasi linked list hasil
        Solution.ListNode result = new Solution.ListNode();
        Solution.ListNode current = result;

        // Selama kedua linked list tidak kosong, gabungkan dan urutkan
        while (list1 != null && list2 != null) {
            if (list1.val < list2.val) {
                current.next = list1;
                list1 = list1.next;
            } else {
                current.next = list2;
                list2 = list2.next;
            }
            current = current.next;
        }

        // Tambahkan sisa elemen dari salah satu linked list yang masih tersisa
        if (list1 != null) {
            current.next = list1;
        } else {
            current.next = list2;
        }

        // Kembalikan hasil
        return result.next;
    }
}
