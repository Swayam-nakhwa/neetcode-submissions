class Solution {
public:
    bool isAnagram(string s, string t) {
      map <char , int > Mpp_of_s ;
map <char , int > Mpp_of_t ;

if(s.length() != t.length())
{
    return false ;
}

else{
    for(int i = 0 ; i  < s.length() ; i++ ) {
        Mpp_of_s[s[i]] ++ ;

    }

      for(int i = 0 ; i  < t.length() ; i++ ) {
        Mpp_of_t[t[i]] ++ ;

    }

if(Mpp_of_t == Mpp_of_s)
{
    return true ;
}



}


return false ;
    }
};
