#include <iostream>
#include <vector>
#include <algorithm>

// helper function to compare two integers based on the criteria
bool compare(int a, int b) {
    // check if a and b are single or double digits
    bool a_is_single_digit = (a >= 0 && a < 10);
    bool b_is_single_digit = (b >= 0 && b < 10);
    if (a_is_single_digit && !b_is_single_digit) {
        // a is a single digit and b is a double digit
        return true;
    } else if (!a_is_single_digit && b_is_single_digit) {
        // a is a double digit and b is a single digit
        return false;
    } else if (a_is_single_digit && b_is_single_digit) {
        // a and b are both single digits
        return a < b;
    } else {
        // a and b are both double digits
        int a_second_digit = (a / 10) % 10;
        int b_second_digit = (b / 10) % 10;
        if (a_second_digit == b_second_digit) {
            // the second digits are the same, so compare the numbers without the second digit
            int a_without_second_digit = a % 10;
            int b_without_second_digit = b % 10;
            if (a_without_second_digit == 0 && b_without_second_digit != 0) {
                // a has a zero in the ones place, so b comes first
                return false;
            } else if (a_without_second_digit != 0 && b_without_second_digit == 0) {
                // b has a zero in the ones place, so a comes first
                return true;
            } else {
                // neither a nor b has a zero in the ones place, so compare them as usual
                return a < b;
            }
        } else {
            // the second digits are different, so compare them
            return a_second_digit < b_second_digit;
        }
    }
}



// sorting function that uses the compare helper function
void sort_integers(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), compare);
}

// example usage
int main() {
    std::vector<int> nums = {12, 3, 45, 6, 78, 90, 1, 23, 4, 56, 7, 89};
    sort_integers(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}