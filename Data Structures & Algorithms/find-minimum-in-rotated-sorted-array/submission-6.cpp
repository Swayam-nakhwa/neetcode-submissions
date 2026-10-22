#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int findMin(vector<int> &nums) {
       int n = nums.size() ;

    int low = 0 ; // Initialized low
    int high = n - 1  ; //Initialized high 

    int mid = 0 ;  // Initialized mid 

    while( low < high )
    {
 mid = low + ( high - low  ) / 2 ; // mid's formula 

        if( nums[ mid ] > nums[ high ] )
        {
            low = mid +  1 ;

        }

        else{

high = mid   ;

        }

    }

int minimum  = nums[low] ; 

return minimum ; 


    }
};
