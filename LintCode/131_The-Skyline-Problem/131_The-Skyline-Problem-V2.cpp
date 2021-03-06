struct Node {
    int time;
    int type; // 1: start, 2: end
    int height;
    Node(int tm = 0, int tp = 0, int ht = 0) : time(tm), type(tp), height(ht) {}
    
    //sorting, 
    //1) if two time are the same, but different time type, the starting time is ahead of ending time
    //2) if two time are the same, and are both starting time, then higher building first
    //3) if two time are the same, and are both ending time, then lower building first
    //4) if two time are different, smaller time first
    bool operator < (const Node & n) {
        if (this->time == n.time) {
            if (this->type != n.type) {
                return this->type == 1; 
            } else {
                return (this->type == 1) ? this->height >= n.height : this->height < n.height;
            } 
        } else {
            return this->time < n.time;
        }
    }
};

class Solution {
public:
    /**
     * @param buildings: A list of lists of integers
     * @return: Find the outline of those buildings
     */
    vector<vector<int>> buildingOutline(vector<vector<int>> &buildings) {
        vector<pair<int, int>> record;
        vector<Node> heights;
        
        multiset<int> m;
        int preHeight = 0, curHeight = 0;
        vector<vector<int>> res;

        for (auto &building : buildings) {
            heights.push_back(Node(building[0], 1, building[2]));
            heights.push_back(Node(building[1], 2, building[2]));
        }

        sort(heights.begin(), heights.end());
        m.insert(0);  // in case multiset is empty

        for (auto &height : heights) {

            if (height.type == 1) m.insert(height.height); //if starting border, insert the height into multiset
            else m.erase(m.find(height.height)); //if ending border, erase one of the height from multiset

            curHeight = *m.rbegin(); //the highest height in multiset

            if (curHeight != preHeight) {
                record.push_back({height.time, curHeight});
                preHeight = curHeight;
            }
        }

        int n = record.size();

        for (int i = 1; i < n; ++i) {
            if (record[i - 1].second > 0) //do not consider the height 0 case
                res.push_back({record[i - 1].first, record[i].first, record[i - 1].second});
        }

        return res;
    }

};