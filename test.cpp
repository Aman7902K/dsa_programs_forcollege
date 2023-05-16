#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student {
    int roll;
    string name;
    string course;
};

int main() {
    fstream out;
    out.open("Student_data2.txt",ios::in | ios::out);
    if (!out) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    
    int roll_to_delete;
    cout << "Enter roll number to delete: ";
    cin >> roll_to_delete;
    
    // read data from file into memory
    Student student;
    bool found = false;
    while (out >> student.roll >> student.name >> student.course) {
        if (student.roll == roll_to_delete) {
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Roll number not found." << endl;
        return 0;
    }
    
    // delete the record from memory
    out.clear();
    out.seekg(0, ios::beg);
    fstream tmp;
    tmp.open("temp.txt", ios::out);
    while (out >> student.roll >> student.name >> student.course) {
        if (student.roll != roll_to_delete) {
            tmp << student.roll << " " << student.name << " " << student.course << endl;
        }
    }
    out.close();
    tmp.close();
    
    // replace the file with the updated data
    remove("Student_data2.txt");
    rename("temp.txt", "Student_data2.txt");
    
    cout << "Record deleted." << endl;
    return 0;
}
