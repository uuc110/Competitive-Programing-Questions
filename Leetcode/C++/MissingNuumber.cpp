#include <bits/stdc++.h>
using namespace std;

//int missingNumber(vector<int>& nums) {
//    int n = nums.size();
//    vector<int> nums1(n);
//    for(int i=0; i < n+1;i++){
//        nums1[i] = i;
//    }
//    sort(nums.begin(), nums.end());
//    for(int i=0; i<n;i++){
//        if(nums[i] != nums1[i]){
//            return nums1[i];
//        }
//    }
//}

int main(){
    //generae two vecotr array with name nums1 and nums2, nums one should have one number missing, while nums2 will have all the number form 0 to n
    int n;
    cin >> n;
    vector<int> nums1(n);
    vector<int> nums2(n+1);
    for(int i=0; i<n;i++){
        cin >> nums1[i];
    }
    for(int i=0; i<n+1;i++){
        nums2[i] = i;
    }
    //sort the two vector array
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    //compare the two vector array
    for(int i=0; i<n;i++){
        if(nums1[i] != nums2[i]){
            cout << nums2[i];
        }
    }

    return 0;
}

// write 4 even numbers simply
