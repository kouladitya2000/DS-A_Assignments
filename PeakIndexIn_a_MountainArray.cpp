class Solution {
public:
        int peakIndexInMountainArray(vector<int>& arr) {
        int max=*max_element(arr.begin(),arr.end());
        auto it = find(arr.begin(),arr.end(),max);
        int index;
        if(it!=arr.end())
        {
            index = distance(arr.begin(),it);
        }
        return index;
    }
};
//code by Aditya Koul_1018430_GEHU_DDN
