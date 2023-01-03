class Solution {
public:
    string getHint(string secret, string guess) {
        
        int bull= 0;
        int cow = 0;
        
        unordered_map<int,int> um1,um2;
        
        for(int i=0;i<secret.size();i++){
            
            if(secret[i]==guess[i]) bull++;
            else{
                um1[secret[i]]++;
                um2[guess[i]]++;
            }
        }
        
        for(char c='0';c<='9';c++){
            cow +=min(um1[c],um2[c]);
            // same digit sey agar guess aur secret bana 
            // hai toh min 1 add krte krte map sey 3 ho gya 1st test case
            // alag alag digit sey hai secret aur guess toh 
            // min(0,1) add hoga mtlb 0 add hoga baar baar 2nd test case.
        }
        
        return to_string(bull) + 'A'+to_string(cow)+'B';
    }
};