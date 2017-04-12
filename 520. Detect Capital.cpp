class Solution {
public:
    bool detectCapitalUse(string word) {
        int size = word.size(), count = 0;
        if(size <= 1)   return true;
        for(int i = 1; i < size; i++){
            if('a' <= word[i] && word[i] <= 'z') count++;
            else count += 2;
        }
        if(count == size - 1) return true;
        else if(count / 2 == size - 1){
            if('A' <= word[0] && word[0] <= 'Z')    return true;
            return false;
        }
        return false;
    }
};
