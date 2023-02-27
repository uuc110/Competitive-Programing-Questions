public class Adding_two_number {

    public int checking(int num, int[] nums){
        for (int i = 0; i < nums.length; i++) {
            if(nums[i] == num){
                return i;
            }
        }
        return -1;
    }

    public int[] twoSum(int[] nums, int target) {
            int[] ans = new int[0];
       for (int i = 0; i < nums.length; i++) {
            int j = checking(target - nums[i], nums);
            if ((nums[i] + nums[j]) == target)
                ans[0] = i;
                ans[1] = j;
        }

        return ans;
    }

    //write drive code
    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        Adding_two_number obj = new Adding_two_number();
        int[] ans = obj.twoSum(nums, target);
        System.out.println(ans[0] + " " + ans[1]);
    }

}
