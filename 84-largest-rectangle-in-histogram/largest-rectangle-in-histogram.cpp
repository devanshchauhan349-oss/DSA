class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector<int> nse(n);
        vector<int> pse(n);

        stack<int> s;

        for(int i=0; i<n; i++){
            while(!s.empty() && h[s.top()] >= h[i]){
                s.pop();
            }
            if ( s.empty())
                pse[i] = -1;
            else 
                pse[i] = s.top();
            
            s.push(i);
        }

            while ( !s.empty()) s.pop();

        for(int i = n-1; i>=0; i--){
            while(!s.empty() && h[s.top()] >= h[i]){
                s.pop();
            }
            if (s.empty())
                nse[i] = n;
            else
                nse[i] = s.top();

            s.push(i);
        }
        int MaxArea = 0;

        for(int i=0; i < n; i++){
            int width = nse[i] - pse[i] -1;
            int area = h[i] * width;

            MaxArea = max(MaxArea , area);
        }
        return MaxArea;
    }
};
