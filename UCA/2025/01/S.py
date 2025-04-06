import sys
import bisect

def max_fun_points(waves):
    # Sort waves by time
    waves.sort()
    n = len(waves)

    # Extract only the times for binary search
    times = [wave[0] for wave in waves]

    # Initialize DP array
    dp = [0] * (n + 1)

    for i in range(1, n + 1):
        mi, fi, wi = waves[i - 1]
        # We want to find the latest wave that ends before mi
        # i.e., a wave ending at or before mi - wi
        last_allowed_time = mi - wi
        j = bisect.bisect_right(times, last_allowed_time)
        # Option 1: skip this wave
        # Option 2: take this wave + best previous non-conflicting
        dp[i] = max(dp[i - 1], dp[j] + fi)

    return dp[n]

# Input reading
def main():
    input = sys.stdin.read
    data = input().split()
    
    n = int(data[0])
    waves = []
    index = 1
    for _ in range(n):
        m = int(data[index])
        f = int(data[index + 1])
        w = int(data[index + 2])
        waves.append((m, f, w))
        index += 3

    print(max_fun_points(waves))

if __name__ == "__main__":
    main()
