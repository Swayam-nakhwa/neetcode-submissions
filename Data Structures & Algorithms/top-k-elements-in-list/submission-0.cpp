#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int , int > Mpp ;

        vector <int > ans ;
int n = nums.size() ;
        

for (int i = 0 ; i < n ; i++ )
{
    Mpp[nums[i]] ++ ;

}

while(k != 0)
{

    int Max_Occurance = 0 ;
        int Element = 0 ;

        
    for(auto pair : Mpp)
    {

        if(pair.second > Max_Occurance)
        {
Max_Occurance = pair.second ;
Element = pair.first ;
        }

    }

ans.push_back(Element) ;

Mpp.erase(Element);

k-- ;

}


return ans ; 

    }
};
