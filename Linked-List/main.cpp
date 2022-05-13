#include "test.h"

int main(void) {
    std::cout << "insert before\n";
    test::testInsertBefore();
    std::cout << std::endl;

    std::cout << "insert after\n";
    test::testInsertBefore();
    std::cout << std::endl;

    std::cout << "delete before\n";
    test::testDeleteBefore();
    std::cout << std::endl;

    std::cout << "delete after\n";
    test::testDeleteAfter();
    std::cout << std::endl;

    std::cout << "delete given\n";
    test::testDeleteGiven();
    std::cout << std::endl;

    std::cout << "find len\n";
    test::testFindLen();
    std::cout << std::endl;

    return 0;
}