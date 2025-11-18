#include <iostream>
#include <map>
#include <limits>
#include <string>

// To-do List App using std::map (store tasks with priorities)

class Task{
    private:
        int id;
        std::string title;
        std::string description;
        bool isCompleted;

    public:
        Task(int id, const std::string& title, const std::string& desc)
            : id(id), title(title), description(desc), isCompleted(false) {}

        void complete() { isCompleted = true; }

        int getId() const { return id; }
        std::string getTitle() const { return title; }
        std::string getDescription() const { return description; }
        bool getStatus() const { return isCompleted; }
};

class ToDoList{
    private:
        std::map<int, Task> tasks;

    public:
        // returns true if inserted, false if priority already exists
        bool addTask(int priority, const Task& task){
            auto res = tasks.insert({priority, task});
            return res.second;
        }

        void removeTask(int priority){
            tasks.erase(priority);
        }

        void completedTask(int priority){
            auto it = tasks.find(priority);
            if (it != tasks.end()) {
                it->second.complete();
            } else {
                std::cout << "Task not found.\n";
            }
        }

        Task* getTask(int priority){
            auto it = tasks.find(priority);
            if (it != tasks.end())
                return &it->second;
            return nullptr;
        }

        void listTasks(){
            for (auto& [priority, task] : tasks) {
                std::cout << priority << ": " << task.getTitle();

                if (task.getStatus())
                    std::cout << " (completed)";

                std::cout << "\n";
            }
        }
};


int main() {
    ToDoList todo;
    int nextId = 1;

    while (true) {
        std::cout << "\n=== To-Do List Menu ===\n";
        std::cout << "1) Add task\n";
        std::cout << "2) Remove task\n";
        std::cout << "3) Mark task completed\n";
        std::cout << "4) List tasks\n";
        std::cout << "5) View task details\n";
        std::cout << "0) Exit\n";
        std::cout << "Choice: ";

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        // consume remaining newline
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 0) {
            std::cout << "Goodbye!\n";
            break;
        }

        switch (choice) {
            case 1: {
                int priority;
                std::cout << "Enter priority (integer): ";
                if (!(std::cin >> priority)) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid priority.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::string title;
                std::string desc;
                std::cout << "Title: ";
                std::getline(std::cin, title);
                std::cout << "Description: ";
                std::getline(std::cin, desc);

                if (todo.addTask(priority, Task(nextId++, title, desc))) {
                    std::cout << "Task added with priority " << priority << ".\n";
                } else {
                    std::cout << "Priority " << priority << " already in use. Choose a different priority.\n";
                }
                break;
            }

            case 2: {
                int priority;
                std::cout << "Enter priority of task to remove: ";
                if (!(std::cin >> priority)) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid priority.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                todo.removeTask(priority);
                std::cout << "Removed task (if it existed).\n";
                break;
            }

            case 3: {
                int priority;
                std::cout << "Enter priority of task to mark completed: ";
                if (!(std::cin >> priority)) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid priority.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                todo.completedTask(priority);
                break;
            }

            case 4:
                todo.listTasks();
                break;

            case 5: {
                int priority;
                std::cout << "Enter priority to view details: ";
                if (!(std::cin >> priority)) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid priority.\n";
                    break;
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                Task* t = todo.getTask(priority);
                if (t) {
                    std::cout << "ID: " << t->getId() << "\n";
                    std::cout << "Title: " << t->getTitle() << "\n";
                    std::cout << "Description: " << t->getDescription() << "\n";
                    std::cout << "Status: " << (t->getStatus() ? "Completed" : "Pending") << "\n";
                } else {
                    std::cout << "Task not found.\n";
                }
                break;
            }

            default:
                std::cout << "Unknown option. Please try again.\n";
                break;
        }
    }

    return 0;
}