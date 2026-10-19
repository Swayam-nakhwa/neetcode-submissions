#include<bits/stdc++.h>
using namespace std ;

#include<cmath>

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size() ; // initializing N 

int maxi = 0 ; // Initializing Max 

    

        long long  h_done = 0 ; // Intializing Hours_done 
 
        int Result = -1  ; // Initializing result 

// Calculating Maximum value in Piles 

  for (int i = 0 ; i < n  ; i++)
  {
maxi = max(maxi , piles[i]);
  }



// Writing Binary Search in K vector 

int low = 1 ;



int high  = maxi   ;


while (low <= high )
{
// Calculating Mid With Available Low and High 
int   mid = low + (high - low ) / 2  ; 

// Calculating h_done for that perticular mid 
for (int i = 0 ; i < n ; i++)
{
    h_done = h_done + ceil(piles[i] / (double) mid ) ; 
}

// If else condition for h_done and  h 
if(h_done <= h )
{
    Result = mid ; 
    high = mid - 1 ; 

}

else{
    low = mid + 1 ;
}

h_done = 0 ; // Reseting h_done to 0 for the next mid 


}

return Result  ; 

    }
};
