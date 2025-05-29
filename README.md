# Second-Max-of-Three-Numbers-CC


---

### ✅ **Purpose:**

This program processes multiple test cases. For each test case, it reads 3 integers and prints the **middle** (second largest) number after sorting them.

---

### 🔍 **Line-by-Line Explanation:**

```cpp
#include <bits/stdc++.h>
using namespace std;
```

* Includes all standard C++ libraries (`<bits/stdc++.h>` is a GCC extension).
* Uses the `std` namespace to avoid prefixing with `std::`.

---

```cpp
int main() {
    int n;
    cin >> n;
```

* Reads the number of test cases `n`.

---

```cpp
    while (n--) {
        int a, b, c;
        vector < int > v;
```

* For each test case, declares 3 integers and an empty vector `v`.

---

```cpp
        for (int i = 0; i < 3; i++) {
            cin >> a;
            v.push_back(a);
        }
```

* Reads 3 integers and pushes them into the vector `v`.

---

```cpp
        sort(v.begin(), v.end());
```

* Sorts the vector in **ascending order**.

---

```cpp
        cout << v[1] << endl;
```

* Outputs the **middle element** (index 1) from the sorted vector.

---

### 🧠 Example:

**Input:**

```
2
10 5 8
3 9 1
```

**Output:**

```
8
3
```

**Why?**

* First case: sorted → \[5, 8, 10] → middle is 8
* Second case: sorted → \[1, 3, 9] → middle is 3

---

### ✅ Summary:

For each test case, the code reads 3 numbers, sorts them, and prints the one that is **neither the smallest nor the largest** — effectively the **median of the three**.
