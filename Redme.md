# C++ Multithreaded Search Engine

## Project Overview
This project is a **high-performance text search engine** developed in **C++**. It is capable of efficiently searching through **large files** using multiple string search algorithms. The project demonstrates practical application of **Data Structures & Algorithms (DSA)**, **Operating System concepts**, and **performance optimization techniques**.

---

## Features

### 1. Multiple Search Algorithms
- **Naive Search:** Simple and intuitive, useful for small files or educational purposes.  
- **Knuth-Morris-Pratt (KMP) Search:** Efficient linear-time algorithm, reduces unnecessary comparisons.  
- **Rabin-Karp Search:** Hash-based search algorithm, suitable for multiple pattern searches.  

### 2. Multithreading
- Divides large files into **chunks**.  
- Each thread searches its chunk independently.  
- Reduces search time significantly for large files.  
- Uses **mutex** for safe synchronization between threads.  

### 3. Benchmarking
- Compares execution time of **Naive, KMP, Rabin-Karp, and Multithreaded KMP**.  
- Provides clear insights into performance improvements using multithreading.  

### 4. Modular and Maintainable Design
- **Header (`.h`) files** for declarations.  
- **Implementation (`.cpp`) files** for function logic.  
- Makes code **clean, reusable, and professional**.  

### 5. Large File Support
- Capable of handling **GB-sized text files** efficiently.  
- Uses **memory-efficient techniques** and avoids unnecessary string copies.  

### 6. Thread-Safe Result Management
- Results collected in a **vector** protected by **mutex**.  
- Prevents race conditions and ensures accuracy in multithreaded search.  

### 7. Command-Line Configurable (Optional Enhancement)
- Can extend to accept **file path, search pattern, and number of threads** as CLI arguments.  

### 8. Future-Ready Enhancements
- Support **multiple patterns** simultaneously.  
- Advanced algorithms like **Boyer-Moore** for faster searching.  
- File **indexing** for repeated searches.  
- GUI or CLI interface for user-friendly interaction.  

---

## How It Works
1. **File Reading:** Reads the entire file into memory using `FileReader` class.  
2. **Algorithm Selection:** Users can choose Naive, KMP, or Rabin-Karp.  
3. **Multithreaded Search:** Text is split into chunks, each processed by a thread.  
4. **Synchronization:** Mutex ensures thread-safe collection of results.  
5. **Benchmarking:** Measures execution time for all algorithms and highlights performance differences.  

---

## Project Structure
SearchEngine/
│── main.cpp # Entry point; runs searches and benchmarks
│── FileReader.h/cpp # Reads text file content
│── SearchAlgorithms.h/cpp # Naive, KMP, and Rabin-Karp search implementations
│── MultiThreadSearch.h/cpp # Multithreaded search using KMP
│── Benchmark.h/cpp # Benchmarks execution time of all search methods


---

## Why C++?
- High **performance** and memory control.  
- Native support for **multithreading** (`std::thread`) and synchronization (`mutex`).  
- Allows efficient implementation of **DSA algorithms** like KMP and Rabin-Karp.  
- Widely used in **performance-critical applications**, making the project industry-relevant.  

---

## How to Run
1. **Compile all files**:
```bash
g++ main.cpp FileReader.cpp SearchAlgorithms.cpp MultiThreadSearch.cpp Benchmark.cpp -pthread -o search_engine
```
2. **Run the executable:**:
```bash 
./search_engine 
```  
3. **Input:** File path, search pattern, number of threads (optional).  
4. **Output**:
-Execution time for all algorithms
-Pattern positions in the text