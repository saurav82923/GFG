class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max=0,count=0;
	    int index=0;
	    for(int i=0;i<n;i++){
	         count=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1)
	                count++;
	        }
	        if(max<count){
	            max=count;
	            index=i;
	        }
	    }
	    
	    if(max==0){
	        return -1;
	    }
	    else
	        return index;
	}

};