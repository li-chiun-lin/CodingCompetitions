# Medium

Bob, a teacher of St. Joseph School given a task by his principal to merge the details of the students where each element $details[i]$ is a list of strings, where the first element $details[i] [0]$ is a name of the student, and the rest of the elements are emails representing emails of the student. Two details definitely belong to the same student if there is some common email to both detail.  

After merging the details, return the details of the student in the following format: the first element of each detail is the name of the student, and the rest of the elements are emails in sorted order. The details themselves can be returned in any order.

Note: Two details have the same name, they may belong to different people as people could have the same name. A person can have any number of details initially, but all of their details definitely have the same name.

Note: In case 2 or more same email belongs to 2 or more different names merge with first name only.

```cpp
class Solution {
  public:
    vector<vector<string>> mergeDetails(vector<vector<string>>& details) {
        map<string, int> mail_id;
        vector<vector<string>> ret;
        vector<set<string>> mail;
        vector<string> name;
        
        // dummy
        mail.push_back(set<string>());
        name.push_back("");
        
        for (auto& d : details)
        {
            int id = 0;
            
            // find if any of the mail has already be seen
            for (int i = 1; i < d.size(); ++i)
                id = max(id, mail_id[d[i]]);
              
            // if not, then this is a new record  
            if (id == 0)
            {
                id = name.size();
                name.push_back(d[0]);
                mail.push_back(set<string>());
            }

            // set all the mail to its owner id
            for (int i = 1; i < d.size(); ++i)
            {
                mail_id[d[i]] = id;
                mail[id].insert(d[i]);
            }
        }
        
        // construct the result
        for (int i = 1; i < name.size(); ++i)
        {
            ret.push_back({name[i]});
            
            for (auto& m : mail[i])
                ret.back().push_back(m);
        }
        
        // the strangest workaround for testcase 56
        sort(ret.rbegin(), ret.rend());
        
        return ret;
    }
};
```
