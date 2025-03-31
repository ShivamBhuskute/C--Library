#include <iostream>
#include <memory>
#include <utility>

// Because std::unique_ptr is designed with move semantics in mind, copy
// initialization and copy assignment are disabled. If you want to transfer the
// contents managed by std::unique_ptr, you must use move semantics. In the
// program above, we accomplish this via std::move (which converts res1 into an
// r-value, which triggers a move assignment instead of a copy assignment).

class Resource {
   public:
    Resource() { std::cout << "Resource created" << "\n"; }

    ~Resource() { std::cout << "Resource destroyed" << "\n"; }
};

int main() {
    std::unique_ptr<Resource> res1{new Resource()}; // here resource is created
    std::unique_ptr<Resource> res2{}; // null ptr

    std::cout << "res1 is " << (res1 ? "not null\n" : "null\n");
	std::cout << "res2 is " << (res2 ? "not null\n" : "null\n");

    // res1 = res2; wont compile as copy assignment is disabled
    res2 = std::move(res1);

	std::cout << "Ownership transferred\n";

    std::cout << "res1 is " << (res1 ? "not null\n" : "null\n");
	std::cout << "res2 is " << (res2 ? "not null\n" : "null\n");
}