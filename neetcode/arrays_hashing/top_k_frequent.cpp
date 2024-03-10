// Max Heap Approach


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        
        vector<int> res;
        // pair<first, second>: first is frequency,  second is number
        priority_queue<pair<int,int>> pq; 
        for(auto it = map.begin(); it != map.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > (int)map.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};

// Bucket Sort Approach


std::unordered_map<int, int> map;
        
        for(int i : nums){
            map[i]++;
        }
        
        std::vector<std::vector<int>> bucket(nums.size() + 1);
        
        for(auto& entry : map){
            int freq = entry.second;
            bucket[freq].push_back(entry.first);
        }
        
        std::vector<int> res;
        int index = 0;
        for(int i = bucket.size() - 1; i >= 0; i--){
            if(!bucket[i].empty()){
                for(int val : bucket[i]){
                    res.push_back(val);
                    if(++index == k) return res;
                }
            }
        }
        return res;
    }