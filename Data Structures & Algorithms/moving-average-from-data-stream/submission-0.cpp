class MovingAverage {

private:
    vector<double> vec;
    int maxSize = 0;
    int count = 0;
public:
    MovingAverage(int size) {

      maxSize = size;
        
    }
    
    double next(int val) 
    {
        if(count < maxSize) {count++;}
         vec.push_back((double)val);
        if(count == 1) {return (double)val;}

       
        int end = vec.size() - 1;
        int start = end - (count - 1);

        double curSum = 0;

        for(int i = start; i <= end; i++)
        {
            curSum += vec[i];
        }

        return curSum / count;
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
