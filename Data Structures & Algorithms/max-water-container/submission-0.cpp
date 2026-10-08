#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size() ;

        int left = 0 ; 

        int right = n - 1 ;

        int maxarea = 0  ;


        while ( left < right )
        {
int width  = right - left ;

int height = min( heights[left] , heights[right]) ;

int Area = ( width * height ) ;

 maxarea = max( Area , maxarea ) ;


// pointers condition / moving pointer throughout  the height vector 


if( heights[left]  <  heights[right])
{
left ++ ;
}
else{ 
    
    right -- ;

}




        } 

        return maxarea ; 
    }
};
