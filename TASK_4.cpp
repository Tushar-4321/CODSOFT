#include <iostream>
#include <vector>
#include <string>

// MAKING A SIMPEL CONSOLE BASED TO DO LIST

class Taskss {
public:
    std::string description;
    bool completed;

    Taskss(std::string desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    std::vector<Taskss> tasks;

public:
    void addTask(const std::string& description) {
        tasks.push_back(Taskss(description));
        std::cout << "Task added: " << description << std::endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks in the list." << std::endl;
            return;
        }

        int i = 0;
        while(i < tasks.size()){
            std::cout << i + 1 << ". " << tasks[i].description 
              << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]" << std::endl;
              ++i;
        }
    }

    void mark_Task_as_Completed(int index) {
        while (index < 1 || index > tasks.size()) {
           std:: cout << "Task number is invalid." << std::endl;
            return;
        }

        tasks[index - 1].completed = true;
       std:: cout << "Task is marked as completed: " << tasks[index - 1].description << std::endl;
    }

    void removeTask(int index) {
        while (index < 1 || index > tasks.size()) {
            std::cout << "Task number is invalid." << std::endl;
            return;
        }

        std::cout << "Task is removed: " << tasks[index - 1].description << std::endl;
        tasks.erase(tasks.begin() + index - 1);
    }
};

int main() {
    ToDoList todoList;
    int your_choice;
    std::string description;
    int task_Number;

    while (true) {
        std::cout << "\n*---------------TO-DO LIST MANAGER---------------*\n";
        std::cout << "1. Add New Task\n";
        std::cout << "2. View Your Tasks\n";
        std::cout << "3. Mark This Task as Completed\n";
        std::cout << "4. Remove The Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Please enter your choice: ";
        std::cin >> your_choice;

        while (your_choice) {
             if(your_choice == 1){
                std:: cout << "Enter  your task description: ";
                 std::cin.ignore();
                 std::getline(std::cin, description);
                 todoList.addTask(description);
                 break;}
             if(your_choice == 2){
                 todoList.viewTasks();
                 break;}
             if(your_choice == 3){
                 std::cout << "Enter the task number to be mark as completed: ";
                 std::cin >> task_Number;
                 todoList.mark_Task_as_Completed(task_Number);
                 break;}
             if(your_choice == 4){
                 std::cout << "Enter the task number to be removed: ";
                 std::cin >> task_Number;
                 todoList.removeTask(task_Number);
                 break;}
             if(your_choice == 5){
                 return 0;}
             else{
                 std::cout << "Choice is Invalid. Please try again." << std::endl;}
         }
       
        }
    }

