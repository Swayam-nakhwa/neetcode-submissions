#include<bits/stdc++.h>
using namespace std ; 

/*
Because the array is sorted, we can use two pointers to adjust the sum efficiently.
If the current sum is too big, moving the right pointer left makes the sum smaller.
If the sum is too small, moving the left pointer right makes the sum larger.
This lets us quickly close in on the target without checking every pair.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
 int i = 0 ;

int  n = numbers.size() ;

 int j = n - 1  ;

 while(i < j )
 {
    int sum  = numbers[i] + numbers[j] ;

    if(sum == target)
    {
        return {i+1 , j + 1 } ; 
    }
    else if(sum > target )
    {
        j-- ;

    }

    else{
        i++ ;
    }


 }




        
    }
};
