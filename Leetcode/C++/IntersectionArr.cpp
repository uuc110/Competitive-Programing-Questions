sort(nums1.begin(), nums1.end());
sort(nums2.begin(), nums2.end());
int n1 = (int)nums1.size(), n2 = (int)nums2.size();
int i1=0, i2=0;
vector<int> ans;
while(i1 < n1 && i2 < n2){
if(nums1[i1] == nums1[i2]){
ans.push_back(nums1[i1]);
i1++;
i2++;
}
else if(nums1[i1] > nums2[i2]){
i2++;
}else{
i1++;
}
}
return ans;