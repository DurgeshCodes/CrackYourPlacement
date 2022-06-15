vector<vector<string>> groupAnagrams(vector<string>& a) {
        unordered_map<string,vector<string>> mp;
        
        for(auto &e : a){
            string wrd = e;
            sort(wrd.begin(),wrd.end());
            
            if(mp.find(wrd) != mp.end()){
                mp[wrd].push_back(e);
            }
            else{
                mp.insert( {wrd,{e}} );
            }
        }
        vector<vector<string>> res;
        for(auto &it : mp){
            res.push_back(it.second);
        }
        
        return res;
    }