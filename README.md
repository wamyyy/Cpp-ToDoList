# <b>Task Manager — C++</b>

<br>

> Command-line task manager written in C++ using an Object-Oriented Programming architecture.  
> Compatible with Windows (CMD), Linux, and macOS.

<br>
## <b>By : </b>
Ayoub EL WAMY   /  </b>
Achraf KADDOURI   /  </b>
Abdellah OMALEK   /  </b>
Taha BENZAKI   .  </b>

## <b>Overview</b>

This project is a terminal-based task manager that allows users to create, organize, update, and persist tasks directly from the command line.
Each task contains:
- A unique ID
- A title
- A category
- A priority level
- A status

All data is automatically saved into a text file and reloaded when the application starts again.

<br>

## <b>Features</b>

| Feature | Description |
|---|---|
| Add Task | Create a task with title, category, priority, and status |
| Edit Task | Update any task field using its ID |
| Delete Task | Remove a task by ID |
| Display Tasks | Show all tasks in a clean aligned table |
| Sort Tasks | Sort tasks by priority (Urgent first) |
| Save Tasks | Store tasks inside `data/tasks.txt` |
| Load Tasks | Reload saved tasks automatically |

<br>

## <b>Accepted Values</b>

### <b>Priority Levels</b>

| Choice | Value |
|---|---|
| 1 | Urgent |
| 2 | High |
| 3 | Normal |
| 4 | Low |

<br>

### <b>Task Status</b>

| Choice | Value |
|---|---|
| 1 | To Do |
| 2 | In Progress |
| 3 | Pending |
| 4 | Completed |
| 5 | Cancelled |

<br>

> Priority and status are selected using numbered menus — free text input is not allowed.

<br>

## <b>Compilation & Execution</b>

### <b>Requirements</b>

- CMake 3.14+
- C++17 compatible compiler:
  - GCC
  - Clang
  - MSVC

<br>

### <b>Build Project</b>

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

<br>

## <b>Run the Application</b>

### <b>Linux / macOS</b>

```bash
./build/bin/todo_app
```

<br>

### <b>Windows CMD</b>

```bash
build\bin\todo_app.exe
```

<br>

> The `data/` directory is automatically created during the first save.

<br>

## <b>Project Structure</b>
```text
TodoList/
├── CMakeLists.txt
├── README.md
├── include/
│   ├── Task.h
│   ├── TaskManager.h
│   ├── FileManager.h
│   └── Notification.h
└── src/
    ├── main.cpp
    ├── Task.cpp
    ├── TaskManager.cpp
    └── FileManager.cpp
```
<br>
## <b>Technologies Used</b>
- C++17
- Object-Oriented Programming (OOP)
- CMake
- File Handling
- STL (Standard Template Library)
<br>

