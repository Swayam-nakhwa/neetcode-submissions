#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
 
unordered_map < string , vector<string> > Intermidiate ;

for ( const auto& s : strs )

{
    vector <int> CodedArray(26 , 0 );  
    /*
size = 26 and all values are zeroes because there are only lower case in the question
and only 26 lowercase alphabets are there 

    */
    
    for( char c : s )
    
    {
CodedArray[c - 'a'] ++ ; // filling the code of each key 


    }

    string key = to_string(CodedArray[0]);

    for(int i = 1  ; i < 26 ; ++i)
    {
        key = key +  ',' + to_string(CodedArray[i]);
    }

    Intermidiate[key].push_back(s);




}

vector < vector<string> > FinalResult ;

for( const auto& pair : Intermidiate)
{
    FinalResult.push_back(pair.second);
}

return FinalResult ;


    }
};
