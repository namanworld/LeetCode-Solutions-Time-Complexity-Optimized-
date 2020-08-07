class LRUCache {
    list<int> dq;
    map<int, list<int>::iterator> mp;
    map<int, int> values;
    const int maxSize;
public:
    LRUCache(int capacity) : maxSize(capacity) {
        
    }
    
    int get(int key) {
        if(mp.count(key)) {
            dq.erase(mp[key]);
            dq.push_front(key);
            mp[key] = dq.begin();
            return values[*mp[key]];
        }
        else return -1;
    }
    
    void put(int key, int value) {
        if(mp.count(key)==0 && dq.size()==maxSize){
            int k = dq.back();
            dq.pop_back();
            mp.erase(k);
            values.erase(k);
        }
        else if(mp.count(key) > 0) dq.erase(mp[key]);
        dq.push_front(key);
        mp[key] = dq.begin();
        values[key] = value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
