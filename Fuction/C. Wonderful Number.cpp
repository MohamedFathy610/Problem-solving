
#include <iostream>
#include <vector>
#include <string>


using namespace std;

bool odd(long long n) {
    return (n %2 ==1 ? true :false );
}

vector <int > binary(long long n)
{
    vector <int > num;
    while (n != 0)
    {
        num.push_back(n % 2);
        n /= 2;
    }
    return num;
}

bool paillondorm(vector <int> num)
{
    int n = num.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (num[i] != num[n - i - 1])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
   
    long long n;
    cin >> n;
    if (odd(n) && paillondorm(binary(n)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

