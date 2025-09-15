class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0;
        int temp = 0;
        vector<bool> check(magazine.size(), false);
        while(i < ransomNote.size()){
            for(int j = 0; j < magazine.size(); j++){
                if(ransomNote[i] == magazine[j] && check[j] == false){
                    temp++;
                    check[j] = true;
                    break;
                }
            }
            i++;
        }
        return temp == ransomNote.size();
    }
};