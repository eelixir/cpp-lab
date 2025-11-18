#include <iostream>
#include <map>
#include <limits>

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
        void addTask(int priority, const Task& task){
            tasks.insert({priority, task});  
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
    
}