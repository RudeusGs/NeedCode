class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
         set<string> se;
        for(auto &email : emails){
            int pos = email.find('@');
            string local = email.substr(0, pos);
            string domain = email.substr(pos);
            string cleaned = "";
            for(char c : local){
                if (c == '+') break;
                if (c == '.') continue;
                cleaned += c;
            }
            se.insert(cleaned + domain);
        }
        return se.size();
    }
};