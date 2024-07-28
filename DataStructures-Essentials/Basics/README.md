# Notes and Explanations
Checkout: https://www.udemy.com/course/datastructurescncpp/learn/lecture/13123796#overview
Q1: when we talk about word size in computer architecture, does that mean that every block of memory will be 64 bits or does that mean that every block will have a 64-bit address?

A: In computer architecture, the term "word size" refers to the number of bits that the processor can process at once. This is typically the width of the processor's data bus. So, if we say a computer has a word size of 64 bits, it means that the processor can handle 64 bits of data in a single operation.

However, word size does not directly determine the size of each memory block or the size of memory addresses. Here's a brief explanation:

- **Memory Block Size**: The size of a memory block is not necessarily the same as the word size. It can vary depending on the memory organization of the system. For instance, in a cache memory system, the block size (also called line size) could be a few words (like 4 words of 64 bits each, making the block size 256 bits).

- **Memory Address Size**: The size of a memory address (i.e., the number of bits in an address) is determined by the addressing capability of the processor, not the word size. A 64-bit processor typically has a 64-bit address bus, which means it can address 2^64 individual bytes of memory. This is separate from the word size, although in many modern systems, the word size and address size are the same.

In summary, while the word size, memory block size, and address size are all important aspects of a computer's architecture, they serve different purposes and are not necessarily the same. They can be the same in some systems, but this is not a rule. Each is determined by different factors based on the design and requirements of the system. 

---

