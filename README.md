
# 🧠 Bitsify – Bit Manipulation Utilities for C/C++

Bitsify is a lightweight C++ header library that provides efficient and commonly used bit manipulation functions — perfect for competitive programming, system-level code, and algorithmic interviews.

---

## 📁 Features

- ✅ Count set bits (`1`s)
- ✅ Convert decimal ↔ binary
- ✅ Fast exponentiation (modular)
- ✅ Generate all subsets using bitmasking
- ✅ Set / Clear / Toggle / Check the ith bit
- ✅ Remove last set bit
- ✅ Minimum bit flips to convert a → b
- ✅ Batch utility for multiple test cases

---

## 📦 Installation

Just copy [`bitmask.h`](bitmask.h) into your project folder and include it:

```cpp
#include "bitmask.h"
```

---

## 🧪 Example Usage

```cpp
#include <iostream>
#include "bitmask.h"

int main() {
    int n = 29; // binary: 11101
    std::cout << "Set bits: " << countSetBits(n) << std::endl;
    std::cout << "Binary of 29: " << toBinary(n) << std::endl;
    std::cout << "Decimal of 11101: " << toDecimal("11101") << std::endl;
    std::cout << "3^4 mod 5: " << fastExpo(3, 4, 5) << std::endl;
    generateSubsets({1, 2, 3});
    return 0;
}
```

---

## 🔧 Available Functions

| Function Name         | Description                                 |
|-----------------------|---------------------------------------------|
| `countSetBits(int)`   | Counts number of `1`s in binary             |
| `toBinary(int)`       | Converts decimal to binary string           |
| `toDecimal(string)`   | Converts binary string to decimal           |
| `fastExpo(a, b, m)`   | Computes (a^b) % m using fast exponentiation|
| `generateSubsets(v)`  | Prints all subsets using bitmasking         |
| `setBit(n, i)`        | Sets the i-th bit of n                      |
| `clearBit(n, i)`      | Clears the i-th bit of n                    |
| `toggleBit(n, i)`     | Toggles the i-th bit of n                   |
| `checkBit(n, i)`      | Checks if the i-th bit is set               |
| `removeLastBit(n)`    | Removes the last set bit                    |
| `bitFlips(a, b)`      | Number of bits to flip to convert a → b     |

---

## 📂 Project Structure

```
Bitsify/
├── examples/
│   └── main.cpp
├── bitmask.h
└── README.md
```

---

## 🤝 Contributing

Contributions are welcome! Feel free to submit pull requests for bug fixes or new features.

---

## 📄 License

MIT License. See `LICENSE` file for details.

---

## ⭐ Support

If you find Bitsify helpful, please ⭐ star the repo and share it with others!
