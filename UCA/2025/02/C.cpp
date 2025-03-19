#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
    int n;
    vector<int> st, lazy; // Segment tree and lazy propagation array
    
    int left(int p) { return p << 1; }
    int right(int p) { return (p << 1) | 1; }
    
    void build(int p, int L, int R, const vector<int> &A) {
        if (L == R) {
            st[p] = A[L]; // Store the number of "ON" lanterns
        } else {
            int mid = (L + R) / 2;
            build(left(p), L, mid, A);
            build(right(p), mid + 1, R, A);
            st[p] = st[left(p)] + st[right(p)];
        }
    }
    
    void propagate(int p, int L, int R) {
        if (lazy[p] == 1) { // Toggle range
            st[p] = (R - L + 1) - st[p]; // Flip count of "ON" lanterns
            if (L != R) { // Push lazy to children
                lazy[left(p)] ^= 1;
                lazy[right(p)] ^= 1;
            }
            lazy[p] = 0; // Clear lazy flag
        }
    }

    void update(int p, int L, int R, int i, int j) {
        propagate(p, L, R);
        if (i > R || j < L) return;
        if (L >= i && R <= j) {
            lazy[p] ^= 1; // Mark lazy toggle
            propagate(p, L, R);
        } else {
            int mid = (L + R) / 2;
            update(left(p), L, mid, i, j);
            update(right(p), mid + 1, R, i, j);
            st[p] = st[left(p)] + st[right(p)];
        }
    }

    int query(int p, int L, int R, int i, int j) {
        propagate(p, L, R);
        if (i > R || j < L) return 0;
        if (L >= i && R <= j) return st[p];
        int mid = (L + R) / 2;
        return query(left(p), L, mid, i, j) + query(right(p), mid + 1, R, i, j);
    }

public:
    SegmentTree(const vector<int> &A) {
        n = A.size();
        st.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
        build(1, 0, n - 1, A);
    }

    void toggle(int i, int j) { update(1, 0, n - 1, i, j); }
    int countOn(int i, int j) { return query(1, 0, n - 1, i, j); }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<int> initial(n);
    vector<int> points(n);
    
    for (int i = 0; i < n; i++) {
        int state, p;
        cin >> state >> p;
        initial[i] = (state == 1); // Only count ON lanterns
        points[i] = p;
    }
    
    SegmentTree st(initial);
    
    long long totalPoints = accumulate(points.begin(), points.end(), 0LL);
    
    while (m--) {
        string type;
        cin >> type;
        
        if (type == "W") { // Toggle range
            int l, r;
            cin >> l >> r;
            st.toggle(l, r);
        } else if (type == "C") { // Score event
            int qj;
            cin >> qj;
            int countOn = st.countOn(0, n - 1);
            totalPoints += (long long)countOn * qj;
        }
    }

    cout << totalPoints << "\n";
    return 0;
}
