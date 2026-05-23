# <b>Task Manager — C++</b>

<br>

> Command-line task manager written in C++ using an Object-Oriented Programming architecture.  
> Compatible with Windows (CMD), Linux, and macOS.

<br>
<br>
## <b>Authors</b>
- **Ayoub EL WAMY**
- **ACHRAF KADDOURI**
- **Abdellah OMALEK**
- **Taha BENZAKI**
<br>
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

### <b>Option 1: Quick Run (Linux / macOS)</b>

You can configure, compile, and run the project automatically in one single step:

```bash
chmod +x run.sh
./run.sh
```

<br>

### <b>Option 2: Manual Build & Run</b>

If you prefer to build and run the project manually:

#### <b>1. Build the project:</b>
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

#### <b>2. Run the application:</b>

* **Linux / macOS:**
  ```bash
  ./build/bin/todo_app
  ```
* **Windows CMD:**
  ```cmd
  build\bin\todo_app.exe
  ```

<br>

> The `data/` directory is automatically created during the first save.

<br>

## <b>Project Structure</b>
```text
Cpp-ToDoList/
├── CMakeLists.txt
├── .gitignore
├── README.md
├── run.sh
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


