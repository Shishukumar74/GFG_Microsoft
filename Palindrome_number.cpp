// Check if the binary representation of a number is palindrome or not

class Solution{
public:
    int isPallindrome(long long int n){
        unsigned rev = 0;
        unsigned k = n;
        while (k)
      {
    
        rev = (rev << 1) | (k & 1);
        k = k >> 1;    
      }
        return n == rev;
    }
};
