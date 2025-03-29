#include <stdio.h>

// Recursive function to calculate the number of ways to reach step n
int countWays(int n) {
    if (n == 0) 
        return 1; // Base case: one way to stay at the ground
    if (n < 0) 
        return 0; // No way to go below 0 steps
    return countWays(n - 1) + countWays(n - 2); // Recursive case: 1-step or 2-steps
}

int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);    
    
    int result = countWays(n);  // from 1 stair only two option available jump 1 or jump twice at once when n reach do nothing
    printf("Number of ways to reach %d stairs: %d\n", n, result);
    
    return 0;
}
