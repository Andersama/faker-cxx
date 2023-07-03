#include "Number.h"

#include "gtest/gtest.h"

using namespace ::testing;
using namespace faker;

class NumberDataGeneratorTest : public Test
{
public:
};

TEST_F(NumberDataGeneratorTest, givenInvalidRangeArguments_shouldThrowInvalidArgument)
{
    ASSERT_THROW(Number::integer(2, 10), std::invalid_argument);
}

TEST_F(NumberDataGeneratorTest, givenRangeWithSameNumberSection_shouldGenerateThisNumber)
{
    const auto actualRandomNumber = Number::integer(2, 2);

    ASSERT_EQ(actualRandomNumber, 2);
}

TEST_F(NumberDataGeneratorTest, givenValidRangeArguments_shouldGenerateNumberThatIsInGivenRange)
{
    const auto actualRandomNumber = Number::integer(10, 2);

    ASSERT_TRUE(actualRandomNumber >= 2);
    ASSERT_TRUE(actualRandomNumber <= 10);
}