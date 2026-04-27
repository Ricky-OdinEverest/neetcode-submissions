class FirstUnique {

    queue<int> q;
    unordered_map<int, bool> isUnique;

public:
    FirstUnique(vector<int>& nums) {

        for(int num : nums)
        {
            this->add(num);
        }
        
    }
    
    int showFirstUnique() {

        while(!q.empty() && !isUnique[q.front()])
        {
            q.pop();
        }

              if (!q.empty()) {
            return q.front();
        }
        
        return -1;



        
    }
    
    void add(int value) {

        if(isUnique.find(value) == isUnique.end())
        {
            isUnique[value] = true;
            q.push(value);
        }
        else
        {
            isUnique[value] = false;
        }

        
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
