class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int maxarea=0;
        int i=0;
        int j=height.size()-1;
        int area=0;
        while(i<j)
        {
            int h= min(height[i],height[j]);
            area = h*(j-i);
            maxarea = max(maxarea,area);
            if(height[i]<=height[j])
                i++;
            else j--;
        }
        
        return maxarea;
    }
};
