class Solution{
    public:
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        unordered_set<int> s1;
        int count = 0;
    	for(int i=0;i<n;i++)
    		s1.insert(a[i]);
    	for(int i=0;i<m;i++)
    	{
    		if(s1.find(b[i]) != s1.end()){
    		    s1.erase(b[i]);
    		    count++;
    		}
    	}
    	return count;
    }
    
};

