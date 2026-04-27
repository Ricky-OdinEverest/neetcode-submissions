class FirstUnique {
private:
    std::list<int> setQueue;
    std::unordered_map<int, std::list<int>::iterator> queuePosition;
    std::unordered_map<int, bool> isUnique;
    
public:
    FirstUnique(vector<int>& nums) {
        for (int num : nums) {
            this->add(num);
        }
    }
    
    int showFirstUnique() {
        // If the queue contains values, we need to get the first one from it.
        // We can do this by making an iterator, and getting its first item.
        if (!setQueue.empty()) {
            return setQueue.front();
        }
        return -1;
    }
    
    void add(int value) {
        // Case 1: This value is not yet in the data structure.
        // It should be ADDED.
        if (isUnique.find(value) == isUnique.end()) {
            isUnique[value] = true;
            setQueue.push_back(value);
            queuePosition[value] = std::prev(setQueue.end());
        // Case 2: This value has been seen once, so is now becoming
        // non-unique. It should be REMOVED.
        } else if (isUnique[value]) {
            isUnique[value] = false;
            setQueue.erase(queuePosition[value]);
            queuePosition.erase(value);
        }
    }
};