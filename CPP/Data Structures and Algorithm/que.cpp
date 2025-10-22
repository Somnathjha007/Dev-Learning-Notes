#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


    int start(vector<int>& nums){
        int lw_idx = 0; // rotated by 0 times
        for( int i=0;i<nums.size();i++){
            if(nums[i]<nums[lw_idx]){lw_idx=i;}
        }

        return lw_idx;
    }
    bool check(vector<int>& nums , int n) {
        int s_idx =start(nums);
        //for loop starting from lowest number goes till end.
        for(int i = s_idx+1;i<n;i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        //return true;
        //start from oth index and goes to starting 
        for(int i =1;i<s_idx;i++){
                if(nums[i-1]>nums[i]){
                return false;
            }
        }
        return true;
    }

int main(){
    vector<int> nums = {3,4,5,1,2};
    int n = nums.size();
    int start_idx = start(nums);
     //cout<<check(nums,n);
     for (int i = 0; i < n; i++) {
        int idx = (start_idx + i) % n; // wrap around
        std::cout << nums[idx] << " ";
    }

    return 0;
}