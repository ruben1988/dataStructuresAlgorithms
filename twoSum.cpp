#include <stdio.h>
#include <algorithm>
#include <vector>
#include "twoSum.h"

std::vector<int> twoSum::twoSumFunct(std::vector<int>& nums, int target) {

    std::vector< std::pair <int, int> > nums2;
    for(int i=0; i<nums.size(); ++i){
        std::pair<int, int> temp(nums[i], i);
        nums2.push_back(temp);
    }
    sort(nums2.begin(), nums2.end());
    int i=0;
    int j=nums.size()-1;

    while(i<j){
        if (nums2[i].first + nums2[j].first==target){
            std::vector<int> t{nums2[i].second, nums2[j].second};
            return t;
        }
        else if (nums2[i].first + nums2[j].first > target){
            --j;                
        }
        else{
            ++i;
        }
    }
    std::vector<int> n{0,0};
    return n;
}

