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

## MPL 2.0 LICENSE

```
Mozilla Public License Version 2.0

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at https://mozilla.org/MPL/2.0/.
```

---

# README.md

<div style="display: flex; gap: 2em; align-items: flex-start;">

<div style="flex: 1; min-width: 300px;">

## Welcome to Subflow 👋
Subflow is a modern, C++-powered game engine framework designed to be learned and extended progressively. It starts with simple, natural-language-style logic and scales up to full access and control over modular C++ systems.

Whether you're new to code or ready to build your own engine modules, Subflow gives you the tools — and the learning path — to grow with your ideas.

---

## 🚀 Table of Contents
- [What is Subflow?](#what-is-subflow)
- [Why Subflow is Different](#why-subflow-is-different)
- [Who It's For](#who-its-for)
- [Core Features](#core-features)
- [Project Vision](#project-vision)
- [🛠 Developer Setup (Jump to Tech)](#developer-setup-jump-to-tech)
- [Folder Structure](#folder-structure)
- [Build Instructions](#build-instructions)
- [Dependencies](#dependencies)
- [License](#license)

---

## What is Subflow?
Subflow is a modular, code-first game engine and logic toolkit built in C++ that allows users to:
- Start with easy scripting logic
- Learn by doing (from beginner to advanced)
- Eventually drop down into full C++ if they choose

It is **not** a visual scene editor — instead, it focuses on writing clean, understandable, and progressive game logic and systems.

## Why Subflow is Different
- 💡 Built to teach and grow with you
- 🧱 Fully modular from day one
- 🧠 Designed to be understood, edited, and shared
- ✨ Built for creativity, not just code

## Who It's For
- Beginners learning C++ and game logic
- Intermediate devs who want reusable patterns
- Indie developers who want full engine control
- Anyone who wants to move past drag-and-drop editors

## Core Features
- Custom prompt/text system
- Modular folders and logic separation
- CMake build system
- GLAD + GLFW rendering pipeline
- Future-focused (scene system, branching dialogue, config loaders)

</div>

<div style="flex: 1; min-width: 300px;">

## 🛠 Developer Setup (Jump to Tech)

### Folder Structure
Refer to the top-level structure section above.

### Build Instructions
```bash
# From project root
mkdir build
cd build
cmake ..
cmake --build .
```

### Dependencies
- GLFW (3.4)
- GLAD (OpenGL loader)
- CMake (v3.16 or later)
- C++17 compatible compiler

Libraries live in `third_party/` or are linked via CMake modules.

### Technical Design Notes
- Uses modular folder layout under `engine/`
- Dev tools live under `tools/`
- Internal input/output systems are being abstracted

</div>
</div>

---

> Let us know how you’d like to contribute or fork this to build your own engine variant!
