class Solution {
public:
    
    bool static cmp(pair<int,int>&p,pair<int,int>&q)
    {
        if(p.second<q.second)
            return true;
        else if(q.second<p.second)
            return false;
        else
        {
            if(p.second==q.second)
                return p.first<q.first;       
        }
        return false;
    }
    vector<int> sortByBits(vector<int>& arr)
    {
        
        vector<pair<int,int>>a;
        for(int i=0;i<arr.size();i++)
        {
            int x=__builtin_popcount(arr[i]);
            a.push_back({arr[i],x});
        }
        
        sort(a.begin(),a.end(),cmp);
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=a[i].first;
        }
        return arr;
    }
};
//code by Aditya Koul_1018430_GEHU_DDN
