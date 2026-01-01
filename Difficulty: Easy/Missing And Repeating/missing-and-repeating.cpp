class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();

        long long nSum = n * (n + 1) / 2;
        long long nSqr = n * (n + 1) * (2 * n + 1) / 6;

        long long arrSum = 0, arrSqr = 0;
        for (int x : arr) {
            arrSum += x;
            arrSqr += 1LL * x * x;
        }

        long long diff1 = nSum - arrSum;   // missing - repeating
        long long diff2 = nSqr - arrSqr;   // missing^2 - repeating^2

        long long missing = (diff1 + diff2 / diff1) / 2;
        long long repeating = missing - diff1;

        return {(int)repeating, (int)missing};
    }
};