#include "../exercise.h"

// READ: 有 cv 限定符的成员函数 <https://zh.cppreference.com/w/cpp/language/member_functions>

struct Fibonacci {
    int numbers[11];
    // TODO: 修改方法签名和实现，使测试通过
    //重要规则: constexpr 对象只能调用 const 成员函数
    int get(int i) const {
        return numbers[i];
    }
};
// ✅ const 成员函数
    // this 指针类型: const Fibonacci*
    // 不能修改成员变量
    //可以在 const 和非 const 对象上调用
//2. 非const 成员函数特点
// 没有 const 限定符
// this 指针类型为 T*
// 可以修改成员变量
// 只能在非 const 对象上

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
