# 🧮 Matrix Chain Multiplication (C++ Implementation)

This project implements the **Matrix Chain Multiplication** algorithm using **Dynamic Programming** in C++. The goal is to determine the optimal way to parenthesize a sequence of matrices so that the total number of scalar multiplications is minimized.

---

## 📚 Problem Overview

Given a sequence of matrices, the task is to find the most efficient way to multiply these matrices. The multiplication is associative, but the order of multiplication can significantly impact the total computational cost.

### 🔢 Example

If you have matrices with dimensions:

A1: 10x30
A2: 30x5
A3: 5x60


The optimal way is:  
`((A1 x A2) x A3)`  
with only **4500** scalar multiplications compared to other parenthesizations which cost more.

---

## 💡 Algorithm

The algorithm uses bottom-up **Dynamic Programming** with a 2D table `dp[i][j]` where:

- `dp[i][j]` = Minimum cost to multiply matrices from index i to j.
- For each chain length from 2 to n, it calculates the minimum cost of multiplication by trying every possible split.

---

## 🛠️ How to Use

### 🧾 Input Format

1. First line: `n` — number of matrices.
2. Next `n` lines: each line contains two integers `row col` — the dimensions of the matrices in sequence.

```bash
Input Example:
3
10 30
30 5
5 60

g++ question_1.cpp -o question_1
./question_1

