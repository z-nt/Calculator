# 🧮 Professional Calculator with C Language

> **A complete project for deep learning of C language, working with Git, and software development with AI assistance**

---

## 🎯 Project Goal

Building a powerful and professional calculator with **C** language that follows all principles of clean coding, memory management, and real-world project structures.

---

## 🛠️ Tools Used

| Tool | Purpose |
|------|---------|
| **Vim** | Code editor (terminal mode) |
| **Tmux** | Managing multiple terminals simultaneously |
| **GCC** | C compiler |
| **Git & GitHub** | Version control and collaboration |
| **AI Assistant** | Programming assistant (Code Review & Debug) |

---

## 📁 Project Structure
calculator-project/
├── .gitignore # Ignored files by Git
├── README.md # This file
├── Makefile # Compilation automation
├── main.c # Main program entry
├── calculator.h # Main functions header
├── calculator.c # Main functions implementation
├── operations/ # Separate operations
│ ├── add.c
│ ├── subtract.c
│ ├── multiply.c
│ └── divide.c
├── advanced/ # Advanced operations
│ ├── power.c
│ └── sqrt.c
└── utils/ # Helper functions
├── input.c
└── output.c

---

## 🚀 Calculator Features

### Basic Operations
- [x] Addition (`+`)
- [x] Subtraction (`-`)
- [x] Multiplication (`*`)
- [x] Division (`/`) with division by zero handling

### Advanced Operations
- [x] Power (`^`)
- [x] Square Root (`√`)
- [x] Percentage (`%`)

### Special Features
- [ ] Memory (M+, M-, MR, MC)
- [ ] Operation History
- [ ] Large Decimal Number Support
- [ ] Menu-driven Interface

---

## 📋 Coding Rules

1. **Clean & Readable**: Persian comments for explaining important sections
2. **Modular**: Each operation in separate file
3. **Error Handling**: Complete input validation
4. **Standard**: Follow `C11` or higher
5. **Security**: Prevent buffer overflow and memory issues

---

## 🔄 Git Workflow

```bash
# Start each day with a new branch
git checkout -b feature/operation-name

# After each important change
git add .
git commit -m "added: addition operation"

# At the end of the day
git push origin feature/operation-name
# Compile the whole project
make

# Run the program
./calculator

# Run tests (if available)
make test



🤝 Collaborating with AI

    Code Review: AI code review before commit

    Debugging: Compilation and runtime error analysis

    Refactoring: Code structure improvement suggestions

    Documentation: Auto-generated documentation


































