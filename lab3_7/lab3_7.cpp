#include <iostream>

class Student {
private:
    static int instanceCount; 

public:
    // Constructor
    Student() {
        instanceCount++; 
    }

    // Destructor
    ~Student() {
        instanceCount--; 
    }

    
    static int getInstanceCount() {
        return instanceCount;
    }
};


int Student::instanceCount = 0;

int main() {
    
    Student student1;
    Student student2;
    Student student3;

    
    std::cout << "Number of instances: " << Student::getInstanceCount() << std::endl;

    

    
    std::cout << "Number of instances after destruction: " << Student::getInstanceCount() << std::endl;

    return 0;
}
