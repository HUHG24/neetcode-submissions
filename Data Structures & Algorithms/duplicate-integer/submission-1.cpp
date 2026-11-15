class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       vector<int> seen;
       for(int x:nums) {
            if(count(seen.begin(), seen.end(), x)>0)  return true;
            seen.push_back(x);
       }
       return false;
    }
};