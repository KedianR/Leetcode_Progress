class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int max,sec,thi;
        max = LONG_MIN;
        sec = LONG_MIN;
        thi = LONG_MIN;

        for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            thi = sec;
            sec = max;
            max = nums[i];
        }
        else if(nums[i]<max&&nums[i]>sec){
            thi = sec;
            sec = nums[i];
        }
        else if((nums[i]<sec)&&nums[i]>thi){
            thi = nums[i];
        }
        
    }
    return (thi==LONG_MIN)?(max):(thi);
    }
};