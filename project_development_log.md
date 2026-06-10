# 2D Graphics Editor Project Development Log

## Project Requirement
User asked for help creating a menu-driven 2D Graphics Editor in C using:
- 2D character arrays
- Rectangle
- Line
- Triangle
- Circle
- Add/Delete/Modify features
- GitHub repository setup

---

## Initial User Prompt
"now wt should i do step by step"

### Response Summary
- Create GitHub repository
- Create project folder
- Add C files
- Daily push to GitHub
- Build project step-by-step

---

## GitHub Setup
### User Prompt
"more clear idk how to use git ub"

### Response Summary
- Create GitHub account
- Create repository
- Open VS Code terminal
- Use:
git init
git add .
git commit -m "Initial commit"

---

## Compiler Setup
### User Prompt
"gcc not recognized"

### Response Summary
- Install MinGW / Code::Blocks with MinGW
- Add GCC to PATH
- Test using:
gcc --version

---

## Rectangle Drawing Feature
### Added Files/Functions
- drawRectangle()
- menu system
- rectangle drawing using '*'

### Git Commit
"Added rectangle drawing and menu system"

---

## Line Drawing Feature
### Added Functions
- drawLine()
- Horizontal line
- Vertical line

### Git Commit
"Added line drawing feature"

---

## Triangle Drawing Feature
### Added Functions
- drawTriangle()

### Git Commit
"Added triangle drawing feature"

---

## Circle Drawing Feature
### Added Functions
- drawCircle()

### Git Commit
"Added circle drawing feature"

---

## Shape Storage System
### Added Concepts
- Structures
- Shape arrays
- Shape types
- shapeCount variable

### Git Commit
"Added shape storage system"

---

## Delete Shape Feature
### Added Functions
- clearCanvas()
- delete shape using Shape ID
- redraw remaining shapes

### Git Commit
"Added delete shape feature"

---

## Modify Shape Feature
### Added Features
- Modify rectangle
- Modify line
- Modify triangle
- Modify circle

### Git Commit
"Added shape modify feature"

---

## README Creation
### Added:
- Project description
- Features
- Compile instructions
- Run instructions

### Git Commit
"Updated README file"

---

## Final Project Features
- Draw Rectangle
- Draw Line
- Draw Triangle
- Draw Circle
- Display Canvas
- Delete Shapes
- Modify Shapes
- Menu Driven Program
- 2D Array Storage
- GitHub Integration

---

## Final Compile Command

gcc main.c canvas.c shapes.c -o editor

## Final Run Command

./editor

---

## Author
Maha
