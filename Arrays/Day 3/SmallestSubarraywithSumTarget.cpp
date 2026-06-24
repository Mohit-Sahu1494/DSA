#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {2,3,1,2,4,3};

    int n = 6;
    int target = 7;

    int left = 0;
    int sum = 0;
    int ans = INT_MAX;

    for(int right = 0; right < n; right++) {

        sum += arr[right];

        while(sum >= target) {

            ans = min(ans, right - left + 1);

            sum -= arr[left];
            left++;
        }
    }

    cout << ans;

    return 0;
}