**Big-O / complexity**

* Time: O(1), O(log n), O(n), O(n log n), O(n²), O(2^n), ...
* Space: count additional memory excluding input unless specified.

**Essential modern C++ features for DSA**

* `std::vector`, `std::string`, `std::array`, `std::deque`, `std::list`, `std::stack`, `std::queue`, `std::priority_queue`, `std::unordered_map`, `std::map`, `std::set`, `std::unordered_set`.

* **Iterators**, range-based `for`, structured bindings: `for (auto & [k,v] : m)`.
* **Lambdas** for custom comparators.
* **Templates** for generic DS.
* **Move semantics**, `emplace_back`, `reserve` (avoid repeated reallocations).
* Fast IO: `ios::sync_with_stdio(false); cin.tie(nullptr);`
* Use `long long` for >32-bit integers. Use `int64_t` for clarity.

---

# 2) Study roadmap (recommended order)

1. Arrays & Strings — two-pointer, sliding window.
2. Linked Lists — pointers, reversing, cycle detection.
3. Stacks & Queues — monotonic stack patterns.
4. Hash tables & sets — frequency counting, maps.
5. Sorting, Binary Search.
6. Trees (BST, binary tree) + traversals, LCA.
7. Heaps & Priority Queues.
8. Graphs — adjacency, BFS/DFS, shortest paths.
9. Greedy & Greedy proof techniques.
10. Dynamic Programming — patterns, memoization.
11. Advanced DS: Fenwick (BIT), Segment Trees (lazy), Disjoint Set Union (DSU).
12. Strings: Trie, KMP, Z, suffix arrays.
13. Complexity/Optimization, bit tricks, math, geometry.

---

# 3) Common templates / utilities (copy/paste)

```cpp
// Fast template
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ...
}
```

**Binary search (template)**

```cpp
// find first index i in [l,r) such that pred(i) is true
long long binary_search_first(long long l, long long r, function<bool(long long)> pred) {
    while (l < r) {
        long long m = l + (r - l) / 2;
        if (pred(m)) r = m;
        else l = m + 1;
    }
    return l;
}
```

---

# 4) Core data structures + implementations (with complexity)

### Arrays & Strings

* Access O(1), insert/delete O(n) (except at end if using vector::push_back).
* Useful algorithms: two pointers, sliding window, prefix sums.

### Singly Linked List — reverse & detect cycle

```cpp
struct Node {
    int val;
    Node* next;
    Node(int v): val(v), next(nullptr) {}
};
// reverse list: O(n) time, O(1) space
Node* reverse(Node* head) {
    Node *prev = nullptr, *cur = head;
    while (cur) {
        Node* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}
// detect cycle: Floyd's tortoise and hare
bool hasCycle(Node* head) {
    Node *slow=head, *fast=head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
```

### Stack & Monotonic stack

* Typical use: next greater element, maintain monotonic decreasing stack.

### Queue / Deque (sliding window minima)

```cpp
// sliding window minimum using deque
vector<int> sliding_min(vector<int>& a, int k) {
    int n = a.size();
    deque<int> dq;
    vector<int> res;
    for (int i=0;i<n;i++) {
        while(!dq.empty() && dq.front() <= i-k) dq.pop_front();
        while(!dq.empty() && a[dq.back()] >= a[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k-1) res.push_back(a[dq.front()]);
    }
    return res;
}
```

### Binary Search Tree (insertion, search) — balanced trees used in STL `map`/`set` (red-black)

### Heaps / Priority Queue

* `priority_queue<T>` = max heap by default. For min-heap: `priority_queue<T, vector<T>, greater<T>> pq;`
* Useful for Dijkstra, top-K.

### Disjoint Set Union (Union-Find) — O(α(n))

```cpp
struct DSU {
    vector<int> p, r;
    DSU(int n): p(n,-1), r(n,0){ for(int i=0;i<n;i++) p[i]=i; }
    int find(int a){ return p[a]==a ? a : p[a]=find(p[a]); }
    bool unite(int a,int b){
        a=find(a); b=find(b); if(a==b) return false;
        if (r[a]<r[b]) swap(a,b);
        p[b]=a;
        if (r[a]==r[b]) r[a]++;
        return true;
    }
};
```

### Fenwick Tree / BIT — prefix sums (point update, prefix query)

```cpp
struct Fenwick {
    int n; vector<long long> bit;
    Fenwick(int n): n(n), bit(n+1,0) {}
    void add(int idx, long long val) { for(; idx<=n; idx += idx & -idx) bit[idx]+=val; }
    long long sum(int idx) { long long r=0; for(; idx>0; idx -= idx & -idx) r+=bit[idx]; return r; }
    long long range_sum(int l,int r){ return sum(r) - sum(l-1); }
};
```

### Segment Tree (iterative, point update, range sum)

```cpp
struct SegTree {
    int n; vector<long long> st;
    SegTree(int _n): n(_n), st(2*_n,0) {}
    void build(vector<long long>& a){
        for(int i=0;i<n;i++) st[n+i]=a[i];
        for(int i=n-1;i>0;i--) st[i]=st[i<<1] + st[i<<1|1];
    }
    // point update
    void update(int p, long long val) {
        p += n; st[p] = val;
        for(p >>= 1; p; p >>= 1) st[p] = st[p<<1] + st[p<<1|1];
    }
    // range query [l, r)
    long long query(int l, int r) {
        long long res = 0;
        for(l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) res += st[l++];
            if (r & 1) res += st[--r];
        }
        return res;
    }
};
```

**Lazy propagation** for range updates is a must for certain problems — I can add that snippet if you want.

---

# 5) Graphs — adjacency, BFS/DFS, and core algorithms

**Representation**

* `vector<vector<pair<int,int>>> adj(n)` for weighted graphs; `vector<vector<int>>` for unweighted.

**BFS (shortest path unweighted)**

```cpp
vector<int> bfs(int s, const vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> dist(n, -1);
    queue<int> q;
    q.push(s); dist[s]=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: adj[u]) if(dist[v]==-1) { dist[v]=dist[u]+1; q.push(v); }
    }
    return dist;
}
```

**DFS (recursive / iterative)** — watch recursion depth for large graphs; use iterative when needed.

**Dijkstra (weighted shortest path, non-negative weights)**

```cpp
vector<long long> dijkstra(int s, const vector<vector<pair<int,int>>>& adj) {
    int n = adj.size();
    const long long INFLL = (1LL<<60);
    vector<long long> dist(n, INFLL);
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    dist[s] = 0; pq.push({0,s});
    while(!pq.empty()){
        auto [d,u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto [v,w]: adj[u]){
            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
```

**MST** — Kruskal (uses DSU) or Prim (priority_queue). Kruskal complexity O(E log E).

---

# 6) Sorting algorithms (brief)

* QuickSort: average O(n log n), worst O(n²) unless randomized; in-place.
* MergeSort: O(n log n) stable, needs O(n) extra.
* Heapsort: O(n log n), in-place.
* Use `std::sort` — introsort (quick + heap + insertion) — very reliable.

---

# 7) Dynamic Programming (patterns & examples)

**Patterns**

* 1D DP: knapsack 0/1 with 1D rolling array.
* 2D DP: LCS, edit distance.
* DP on trees: compute dp[u] from children.
* Bitmask DP: dp[mask][i].
* Memoization vs tabulation.

**Example: Longest Increasing Subsequence (O(n log n))**

```cpp
int LIS(vector<int>& a) {
    vector<int> tail; // tail[i] = min ending value of an increasing subseq of length i+1
    for (int x : a) {
        auto it = lower_bound(tail.begin(), tail.end(), x);
        if (it == tail.end()) tail.push_back(x);
        else *it = x;
    }
    return tail.size();
}
```

---

# 8) Greedy vs DP: When to use

* Greedy works when **local optimum leads to global optimum** (prove via exchange argument or matroid/structure).
* DP when overlapping subproblems and optimal substructure but greedy condition fails.

---

# 9) Strings — useful algorithms

* Trie for prefix queries.
* KMP (pattern matching) — prefix function (π).
* Z-function.
* Rolling hash (Rabin-Karp) for substring hashing (watch collisions).
* Suffix array / suffix automaton for advanced string queries (I can expand if you want).

---

# 10) Common interview/contest problems & patterns (with quick hints)

* Two-sum / hash map.
* Sliding window maximum/minimum.
* Merge intervals: sort by start, merge.
* Tree traversals, tree diameter (two BFS).
* LCA: binary lifting (preprocess O(n log n), query O(log n)).
* Topological sort (Kahn’s or DFS) for DAGs.
* Union-Find for connectivity / cycle detection / Kruskal.
* DP problems: knapsack, coin change, LIS, LCS, edit distance.
* Graph shortest paths: Dijkstra, Bellman-Ford (neg weights), Floyd-Warshall (all pairs, O(n³)).
* Segment/Fenwick for range query problems.

---

# 11) Complexity gotchas & memory tips

* Watch recursion depth: default stack may overflow — convert to iterative or increase stack.
* Reserve vector capacity to avoid reallocation: `v.reserve(n)`.
* Avoid copying large containers; pass by reference `const vector<int>&`.
* Use `emplace_back` instead of `push_back` for in-place construction.
* Use `unordered_map` when average O(1) lookups are fine — but worst-case O(n) and heavy hashing costs; `reserve` buckets if you know size.
* For large I/O, always use fast IO and prefer `'\n'` over `endl`.

---

# 12) Debugging and testing tips

* Use small, hand-worked examples; draw graphs / arrays.
* Sanity-check bounds (off-by-one).
* Print intermediate values, or write asserts.
* Test edge cases: empty input, single element, duplicate values, max/min values.
* For randomized algorithms (e.g., quicksort pivot), test many seeds.

---

# 13) Competitive programming tips

* Learn to read problem constraints to infer complexity.
* Precompute factorials / inverse factorials for combinatorics.
* Modular arithmetic: write a robust mod class for (a+b)%MOD and modular inverse via fast exponentiation.
* Precompute primes via sieve for many queries.
* Use bitmasks where n ≤ 20.
* Memorize common STL idioms: `lower_bound`, `upper_bound`, `next_permutation`, `partial_sort`, `nth_element`.

---

# 14) Practice problems (suggested order & tips)

* Easy: Two-sum, Reverse Linked List, Valid Parentheses, Merge Two Sorted Lists.
* Medium: Sliding Window Maximum, LRU Cache (design), Kth Largest Element, Course Schedule (topo sort).
* Hard: Median of Two Sorted Arrays, Word Ladder II, Suffix array problems, Flow/Matching (max flow).
  (Hint: For each problem, try 3 solutions: brute force, optimized by insight, final optimized with proof.)

---

# 15) Example: Full end-to-end problem — shortest path on grid with weights (Dijkstra)

```cpp
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++) cin>>grid[i];
    // convert to graph or use Dijkstra on grid
    vector<vector<long long>> dist(n, vector<long long>(m, (1LL<<60)));
    using T = pair<long long, pair<int,int>>; // dist, {r,c}
    priority_queue<T, vector<T>, greater<T>> pq;
    int sr=0, sc=0; // example start
    dist[sr][sc]=0; pq.push({0,{sr,sc}});
    int dr[4]={-1,1,0,0}, dc[4]={0,0,-1,1};
    while(!pq.empty()){
        auto [d, rc] = pq.top(); pq.pop();
        auto [r,c] = rc;
        if (d != dist[r][c]) continue;
        for(int k=0;k<4;k++){
            int nr=r+dr[k], nc=c+dc[k];
            if(nr<0||nr>=n||nc<0||nc>=m) continue;
            long long w = 1; // or weight derived from grid[nr][nc]
            if (dist[nr][nc] > d + w) {
                dist[nr][nc] = d + w;
                pq.push({dist[nr][nc], {nr,nc}});
            }
        }
    }
}
```

---

# 16) Advanced topics to request next (I can expand any):

* Persistent segment trees / persistent DSU.
* Suffix automaton / suffix array + LCP.
* Maximum flow (Dinic, Push-relabel).
* Advanced shortest path (Johnson’s, potentials).
* Geometry: convex hull, rotating calipers.
* Probabilistic structures: bloom filters, skip lists.
* Competitive tricks: meet-in-the-middle, divide & conquer optimization, knuth optimization.

---

# 17) Study plan (6–12 weeks example)

* Weeks 1–2: Arrays/strings, sorting, two pointers, hashing.
* Weeks 3–4: Trees, basic graphs, BFS/DFS, binary search, DSU.
* Weeks 5–6: DP fundamentals, knapsack, LIS, LCS.
* Weeks 7–8: Fenwick/Segment trees, lazy propagation, trie.
* Weeks 9–10: Advanced graphs (Dijkstra, Bellman-Ford), MST, flows (Dinic).
* Weeks 11–12: Practice timed contests (Codeforces / LeetCode), problem patterns, mock interviews.

---

# 18) Common pitfalls & final tips

* Don’t over-optimize premature: write correct O(n log n) before micro-optimizing.
* Understand memory limits — 1e7 ints ~ 40MB.
* Prefer clarity over clever one-liners in interviews. Explain approach first, then code.
* Practice explaining amortized complexity (e.g. vector push_back amortized O(1)).

---

If you want, I can now:

* Produce a **one-page printable cheat sheet** with the most common snippets and complexities.
* Create a **personalized 4-week practice schedule** with daily problems and solutions.
* Expand any single section into a full tutorial (e.g., lazy segment tree with examples, suffix array construction, or Dinic maxflow implementation).

Which of those would you like next?
