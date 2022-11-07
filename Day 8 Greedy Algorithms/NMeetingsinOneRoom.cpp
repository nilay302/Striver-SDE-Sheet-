#include <bits/stdc++.h>
using namespace std;


int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {

        v.push_back({end[i], start[i]});
    }

    sort(v.begin(), v.end());

    int m = v[0].first;

    int c = 1;

    for (int i = 1; i < n; i++)
    {

        if (v[i].second > m)
        {

            c++;

            m = v[i].first;
        }
    }

    return c;
}