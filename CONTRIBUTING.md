# Subflow - ModularFlow Game Engine

**Vision:** A progressive, code-first game engine that evolves from friendly script-like logic to full C++ access, helping developers of any level build powerful systems without being locked into drag-and-drop tools.

---

## Repository Structure

```bash
Subflow/
├── LICENSE                  # MPL 2.0 License
├── README.md               # Main project overview
├── README_for_dummies.md  # Beginner-friendly intro
├── CONTRIBUTING.md         # How to contribute or get involved
├── DEPENDENCIES.md         # List of libraries & build requirements
├── .gitignore              # Files to exclude from Git
├── CMakeLists.txt          # Root CMake config
├── engine/
│   ├── core/
│   ├── dialogue/
│   ├── graphics/
│   ├── input/
│   ├── utils/
│   └── window/
├── tools/
│   └── git/                # Git commit helper script (optional CLI)
├── third_party/            # External libraries (GLFW, GLAD, etc.)
└── main.cpp                # Entry point
```

---

## CONTRIBUTING.md

### How to Contribute 🧩

We’re excited to have you here! Subflow is a modular game engine meant to grow with the community. Whether you’re fixing typos, expanding features, or helping test — we’d love your help.

---

### 📦 Clone the Repo
```bash
git clone https://github.com/your-username/Subflow.git
cd Subflow
```

### 🛠 Set Up Your Dev Environment
1. Install [CMake](https://cmake.org/)
2. Make sure you have a modern C++ compiler (C++17+)
3. Run:
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

---

### 💡 Ways to Contribute
- Fix bugs and file issues
- Add your own modules (scene, sound, input extensions)
- Help document engine features or clarify beginner concepts
- Review open PRs

---

### 🧪 Submitting a Change
1. Fork the repo
2. Create a new branch: `git checkout -b feature/your-feature`
3. Commit using our git helper or follow this convention:
```bash
git commit -m "🔧 Add modular XYZ system to core"
```
4. Push: `git push origin feature/your-feature`
5. Submit a Pull Request with a short, clear description

---

### 🧭 Project Guidelines
- Follow modular folder structure (everything belongs in a clear engine/ folder)
- Avoid hard-coded values (use config files or class params)
- Comment functions for clarity
- Name files and folders clearly (no abbreviations)

---

### 👀 Stay Involved
- Use Issues to track discussions and bugs
- Tag issues using [bug], [feature], [question], etc.
- Watch the repo or join community channels (coming soon)

---

Thanks for contributing to Subflow!
