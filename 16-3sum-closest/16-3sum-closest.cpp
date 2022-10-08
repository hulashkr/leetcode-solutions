class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target){
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int sum=arr[0]+arr[1]+arr[2];
        for(int i=0; i<n-2; i++){
            int j=i+1,k=n-1;
            while(j<k){
                int curr_sum=arr[i]+arr[j]+arr[k];
                if(abs(curr_sum-target)<abs(sum-target)) sum=curr_sum;
                if(curr_sum<target) j++;
                else if(curr_sum>target) k--;
                else return target;
            }
        }
        return sum;
    }
    
//     ****************BRUTE FORCE******************
//     int threeSumClosest(vector<int>& arr, int target) {
//         vector<int> ans;
//         int n=arr.size();
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k=j+1; k<n; k++){
//                     ans.push_back(arr[i]+arr[j]+arr[k]);
//                 }
//             }
//         }
//         for(int i=0; i<ans.size(); i++){
//             cout<<ans[i]<<" % ";
//         }
//         cout<<endl;
//         int temp=abs(ans[0]-target),res=ans[0];
//         cout<<temp<<" temp ";
//         for(int i=1; i<ans.size(); i++){
            
//             if(temp>=abs(ans[i]-target)){
//                 temp=abs(ans[i]-target);
//                 res=ans[i];
//             }
//             cout<<" R : "<<res<<" T : "<<temp;
//         }
//         return res;
//     }
};