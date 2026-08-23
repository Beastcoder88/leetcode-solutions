class Solution {
public:
    bool prime(int n){
        if(n<2) return false;
        for(int i = 2; i < n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int p = 0;
        for(int i = left; i <= right; i++){
            int count = 0;
            int temp = i;
            while(temp!=0){
                temp = temp&(temp-1);
                count++;
            }
            if(prime(count)){
                p++;
            }
        }
        return p;
    }
};