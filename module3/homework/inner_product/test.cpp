#include <vector>
#include <math.h>

#include "arithmeticAverage.hpp"
#include "gtest/gtest.h"

bool cmp(double first, double second, double epsilon = 0.5) {
    return (fabs(first - second) < epsilon);
}

TEST(arithmeticAverageTest, ShouldCalculateArithmeticAverage) {
    std::vector<int> first{-5, 4, 2, -5, 2, 4, 6, 7};
    std::vector<int> second{3, 5, -2, 6, 7, -3, 6, 9};
    EXPECT_TRUE(cmp(ArithmeticAverage(first, second), 2.875));
}

TEST(arithmeticAverageTest, ShouldCalculateArithmeticAverageWhenFirstVectorIsLonger) {
    std::vector<int> first{2, 3, 4};
    std::vector<int> second{5, 6};
    EXPECT_TRUE(cmp(ArithmeticAverage(first, second), 4));
}

TEST(arithmeticAverageTest, ShouldCalculateArithmeticAverageWhenFirstVectorIsShorter) {
    std::vector<int> first{2, 3};
    std::vector<int> second{4, 5, 6};
    EXPECT_TRUE(cmp(ArithmeticAverage(first, second), 4));
}

TEST(arithmeticAverageTest, ShouldCalculateArithmeticAverageWhenFirstVectorIsEmpty) {
    std::vector<int> first{};
    std::vector<int> second{6, 10};
    EXPECT_TRUE(cmp(ArithmeticAverage(first, second), 8));
}

TEST(arithmeticAverageTest, ShouldCalculateArithmeticAverageWhenSecondVectorIsEmpty) {
    std::vector<int> first{6, 10};
    std::vector<int> second{};
    EXPECT_TRUE(cmp(ArithmeticAverage(first, second), 8));
}

TEST(arithmeticAverageTest, ShouldThrowInvalidArgumentWhenBothVectorsAreEmpty) {
    std::vector<int> first{};
    std::vector<int> second{};
    EXPECT_THROW(ArithmeticAverage(first, second), std::invalid_argument);
}




TEST(arithmeticAverageTest, ShouldCalculateDistance) {
    std::vector<int> first{7, 4, 3};
    std::vector<int> second{17, 6, 2};
    EXPECT_TRUE(cmp(Distance(first, second), 10.247));
}

TEST(arithmeticAverageTest, DistanceShouldThrowInvalidArgumentWhenBothVectorsAreEmpty) {
    std::vector<int> first{};
    std::vector<int> second{};
    EXPECT_THROW(Distance(first, second), std::invalid_argument);
}

TEST(arithmeticAverageTest, DistanceShouldThrowInvalidArgumentWhenOneVectorIsEmpty) {
    std::vector<int> first{};
    std::vector<int> second{1,2,3};
    EXPECT_THROW(Distance(first, second), std::invalid_argument);
}

TEST(arithmeticAverageTest, DistanceShouldThrowInvalidArgumentWhenVectorsHaveDifferentSizes) {
    std::vector<int> first{5,6};
    std::vector<int> second{1,2,3};
    EXPECT_THROW(Distance(first, second), std::invalid_argument);
}
