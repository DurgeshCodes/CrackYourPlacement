void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        bool row = false,column = false;
        for(int i=0;i<n;i++){
            if(a[i][0]==0){
                column = true;break;
            }
        }
        for(int j=0;j<m;j++){
            if(a[0][j]==0){
                row = true;break;
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]==0){
                    a[0][j]=0;
                    a[i][0]=0;
                }
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][0]==0 || a[0][j]==0){
                    a[i][j]=0;
                }
            }
        }
        
        if(row){
            for(int i=0;i<m;i++){
                a[0][i]=0;
            }
        }
        if(column){
            for(int i=0;i<n;i++){
                a[i][0]=0;
            }
        }
    }