class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> temp;

        for(int i = 0;  i < n; i++){
            temp.push_back({score[i], i});
        }

        sort(temp.rbegin(), temp.rend());

        vector<string> result(n);
        for(int i =0; i < n; i++){
            if(i == 0){
                result[temp[i].second] = "Gold Medal";
            }
            else if( i == 1){
                result[temp[i].second] = "Silver Medal";
            }
            else if( i == 2){
                result[temp[i].second] = "Bronze Medal";
            }
            else{
                result[temp[i].second] = to_string(i+1);
            }
        }
        return result;
    }
};