// .Q1
// An empty class (a class with no data members and no virtual functions) is given 1 byte of memory.
// This is not for storing data, but simply to give each object of the class a unique address in memory.
// By assigning 1 byte, the compiler ensures:
// Every instance has a unique address.
// Alignment and object model rules of C++ are respected.

// .Q2
// 1. Alignment - Every data type in C/C++ has an alignment requirement (usually equal to its size or a power-of-two divisor of it).
// 2. Padding - extra bytes added inside to satisfy each member’s alignment.
// Greedy Alignment - struct/class size is rounded up to a multiple of its largest member’s alignment.
// 3. struct B {
//     char c;   // 1 byte
//     int x;    // 4 bytes
//     short s;  // 2 bytes
// };  
// sizeof(B) == 12

// .Q3
// Rule of Thumb for Efficient Layout
// Place largest types first → then medium → then small.
// (Descending order of alignment requirement.)
// Group same-sized types together.
// Avoid mixing char or short between big types (causes padding gaps).
// The compiler still rounds the final size to a multiple of the largest alignment (greedy alignment).
