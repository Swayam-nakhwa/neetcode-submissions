#include<bits/stdc++.h>
using namespace std  ;


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans=false;
        map <int , int > Mpp ;

        int n =nums.size() ;

        for(int i = 0 ; i < n ; i++)
        {
            Mpp[nums[i]]++;
            
            }

            for(auto it: Mpp)
            {
              if(it.second>=2)
              {ans=true;
              break;}
              else
              {continue;}
            }
            return ans; }
    };
