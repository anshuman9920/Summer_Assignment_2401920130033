class Solution {
public:
    int maxArea(vector<int>& height) {
        //in optimal approach the tc is O(n)
        int mw = 0 ;
        int lp = 0 , rp=height.size() -1;
        while(lp < rp){
            int wi=rp-lp;
            int h=min(height[lp],height[rp]);
            int cw = wi*h;
            mw = max(mw,cw);
            height[lp] < height[rp]?lp++:rp--;
        }
        return mw;
    }
};