class Solution {
public:
    int arrangeCoins(int n) {
        int rows=0;;
        int coins=1;
        while(n>=coins){
            n-=coins;
            rows++;
            coins++;
        }
        return rows;
    }
};