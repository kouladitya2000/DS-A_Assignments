class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>um;
        int count=0;
        
        for(int i=0;i<allowed.size();i++)
        {
            um.insert(allowed[i]);
        }
        
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
            for(int j=0;j<words[i].size();j++)
            {
                if(um.find(words[i][j])==um.end())
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                count+=1;
        }
        return count;
    }
};
//code by Aditya Koul_1018430_GEHU_DDN
