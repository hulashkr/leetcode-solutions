class MyCalendarThree {
public:
    map<int,int> mp;
    int mxcnt=0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int cnt=0;
        for(auto it : mp){
            cnt += it.second;
            mxcnt = max(mxcnt,cnt);
        }
        return mxcnt;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */