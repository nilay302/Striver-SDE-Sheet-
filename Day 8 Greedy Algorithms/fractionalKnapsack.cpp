#include <bits/stdc++.h>
using namespace std;
struct Item
{
    int value;
    int weight;
};
bool compare(Item &a, Item &b)
{
    return (((double)a.value / (double)a.weight) > ((double)b.value / (double)b.weight));
}
// Function to get the maximum total value in the knapsack.
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    sort(arr, arr + n, compare);
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (W == 0)
            break;
        if (W >= arr[i].weight)
        {
            ans += (double)arr[i].value;
            W -= arr[i].weight;
        }
        else
        {
            ans += (double)W * ((double)arr[i].value / (double)arr[i].weight);
            W = 0;
        }
    }
    return ans;
}