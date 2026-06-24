#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {1,2,1,0,1,1,0};

    int n = 7;
    int target = 4;

    int left = 0;
    int sum = 0;
    int ans = INT_MIN;

    for(int right = 0; right < n; right++) {

        sum += arr[right];
        ans = max(ans, right - left + 1);

        while(sum >target) {
            sum -= arr[left];
            left++;
        }
    }

    cout << ans;

    return 0;
}