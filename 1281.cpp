class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod =1,sum=0;
        while(n!=0)
        {
            int extractedDigit = n%10;

            prod = prod * extractedDigit ;
            sum = sum + extractedDigit ;
            
            n = n/10;

        }
        int answer = prod - sum ;
        return answer;
    }
};