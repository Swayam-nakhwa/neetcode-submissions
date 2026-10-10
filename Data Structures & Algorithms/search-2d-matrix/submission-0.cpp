class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
      int ans = false ;

      vector < int >  vec ;


      for ( auto vec : matrix )
      {
        int n = vec.size() ;

        int low = 0 ;

        int high = n - 1 ;

        while( low <= high )
        {


int mid = ( low + high ) / 2 ;

if(vec[mid] == target)
{
    return true ;
}

else if (vec[mid] < target)
{
    low = mid + 1;
}

else {
    high = mid - 1 ;
}


        }

      }

      return ans ;
    }
};
