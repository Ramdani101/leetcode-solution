import java.util.Stack;
public class validParenthesesProblem {
    /*
    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
    An input string is valid if:
        Open brackets must be closed by the same type of brackets.
        Open brackets must be closed in the correct order.
        Every close bracket has a corresponding open bracket of the same type.

    Example 1:
        Input: s = "()"
        Output: true

    Example 2:
        Input: s = "()[]{}"
        Output: true

    Example 3:
        Input: s = "(]"
        Output: false

    Constraints:
        1 <= s.length <= 104
        s consists of parentheses only '()[]{}'.
     */
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            char currentChar = s.charAt(i);
            if (currentChar == '(' || currentChar == '[' || currentChar == '{') {
                stack.push(currentChar);
            } else {
                if (stack.isEmpty()) {
                    return false; // Kurung tutup tanpa pasangan
                }
                char top = stack.pop();
                if ((currentChar == ')' && top != '(') ||
                        (currentChar == ']' && top != '[') ||
                        (currentChar == '}' && top != '{')) {
                    return false; // Tidak cocok dengan kurung bukaan yang sesuai
                }
            }
        }
        return stack.isEmpty(); // Pastikan semua kurung bukaan memiliki pasangan
    }
}
