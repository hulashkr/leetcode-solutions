class Solution {
public:
    char toLowercase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')) return ch;
        return ch-'A'+'a';
    }    
    bool isPalindrome(string s) {
        string temp="";
        for(auto ch : s){
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                temp.push_back(ch);
            }
        }
        for(int i=0; i<temp.size(); i++){
            temp[i]=toLowercase(temp[i]);
        }
        int st=0,e=temp.size()-1;
        while(st<e){
            if(temp[st]!=temp[e]) return false;
            else{
                st++;
                e--;
            }
        }
        return true;
    }
};