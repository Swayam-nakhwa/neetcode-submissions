#include<bits/stdc++.h>
using namespace std  ;


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      map <int , int > Mpp ;
      int n = nums.size() ;

      for(int i =0 ; i < n ; i ++ )
      {
        Mpp[nums[i]] ++ ;
        if(Mpp[nums[i]]>1)
        {
            return true;
        
        }
 }
 return false;




 }
    };
