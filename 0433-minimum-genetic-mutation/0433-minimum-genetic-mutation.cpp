class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string>q;
        q.push(start);
        unordered_set<string>vis;
        vis.insert(start);
        int cnt=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0; i<n; i++){
                string node=q.front();
                q.pop();
                if(node == end){
                    return cnt;
                }
                for(char ch :"ACGT"){
                    for(int j=0; j<node.size(); j++){
                        string adjNode = node;
                        adjNode[j] = ch;
                       if(!vis.count(adjNode) &&                  find(bank.begin(),bank.end(),adjNode)!= bank.end())
            {
                q.push(adjNode);
                vis.insert(adjNode);
            }
                    }
                }
            }
             cnt++;
        }
       return -1; 
    }
};