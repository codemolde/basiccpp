#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // variables
    int choice;
    int i;
    int Ctask;
    int Dtask;
    char choice2;
    string new_task;
    vector<string> tasks;
    bool loop = true;

    // main loop
    while (loop) {
        cout << "\033[1;31;46m~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << endl;
        cout << "\033[1;31;46m| ##--To-Do-List-Menu--## |\033[0m" << endl;
        cout << "\033[1;31;46m| 1. create a new task.   |\033[0m" << endl;
        cout << "\033[1;31;46m| 2. task pending.        |\033[0m" << endl;
        cout << "\033[1;31;46m| 3. task completed.      |\033[0m" << endl;
        cout << "\033[1;31;46m| 4. delete task.         |\033[0m" << endl;
        cout << "\033[1;31;46m| 5. exit.                |\033[0m" << endl;
        cout << "\033[1;31;46m~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << endl;
        cout << "\033[1;36m   Enter your choice: \033[0m";

        while (!(cin >> choice)) {
            cout << "\033[7;31;40mPlease enter a valid choice.\033[0m" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cin.ignore();

        ofstream file("userData.txt", ios::app);

        switch (choice) {
            case 1:
                cout << "\033[1;33mEnter your new task.\033[0m" << endl;
                if (file.is_open()) {
                    getline(cin, new_task);
                    file << new_task << endl;
                    file.close();
                    cout << "\033[1;32msaved successfully!\033[0m" << endl;
                } else {
                    cout << "could not save to file!" << endl;
                }
                break;

            case 2: {
                cout << "\033[1;31;46m##--Here is your all pending task--##\033[0m" << endl;
                ifstream file("userData.txt");
                if (file.is_open()) {
                    file.clear();
                    file.seekg(0, ios::beg);
                    i = 1;
                    if (file.peek() == EOF) {
                        cout << "\033[4;36mno pending task!!\033[0m" << endl;
                        break;
                    }

                    while (getline(file, new_task)) {
                        cout << i << ". " << new_task << endl;
                        i++;
                    }
                    file.close();
                } else {
                    cout << "Failed to print" << endl;
                }
                cout << "\033[1;31;46m##---------------------------------##\033[0m" << endl;
                break;
            }

            case 3: {
                cout << "\033[1;31;46m##--Here are all tasks--##\033[0m" << endl;
                ifstream file("userData.txt");
                tasks.clear();
                string line;

                if (file.is_open()) {
                    while (getline(file, line)) {
                        if (!line.empty()) {
                            tasks.push_back(line);
                        }
                    }
                    file.close();

                    if (tasks.empty()) {
                        cout << "\033[4;36mno pending task!!\033[0m" << endl;
                    }

                    for ( i = 0; i < tasks.size(); ++i ) {
                        cout << (i + 1) << ". " << tasks[i] << endl;
                    }
                } else {
                    cout << "Failed to open file!" << endl;
                    break;
                }

                cout << "\033[1;31;46m##---------------------##\033[0m" << endl;

                cout << "\033[1;31;46m##--Here is your all completed task--##\033[0m" << endl;
                ifstream file2("completed_task.txt");
                if (file2.is_open()) {
                    i = 1;
                    if (file2.peek() == EOF) {
                        cout << "\033[4;36mno completed task!!\033[0m" << endl;
                    } else {
                        while (getline(file2, line)) {
                            cout << i << ". " << line << endl;
                            i++;
                        }
                    }
                    file2.close();
                } else {
                    cout << "Failed to open completed tasks!" << endl;
                }

                cout << "\033[1;31;43m##---------------------------------##\033[0m" << endl;

                cout << "\033[3;33mDo you want to mark any task to be marked as completed (y/n): \033[0m";
                cin >> choice2;

                if (choice2 == 'y' || choice2 == 'Y') {
                    cout << "\033[1;36mEnter your task number to mark as completed: \033[0m";
                    while (!(cin >> Ctask) || Ctask < 1 || Ctask > tasks.size()) {
                        cout << "\033[7;31mPlease enter a valid task.\033[0m" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cin.ignore();

                    ofstream file2("completed_task.txt", ios::app);
                    file2 << tasks[Ctask - 1] << endl;
                    file2.close();

                    tasks.erase(tasks.begin() + (Ctask - 1));

                    ofstream outfile("userData.txt");
                    for (const auto& task : tasks) {
                        outfile << task << endl;
                    }
                    outfile.close();

                    cout << "\033[1;32mtask marked as completed!\033[0m" << endl;
                }

                if (choice2 == 'n' || choice2 == 'N') {
                    break;
                }

                break;
            }

            case 4: {
                tasks.clear();
                ifstream file("userData.txt");
                string line;
                if (file.is_open()) {
                    while (getline(file, line)) {
                        if (!line.empty()) {
                            tasks.push_back(line);
                        }
                    }
                    file.close();
                } else {
                    cout << "Failed to open file!" << endl;
                    break;
                }

                if (!tasks.empty()) {
                    cout << "\033[1;36mEnter your task number to be deleted: \033[0m";
                    while (!(cin >> Dtask) || Dtask < 1 || Dtask > tasks.size()) {
                        cout << "\033[7;31mPlease enter a valid task.\033[0m" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cin.ignore();
                    ofstream file3("deleted_task.txt", ios::app);
                    file3 << tasks[Dtask - 1] << endl;
                    file3.close();

                    tasks.erase(tasks.begin() + (Dtask - 1));

                    ofstream outfile("userData.txt");
                    for (const auto& task : tasks) {
                        outfile << task << endl;
                    }
                    outfile.close();

                    cout << "\033[4;32mtask deleted!\033[0m" << endl;

                    ofstream file4("deleted_task.txt",ios::trunc);
                    file4.close();

                    tasks.clear();
                    ifstream file2("completed_task.txt");
                    string line2;
                    if (file2.is_open()) {
                        while (getline(file2, line2)) {
                            if (!line2.empty()) {
                                tasks.push_back(line2);
                            }
                        }
                        file2.close();
                    } else {
                        cout << "Failed to open file!" << endl;
                        break;
                    }
                }
                else {
                    cout << "\033[1;31;46m^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\033[0m" << endl;
                    cout << "\033[1;31;46mno pending task to delete\033[0m" << endl;
                    cout << "\033[1;31;46m^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\033[0m" << endl;
                }
// completed task
                tasks.clear();
                ifstream file1("completed_task.txt");
                string line2;
                if (file1.is_open()) {
                    while (getline(file1, line2)) {
                        if (!line2.empty()) {
                            tasks.push_back(line2);
                        }
                    }
                    file1.close();
                } else {
                    cout << "Failed to open file!" << endl;
                    break;
                }
                if (!tasks.empty()) {
                    cout << "\033[1;36mEnter your completed task number to be deleted: \033[0m";
                    while (!(cin >> Dtask) || Dtask < 1 || Dtask > tasks.size()) {
                        cout << "\033[7;31mPlease enter a valid task.\033[0m" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }
                    cin.ignore();
                    ofstream file6("deleted_task.txt", ios::app);
                    file6 << tasks[Dtask - 1] << endl;
                    file6.close();

                    tasks.erase(tasks.begin() + (Dtask - 1));

                    ofstream Cfile("completed_task.txt");
                    for (const auto& task : tasks) {
                        Cfile << task << endl;
                    }
                    Cfile.close();

                    cout << "\033[4;32mtask deleted!\033[0m" << endl;

                    ofstream file5("deleted_task.txt",ios::trunc);
                    file5.close();
                }

                else {
                    cout << "\033[1;31;46m^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\033[0m" << endl;
                    cout << "\033[1;31;46mno completed task to delete\033[0m" << endl;
                    cout << "\033[1;31;46m^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\033[0m" << endl;
                }


                break;
            }
            case 5:
                loop = false;
                break;

            default:
                break;
        }
    }
    cout << "\033[3;35mThanks for using the program!!\033[0m" << endl;

    return 0;
}