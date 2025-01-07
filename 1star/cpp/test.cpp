#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int mask;
        cin >> mask;  // Initialize with the first element
        for (int i = 1; i < N; i++) {
            int num;
            cin >> num;
            mask &= num;  // Bitwise AND with each element to find the mask
        }
        
        // Count the number of 0 bits in mask
        int zeroBits = 0;
        for (int i = 0; i < 30; i++) {  // As Ai < 2^30, we only check 30 bits
            if ((mask & (1 << i)) == 0) {
                zeroBits++;
            }
        }
        
        // Number of possible values for X
        int result = (1 << zeroBits) - 1;  // 2^zeroBits - 1
        
        cout << result << endl;
    }
    
    return 0;
}
