#include<bits/stdc++.h>
using namespace std ;

/* 
so prefix is from 1 to n-1(i<n)  for loop

prefix [i] = prefix[i - 1 ] * nums[i -1] ;

So Suffix is from n-2 to 0 for loop

suffix [i] = suffix[i + 1] * nums[i + 1] ;

then integrate them both 

result[i] = prefix[i] * suffix[i] ;


*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size() ;


vector <int> Output(n , 1) ; 
 

for(int i = 1 ; i < n ; i ++)
{
    Output[i] = Output[i-1] * nums[i - 1 ];
}

int postfix = 1 ;

for(int i = n - 1  ; i  >= 0 ; i --)
{
Output[i]  = Output[i] * postfix ;
postfix = postfix *  nums[i];
}
return Output  ;

    }
};
