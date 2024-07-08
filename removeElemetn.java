import java.util.ArrayList;
import java.util.List;

public class removeElemetn {
    public int removeElement(int[] nums, int val) {
        List<Integer> k = new ArrayList<>();
        if (nums == null || nums.length == 0) {
            return 0;
        }else {
            for (int i = 0; i < nums.length; i++) {
                if (nums[i] != val) {
                    k.add(nums[i]);
                }
            }
        }
        for (int i = 0; i < k.size(); i++) {
            nums[i] = k.get(i);
        }
        return k.size();
    }
}
