class Solution {
public:
    string reverseStr(string s, int k) {
        int count = 0;
        int size = s.size();
        if(size <= k){
            myReverse(s, 0, size);
            return s;
        }
        int i = 0;
        for( ; i + k < size; i += k){
            if(count % 2 == 0)   myReverse(s, i, i + k);
            count++;
        }
        if(i + k >= size && count % 2 == 0) myReverse(s, i, size);
        return s;
    }
    
    void myReverse(string &s, int lo, int hi){
        for(int i = lo; i < lo + (hi - lo) / 2; i++)    swap(s[i], s[lo + hi - 1 - i]);
    }
};
