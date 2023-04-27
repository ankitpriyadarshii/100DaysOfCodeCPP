//Defuse the Bomb

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> res;
        int n=code.size();
        if (k > 0)
        {
            for (int i = 0; i < n; i++)
            {
                int sum = 0, j = i + 1, temp = 0;
                while (temp++ != k)
                    sum += code[j++ % n];
                res.push_back(sum);
            }
        }
        else if (k < 0)
        {
            for (int i = 0; i < n; i++)
            {
                int sum = 0, j = i + k + n, temp = k;
                while (temp++ != 0)
                    sum += code[j++ % n];
                res.push_back(sum);
            }
        }
        else
            for (int i = 0; i < n; i++)
                res.push_back(0);
        return res;

        }
};