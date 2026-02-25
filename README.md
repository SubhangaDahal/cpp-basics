# C++ Basics Learning Journey 🚀

Welcome to my C++ learning repository! I am using this space to document my progress, write practice programs, and keep track of my notes as I learn the basics of C++.

## 📂 Project Structure

This repository contains a master Visual Studio Solution (`cpp-basics.sln`) with multiple projects inside.

* **[1-hello-world](./1-hello-world)**: My first program! Basic console output using `std::cout`.

## 🛠️ How to Run the Code

1. Clone this repository to your local machine.
2. Open the `cpp-basics.sln` file in **Visual Studio**.
3. In the Solution Explorer, right-click the specific project you want to run (e.g., `1-hello-world`) and select **"Set as Startup Project"**.
4. Press `F5` or click the green **Local Windows Debugger** play button to compile and run.

## 📝 My Notes & Cheatsheet

### 1. Basic Output (cout)
The first line of a C++ code is usually a pre-processor. Here `#include` works a pre-processor.
`#include` simply copies and pastes from the mentioned header file, in this case `iostream`.
There are namespaces in cpp which are like containers for functions. 
I used `using namespace std` since its a hello world example but its generally better to use `std::cout`.
To print text to the console, use `std::cout` combined with the insertion operator `<<`.
```cpp
std::cout << "Hello World!" << std::endl;
