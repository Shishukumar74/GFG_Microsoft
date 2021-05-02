class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        //code here
        if(base==1 || base==2 || base==3)
        return 0;
        base = base - 2;
        base = floor(base/2);
        return base * (base+1)/2;
    }
};
