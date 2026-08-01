
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
int i=0;
int l=nums.size();
for(int j=0;j<l;j++)
{
    if(nums[j]!=0)
    {
        swap(nums[i],nums[j]);
        i++;
        

}
}

return;
    }
};