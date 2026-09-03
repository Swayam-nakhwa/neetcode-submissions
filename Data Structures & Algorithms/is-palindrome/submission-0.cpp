#include<bits/stdc++.h>
using namespace std ;

/* 
1. given s string 

2. remove all the non -alphanumeric characters by isalnum function for ex = " ? , ! "

3. store the lower case of all character (or all character in uppercase your wish)
(make the s_new case insensitive )


4. put i in the starting of s_new and j at the ending of s_new 
and if they match do nothing and if they dont make ans as false

and after that j--  untill i & j  reaches n/2 

5. return the ans 
*/

class Solution {
public:
    bool isPalindrome(string s) {

    

        string s_new ; 

           

int ans = true ;



for(auto c : s){
    if( !isalnum (c) )
    {
        continue ; 
    }

    else{
        s_new.push_back( tolower(c) ); 
    }
}

 int n = s_new.size() ;

 int j = n - 1 ;



for(int i = 0 ; i < n/2 ; i++ )
{




if(s_new[i] == s_new[j])
{


}

else{
ans = false  ;
}

j-- ;

}

return ans ; 
    }
};
