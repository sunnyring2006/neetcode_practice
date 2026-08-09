class Solution {
public:
    int digitSquare(int n){
       int sum = 0;

    while(n){
        int rem = n % 10;
        sum += rem * rem;
        n /= 10;
    }

    return sum;
    }
    bool isHappy(int n) {
        int k=digitSquare(n);

       unordered_set<int> seen;

       while(n != 1 && !seen.count(n)){
       seen.insert(n);
       n = digitSquare(n);
    }
      return n==1;
    }
};
