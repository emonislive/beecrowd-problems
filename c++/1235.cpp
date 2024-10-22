#include <iostream>
using namespace std;
#define endl '\n'

void solve(string msg)
{
    string reversedMsg;
    int start, end, mid;
    start = 0;
    end = msg.length() - 1;
    mid = start + (end - start) / 2;    // why not use mid = (start + end) / 2, because it overflows.
                                    
    for (int i = mid; i >= 0; i--)      // <-------------- (desc to asc)
        reversedMsg.push_back(msg[i]);  // start______mid  
    for (int i = end; i > mid; i--)     // <-------------- (desc to asc)
        reversedMsg.push_back(msg[i]);  // mid+1________end

    cout << reversedMsg << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase; 
    cin.ignore();    // Ignore the newline character after reading testCase

    string msg;
    while (testCase--)
    {
        getline(cin, msg); // Read the whole line
        solve(msg); 
    }

    return 0;
}
