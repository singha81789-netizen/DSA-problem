class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
    //     sort(interval.begin() , interval.end());

    //   vector<vector<int>> result;
    //     result.push_back(interval[0]);
       
    //     for(int i = 1; i < interval.size(); i++){
    //         int result_end = result.back()[1];
    //         int curr_start = interval[i][0];
    //         int curr_end = interval[i][1];

    //         if(curr_start <= result_end){
    //             result.back()[1] = max(result_end , curr_end);
    //         }
    //         else{
    //             result.push_back(interval[i]);
    //         }

    //     }
    //     return result;
    sort(interval.begin(),interval.end());

    vector<vector<int>> result;
    result.push_back(interval[0]);

    for(int i=1;i<interval.size();i++){

        int result_end = result.back()[1];
        int curr_start = interval[i][0];
        int curr_end = interval[i][1];

        if(curr_start <= result_end){
           result.back()[1]=max(curr_end,result_end);


        }else{
            result.push_back(interval[i]);
        }
    }
    return result;

    }
};
