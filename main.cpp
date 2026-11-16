#include <iostream>
#include <vector>

// 简单示例：用于验证编译、IntelliSense 与调试是否正常工作
int sum(const std::vector<int>& nums) {
    int total = 0;
    for (int n : nums) {
        total += n;
    }
    return total;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Hello from MinGW C++!" << std::endl;
    std::cout << "Sum = " << sum(nums) << std::endl;
    return 0;
}
