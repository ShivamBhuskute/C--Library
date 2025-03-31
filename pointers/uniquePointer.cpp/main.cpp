#include <iostream>
#include <memory>

class Resource {
   public:
    Resource() { std::cout << "Resource created" << "\n"; }

    ~Resource() { std::cout << "Resource destroyed" << "\n"; }
};

int main() {
    // allocate a resource object
    std::unique_ptr<Resource> res { new Resource() };
}