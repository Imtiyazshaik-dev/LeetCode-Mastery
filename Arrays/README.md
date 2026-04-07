# 📍 Array & Hashing Solutions

This folder contains my solutions to problems involving linear data structures. I focus on optimizing time complexity from $O(n^2)$ to $O(n)$ or $O(n \log n)$ using Hash Maps and Sorting.

---

## 🧠 Key Patterns Mastered

### 1. The Complement Map (Two Sum)
Instead of a nested loop, I store the "target - current_value" in a Hash Map. This allows for a **constant time $O(1)$ lookup** to find the pair.
* **Logic:** `Map[target - nums[i]]`
* **Time Complexity:** $O(n)$

### 2. Frequency & Existence Tracking (Duplicates/Missing Numbers)
Using `std::unordered_set` or `std::unordered_map` to track which numbers have been seen. 
* **Used in:** *Contains Duplicate*, *Find All Numbers Disappeared in an Array*.
* **Benefit:** Instant check if a number exists in the "seen" list.

### 3. Sorting + Mapping (Smaller Numbers Than Current)
By sorting a copy of the array, the **index** of a number tells us exactly how many numbers are smaller than it. 
* **Pro-tip:** Only map the first occurrence of a number to handle duplicates correctly.

---

## 📊 Problem List

| # | Problem | Difficulty | Key Technique |
| :--- | :--- | :--- | :--- |
| 1 | Two Sum | Easy | Hash Map (Complement) |
| 217 | Contains Duplicate | Easy | Hash Set |
| 1365 | How Many Numbers Are Smaller | Easy | Sorting + Map |
| 448 | Find All Disappeared Numbers | Easy | Hash Set / In-place Marking |

---

## 🚀 Future Optimizations
* Explore **In-place Hashing** to reduce Space Complexity to $O(1)$.
* Apply **Sliding Window** techniques for subarray-related problems.
