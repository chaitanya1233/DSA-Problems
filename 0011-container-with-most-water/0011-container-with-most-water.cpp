class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int high = n -1;
        int max_area = INT_MIN;
        int low = 0;
        while(low < high)
        {
            int area = min(height[low], height[high]) * (high - low);
            max_area = max(area,max_area);

            if(height[low] < height[high])
            {
               low++; 
            }
            else
            {
                high--;
            }
        }
        return max_area;
    }
};