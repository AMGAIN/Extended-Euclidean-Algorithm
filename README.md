# Extended-Euclidean-Algorithm

This project implements the **Extended Euclidean Algorithm**, an extension of the classic Euclidean Algorithm. In addition to computing the Greatest Common Divisor (GCD) of two integers `a` and `b`, it also finds integers `x` and `y` such that:
ax + by = gcd(a, b)
These coefficients `x` and `y` are known as Bézout coefficients.

## 📌 Features

- Calculates the GCD of two integers
- Computes Bézout coefficients (x and y)
- Useful for:
  - Solving linear Diophantine equations
  - Finding modular inverses (used in cryptography)
  - Number theory applications

## 🧮 How It Works

The algorithm works by recursively applying the Euclidean algorithm and then back-substituting to find the coefficients.

## 📎 Example

```cpp
Input: a = 30, b = 20

Output:
GCD: 10
x: 1
y: -1

Explanation: 30×1 + 20×(-1) = 10
🚀 Usage
You can clone the repo and run the code using any C++ compiler:

bash
Copy
Edit
git clone https://github.com/yourusername/extended-euclidean-algorithm.git
cd extended-euclidean-algorithm
g++ main.cpp -o eea
./eea
