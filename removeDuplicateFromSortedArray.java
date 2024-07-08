import java.util.ArrayList;
import java.util.List;

public class removeDuplicateFromSortedArray {
    public int removeDuplicates(int[] nums) {
        List<Integer> k = new ArrayList<>();
        if (nums == null || nums.length == 0) {
            k.add(0);
        }else {
            k.add(nums[0]);
            for (int i = 1; i < nums.length; i++) {
                if (!k.get(k.size() - 1).equals(nums[i])) {
                    k.add(nums[i]);
                }
            }
            for (int i = 0; i < k.size(); i++) {
                nums[i] = k.get(i);
            }
        }
        return k.size();
    }
}
