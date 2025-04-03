# 📦 Dependencies for Subflow Engine

This document lists all external libraries and tools used by the Subflow engine, along with their purposes, installation instructions, and version info.

---

## 🧱 Core Libraries

### 🔹 GLFW — Windowing & Input
- **Version:** 3.4
- **Purpose:** Handles window creation, input polling, and cross-platform event handling.
- **Source:** [https://www.glfw.org/](https://www.glfw.org/)
- **Location:** `third_party/glfw/`
- **Install Notes:**
  - Included via CMake and prebuilt binaries (or build from source if needed).
  - Linked using `find_package()` or `add_subdirectory()`.

---

### 🔹 GLAD — OpenGL Loader
- **Version:** OpenGL 4.6 core profile loader
- **Purpose:** Loads OpenGL function pointers at runtime, required for modern OpenGL.
- **Source:** [https://glad.dav1d.de/](https://glad.dav1d.de/)
- **Location:** `third_party/glad/`
- **Install Notes:**
  - Generated with C/C++ header support via GLAD web service.
  - Added directly to the project and included in build using CMake.

---

## 🛠 Build Tools

### 🔹 CMake
- **Minimum Version:** 3.16
- **Purpose:** Cross-platform project build system.
- **Install Notes:**
  - On Windows, use [CMake GUI](https://cmake.org/download/) or install via Chocolatey:  
    ```bash
    choco install cmake
    ```
  - On Linux/macOS:  
    ```bash
    sudo apt install cmake         # Ubuntu/Debian
    brew install cmake             # macOS
    ```

---

## ⚙️ Compiler Requirements

- **Language Standard:** C++17
- **Recommended Compilers:**
  - MSVC (Visual Studio 2022)
  - GCC 9+ or Clang 10+ (for Linux/macOS)
- **Notes:** All code must compile under C++17 standard or higher.

---

## 📁 Library Organization

All third-party libraries are located in:

