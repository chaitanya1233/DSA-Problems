class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        double windowSum = 0;
        int n = arr.size();
        int count = 0;
        for(int i = 0;i<k;i++)
        {
            windowSum  += arr[i];
        }
        if(windowSum / k >= threshold)
        {
            count++;
        }

        for(int i = k;i<arr.size();i++)
        {
            windowSum -= arr[i-k];
            windowSum += arr[i];

            if(windowSum / k >= threshold)
            {
                count++;
            }
        }  
        return count; 
    }
};