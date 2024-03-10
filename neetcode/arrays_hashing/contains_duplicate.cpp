class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map <int, int> map;

        for (int i = 0; i < nums.size(); i++)
            map[nums[i]]++;

        for(auto i : map) {
            if(i.second > 1) 
                return true;
        }
        
        return false;
    }
};

/*a lil faster*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> myHashSet;

        for (auto i : nums) {
            if (myHashSet.find(i) != myHashSet.end())
                return true;
            myHashSet.insert(i);
        }
        return false;
    }
};
