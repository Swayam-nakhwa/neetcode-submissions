#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
map <int , int > Mpp ;

int  n = nums.size() ;

for(int i = 0 ; i < n ; i ++)
{
   

int rem = target  - nums[i] ;

if(Mpp.find(rem) != Mpp.end()  ) 
{ 
  
  return {Mpp[rem] , i  } ;
    
  
}

 Mpp[nums[i]] = i ;

}


return {} ;
    }
};
