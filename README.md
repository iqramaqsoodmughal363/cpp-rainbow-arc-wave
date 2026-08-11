# 🌈 Rainbow Arc Wave Animation in C++

> A C++ graphics program using the **BGI (Borland Graphics Interface)** library that displays a colorful rainbow arc animation with a wave-like motion effect.

---

## 📋 Overview

This program demonstrates **basic animation and graphics primitives** using the BGI library. A layered rainbow arc is displayed with a vertical wave motion, creating a dynamic and colorful visual effect.

**Key Concepts:**
- **Rainbow Arcs:** Multiple colored arcs stacked vertically.
- **Wave Motion:** The entire rainbow moves up and down smoothly.
- **Color Cycling:** Seven distinct rainbow colors.
- **Graphics Primitives:** `arc`, `setcolor`, `setfillstyle`, `cleardevice`.

---

## ✨ Features

- ✅ Colorful rainbow arc with 7 layers
- ✅ Smooth wave-like vertical motion
- ✅ Uses standard rainbow colors (Red → Magenta)
- ✅ Press any key to exit the animation
- ✅ Clean and well-commented implementation
- ✅ Beginner-friendly with proper comments

---

## ⏱️ Complexity Analysis

| Measure | Value |
| :---: | :--- |
| **Time Complexity** | O(frames × layers) – Constant time per frame. |
| **Space Complexity** | O(1) – No extra memory used. |

---

## 💻 Sample Output

- A colorful rainbow arc displayed on the screen.
- The rainbow moves up and down in a wave-like motion.
- Seven layers of color: RED, LIGHTRED, YELLOW, GREEN, CYAN, BLUE, MAGENTA.
- The animation continues until a key is pressed.

---

## 🧮 Program Logic & Execution Flow

### 1. **`main()`**
- Sets up the graphics window using `initgraph()`.
- Defines `y = getmaxy()/2` (center Y) and `shift = 0` (wave offset).
- Runs while no key is pressed (`!kbhit()`):
  - Clears the screen using `cleardevice()`.
  - Sets the background to black.
  - Draws the rainbow arcs:
    - Initializes `radius = 200`.
    - For `i = 0` to `6` (7 layers):
      - Sets the color from the `colors[]` array.
      - Draws an arc at `(getmaxx()/2, y + shift)` from `0` to `180` degrees.
      - Reduces `radius` by `15` for each layer.
  - Updates `shift`: `shift += 2` (move down).
  - If `shift > 20`, resets `shift = -20` (wrap around for wave effect).
  - Adds a delay (`delay(100)`) to control frame rate.

### 2. **Exit**
- Closes the graphics window using `closegraph()`.

---

## 🛠️ How to Compile and Run (Windows Only)

### 🪟 For Windows Users (Using Turbo C++ / WinBGIm)

#### Option 1: Using Turbo C++ (Old School)
1. Open Turbo C++.
2. Create a new file and paste the code.
3. Go to **Options → Linker → Libraries** and enable the Graphics library.
4. Compile and run (Ctrl+F9).

#### Option 2: Using WinBGIm (Modern Windows)
1. Download WinBGIm from: http://winbgim.codecutter.org/
2. Install and set up the library in your compiler.
3. Compile with:
   ```bash
   g++ -std=c++11 rainbow_arc.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
Run: rainbow_arc.exe

📂 Project Structure

cpp-rainbow-arc-wave/
│
├── rainbow_arc.cpp   # Main source code file
└── README.md         # Project documentation (this file)
🔍 Real-World Applications
Educational Projects: Teaching graphics programming and animation.

Game Development: Visual effects and loading screens.

UI/UX Prototyping: Demonstrating colorful animations.

Screen Savers: Colorful and animated screensaver.

Creative Coding: Artistic visualizations.

🧠 Key Learnings
Arc Function: Drawing partial circles (0 to 180 degrees).

Color Arrays: Storing colors for easy iteration.

Wave Effect: Using a shift variable to create up-and-down motion.

Animation Loop: The game loop pattern (update → render → delay).

Layered Drawing: Overlapping arcs to create a rainbow effect.

🔧 Potential Enhancements
Full Rainbow Circle: Draw a full circle instead of an arc.

Rotating Rainbow: Add rotation to the rainbow.

Gradient Colors: Use smooth color transitions.

Background: Add stars or clouds for a sky effect.

Cross-Platform: Use SDL, SFML, or OpenGL for portability.

User Control: Allow the user to change speed or colors.

⚠️ Important Notes
This program is Windows-only due to the BGI library dependency.

For Turbo C++ users: You may need to adjust the graphics driver and mode.

For modern compilers: WinBGIm is recommended.

The graphics functions may not work directly on Linux/macOS.

👩‍💻 Author
Iqra Maqsood Mughal
C++ Developer | Programming Enthusiast

📅 Date
August 11, 2026

📄 License
This project is open-source and intended for educational purposes.
