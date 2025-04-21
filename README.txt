# Movemint

**Movemint** is a physics-driven 3D movement playground, built completely from scratch in C++ and OpenGL.

Right now, Movemint is a simple prototype featuring:
- Smooth real-time input handling (WASD + Space)
- Basic player physics (velocity, gravity, jumping)
- Delta-time based movement (frame rate independent)
- Custom-built OpenGL rendering pipeline (no game engine)

Movemint's long-term goal is to become a polished, momentum-based movement game featuring swinging, grappling, and parkour traversal mechanics.

---

## Current Features
- 🖥️ OpenGL 3.3 Core Profile window and rendering setup
- 🎮 Player object with:
  - WASD directional movement
  - Gravity and falling
  - Jumping from the ground
- 🧠 DeltaTime physics: smooth, time-based player updates
- ⚡ Built from scratch with **no game engines** — pure C++ and OpenGL

---

## How to Build and Run

1. Install dependencies (Ubuntu example):

sudo apt update
sudo apt install build-essential cmake libglfw3-dev libglm-dev

2. Clone the repo:

git clone https://github.com/dausenm/movemint.git
cd movemint

3. Build the project

mkdir build
cd build
cmake ..
make

4. Run the game:

./Movemint


Project Structure:

movemint/
├── include/         # Header files (GLAD, GLM, etc.)
├── src/             # Source code (main.cpp, Player.cpp)
├── CMakeLists.txt   # Build instructions
├── build/           # Compiled files (generated at build time)
└── README.md        # You are here


Controls:

Key	Action
W	Move forward
A	Move left
S	Move backward
D	Move right
Space	Jump
Escape	Quit the game


Future Plans
🌎 Expand full 3D world and camera system

🧗 Add grappling hook and swinging mechanics

🎯 Fine-tune movement physics (drag, air control, acceleration curves)

🎨 Add basic shaders for better visuals

🛠️ Collision detection with multiple platforms and obstacles


License
Movemint is currently under active development and is not yet licensed.
License terms will be added when the project reaches a more stable phase.


Credits
Built by Dausen Mason — a developer with a passion for physics-based games and learning from the ground up.