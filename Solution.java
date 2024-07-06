import com.sun.net.httpserver.SimpleFileServer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Stack;

public class Solution {

    public Solution() {
    }

//    TWOSUM PROBLEM
//    public int[] twoSum(int[] nums, int target){
//        int[] hasil = new int[2];
//        for (int i = 0 ; i < nums.length; i++){
//            for (int j = i + 1; j < nums.length ; j++) {
//                if (nums[i] + nums[j] == target) {
//                    hasil[0] = i;
//                    hasil[1] = j;
//                }
//            }
//        }
//        return hasil;
//    }

//    PALINDROME CHECK
//    public boolean isPalindrome(int x){
//        if (x < 0) {
//            return false;
//        }else{
//            int rev = 0;
//            int original = x;
//            while (x!=0) {
//                rev = rev * 10 + x % 10;
//                x = x / 10;
//            }
//
//            if (rev == original) {
//                return true;
//            }else{
//                return false;
//            }
//        }
//    }

    // Convert roman numeral to integer
//    public int romanToInt(String s) {
//        int total = 0;
//        int nilaiSebelumnya = 0;
//        for (int i = 0; i < s.length(); i++) {
//            int nilaiSaatIni = getValue(s.charAt(i));
//            if (nilaiSaatIni <= nilaiSebelumnya) {
//                total+= nilaiSaatIni;
//            }else {
//                total+= nilaiSaatIni - 2*nilaiSebelumnya;
//            }
//            nilaiSebelumnya = nilaiSaatIni;
//        }
//        return total;
//    }

//    private int getValue(char c){
//        switch (c){
//            case 'I' : return 1;
//            case 'V' : return 5;
//            case 'X' : return 10;
//            case 'L' : return 50;
//            case 'C' : return 100;
//            case 'D' : return 500;
//            case 'M' : return 1000;
//            default  : return 0;
//        }
//    }

      // LONGEST COMMON PREFIX PROBLEM
//    public String longestCommonPrefix(String[] strs){
//        String commonPrefix = strs[0];
//        for (int i = 1; i < strs.length; i++) {
//            while (!strs[i].startsWith(commonPrefix)){
//                commonPrefix = commonPrefix.substring(0, commonPrefix.length() - 1);
//                if (commonPrefix.isEmpty()) {
//                    return "";
//                }
//            }
//        }
//        return commonPrefix;
//    }

//    CHEK TANDA KURUNG SEPASANG ATAU NGGA
//    public boolean isValid(String s) {
//        Stack<Character> stack = new Stack<>();
//
//        for (int i = 0; i < s.length(); i++) {
//            char currentChar = s.charAt(i);
//            if (currentChar == '(' || currentChar == '[' || currentChar == '{') {
//                stack.push(currentChar);
//            } else {
//                if (stack.isEmpty()) {
//                    return false; // Kurung tutup tanpa pasangan
//                }
//                char top = stack.pop();
//                if ((currentChar == ')' && top != '(') ||
//                        (currentChar == ']' && top != '[') ||
//                        (currentChar == '}' && top != '{')) {
//                    return false; // Tidak cocok dengan kurung bukaan yang sesuai
//                }
//            }
//        }
//        return stack.isEmpty(); // Pastikan semua kurung bukaan memiliki pasangan
//    }



     // Definition for singly-linked list.
      public class ListNode {
          int val;
          ListNode next;
          ListNode(){}
         ListNode(int val) {
              this.val = val;
          }
          ListNode(int val, ListNode next) {
              this.val = val; this.next = next;
          }
     }


    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        // Jika salah satu linked list kosong, kembalikan linked list lainnya
        if (list1 == null) return list2;
        if (list2 == null) return list1;

        // Inisialisasi linked list hasil
        ListNode result = new ListNode();
        ListNode current = result;

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


