class MedianFinder {
    vector<int> v;
public:
    /** initialize your data structure here. */
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(v.empty()) v.emplace_back(num);
        else v.insert(lower_bound(v.begin(), v.end(), num), num);
    }
    
    double findMedian() {
        int n = v.size();
        return (n & 1) ? v[n/2] : (v[n/2] + v[n/2-1])*0.5;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

USING PRIORITY QUEUE:
class MedianFinder {
    priority_queue<int> lo;
    priority_queue<int, vector<int>, greater<int> >  hi;
public:
    /** initialize your data structure here. */
    MedianFinder() {
    }
    
    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top());
        lo.pop();
        
        if(lo.size() < hi.size()){
            lo.push(hi.top());
            hi.pop();
        }
    }
    
    double findMedian() {
        return lo.size() > hi.size() ? lo.top() : (lo.top() + hi.top())*0.5;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
