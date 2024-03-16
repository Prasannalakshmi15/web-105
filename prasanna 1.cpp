#include <iostream>
#include <vector>

class Course;

class User {
protected:
    int userId;
    std::string name;

public:
    User(int _userId, const std::string& _name) : userId(_userId), name(_name) {}
};

class Student : public User {
private:
    std::vector<Course> enrolledCourses;

public:
    Student(int _studentId, const std::string& _name) : User(_studentId, _name) {}

    void enrollCourse(const Course& course) {
        // Implementation to enroll in a course
        enrolledCourses.push_back(course);
    }

    void viewGrades() const {
        // Implementation to view grades
        // Assuming grades are associated with courses
    }
};

class Faculty : public User {
private:
    std::vector<Course> taughtCourses;

public:
    Faculty(int _facultyId, const std::string& _name) : User(_facultyId, _name) {}

    void assignGrade(const Student& student, const Course& course, double grade) {
        // Implementation to assign grades to a student in a course
    }

    void viewEnrolledStudents(const Course& course) const {
        // Implementation to view students enrolled in a course
    }
};

class Administrator : public User {
private:
    // Assuming some data or methods specific to administrators

public:
    Administrator(int _adminId, const std::string& _name) : User(_adminId, _name) {}

    void addCourse(const Course& course) {
        // Implementation to add a new course to the system
    }

    void manageUsers() {
        // Implementation to manage users, e.g., add, remove, or modify user details
    }
};

class Course {
private:
    int courseId;
    std::string courseName;

public:
    Course(int _courseId, const std::string& _courseName) : courseId(_courseId), courseName(_courseName) {}
};

int main() {
    // Sample usage of the classes
    Student student(1, "John Doe");
    Faculty faculty(101, "Dr. Smith");
    Administrator admin(1001, "Admin");

    Course mathCourse(1, "Mathematics");
    Course physicsCourse(2, "Physics");

    student.enrollCourse(mathCourse);
    faculty.assignGrade(student, mathCourse, 85.5);

    admin.addCourse(physicsCourse);

    return 0;
}
