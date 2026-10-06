#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <int> sortedNums = nums ;

        vector < vector<int>  > TripletVectorContainer ; 

int  n = nums.size()   ;

vector<int> ResultantTriplet(3) ;


        sort( sortedNums.begin() , sortedNums.end() ) ;

        for(int i = 0 ; i < n - 2  ; i++ )
        {
            if(i == 0 )
            {
                ResultantTriplet[0] = sortedNums[0] ;

            }
            else if( sortedNums[i] == sortedNums[ i-1 ] ){
continue ;

            }
            else {

                ResultantTriplet[0] = sortedNums[i] ;

            }

            int j = i + 1 ; // j as left 

            int k = n - 1 ; // k as right 


while(j < k )

{

if(ResultantTriplet[0] + sortedNums[j] + sortedNums[k]  == 0 )
{
    ResultantTriplet[1] = sortedNums[j] ;
     ResultantTriplet[2] = sortedNums[k] ;
    
TripletVectorContainer.push_back( ResultantTriplet);



j ++ ; 
k -- ; 

  while(j < k && sortedNums[j] == sortedNums[j - 1])
    {
        j++;
    }

    while(j < k && sortedNums[k] == sortedNums[k + 1])
    {
        k--;
    }

}

else if (ResultantTriplet[0] + sortedNums[j] + sortedNums[k]  > 0){

k-- ;
}

else {
    j++ ;

}

}



        }

return  TripletVectorContainer ;
    }
};
