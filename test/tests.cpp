// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include "circle.h"
#include "tasks.h"

// Circle():

TEST(TestCircle, constructorNoThrow) {
  ASSERT_NO_THROW(Circle(10.0));
}

TEST(TestCircle, constructorThrow) {
  ASSERT_THROW(Circle(-10.0), std::invalid_argument);
}

TEST(TestCircle, constructorZeroCorrect) {
  Circle circle(0.0);

  double expected_radius = 0.0;
  double expected_ference = 0.0;
  double expected_area = 0.0;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, constructorSimpleCorrect) {
  Circle circle(1.23);

  double expected_radius = 1.23;
  double expected_ference = 2 * MY_PI * 1.23;
  double expected_area = MY_PI * 1.23 * 1.23;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, constructorSmallCorrect) {
  Circle circle(4.56e-25);

  double expected_radius = 4.56e-25;
  double expected_ference = 2 * MY_PI * 4.56e-25;
  double expected_area = MY_PI * 4.56e-25 * 4.56e-25;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, constructorLargeCorrect) {
  Circle circle(7.89e25);

  double expected_radius = 7.89e25;
  double expected_ference = 2 * MY_PI * 7.89e25;
  double expected_area = MY_PI * 7.89e25 * 7.89e25;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

// setRadius():

TEST(TestCircle, setRadiusNoThrow) {
  Circle circle(10.0);
  ASSERT_NO_THROW(circle.setRadius(100.1));
}

TEST(TestCircle, setRadiusThrow) {
  Circle circle(10.0);
  ASSERT_THROW(circle.setRadius(-100.1), std::invalid_argument);
}

TEST(TestCircle, setRadiusZeroCorrect) {
  Circle circle(100.0);
  circle.setRadius(0.0);

  double expected_radius = 0.0;
  double expected_ference = 0.0;
  double expected_area = 0.0;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, setRadiusSimpleCorrect) {
  Circle circle(100.0);
  circle.setRadius(1.23);

  double expected_radius = 1.23;
  double expected_ference = 2 * MY_PI * 1.23;
  double expected_area = MY_PI * 1.23 * 1.23;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, setRadiusSmallCorrect) {
  Circle circle(100.0);
  circle.setRadius(4.56e-25);

  double expected_radius = 4.56e-25;
  double expected_ference = 2 * MY_PI * 4.56e-25;
  double expected_area = MY_PI * 4.56e-25 * 4.56e-25;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, setRadiusLargeCorrect) {
  Circle circle(100.0);
  circle.setRadius(7.89e25);

  double expected_radius = 7.89e25;
  double expected_ference = 2 * MY_PI * 7.89e25;
  double expected_area = MY_PI * 7.89e25 * 7.89e25;

  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

// setFerence():

TEST(TestCircle, setFerenceNoThrow) {
  Circle circle(10.0);
  ASSERT_NO_THROW(circle.setFerence(100.1));
}

TEST(TestCircle, setFerenceThrow) {
  Circle circle(10.0);
  ASSERT_THROW(circle.setFerence(-100.1), std::invalid_argument);
}

TEST(TestCircle, setFerenceZeroCorrect) {
  Circle circle(100.0);
  circle.setFerence(0.0);

  double expected_ference = 0.0;
  double expected_radius = 0.0;
  double expected_area = 0.0;

  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, setFerenceSimpleCorrect) {
  Circle circle(100.0);
  circle.setFerence(1.23);

  double expected_ference = 1.23;
  double expected_radius = 1.23 / (2 * MY_PI);
  double expected_area = MY_PI * expected_radius * expected_radius;

  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, setFerenceSmallCorrect) {
  Circle circle(100.0);
  circle.setFerence(4.56e-25);

  double expected_ference = 4.56e-25;
  double expected_radius = 4.56e-25 / (2 * MY_PI);
  double expected_area = MY_PI * expected_radius * expected_radius;

  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

TEST(TestCircle, setFerenceLargeCorrect) {
  Circle circle(100.0);
  circle.setFerence(7.89e25);

  double expected_ference = 7.89e25;
  double expected_radius = 7.89e25 / (2 * MY_PI);
  double expected_area = MY_PI * expected_radius * expected_radius;

  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
}

// setArea():

TEST(TestCircle, setAreaNoThrow) {
  Circle circle(10.0);
  ASSERT_NO_THROW(circle.setArea(100.1));
}

TEST(TestCircle, setAreaThrow) {
  Circle circle(10.0);
  ASSERT_THROW(circle.setArea(-100.1), std::invalid_argument);
}

TEST(TestCircle, setAreaZeroCorrect) {
  Circle circle(100.0);
  circle.setArea(0.0);

  double expected_area = 0.0;
  double expected_radius = 0.0;
  double expected_ference = 0.0;

  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
}

TEST(TestCircle, setAreaSimpleCorrect) {
  Circle circle(100.0);
  circle.setArea(1.23);

  double expected_area = 1.23;
  double expected_radius = std::sqrt(1.23 / MY_PI);
  double expected_ference = 2 * MY_PI * expected_radius;

  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
}

TEST(TestCircle, setAreaSmallCorrect) {
  Circle circle(100.0);
  circle.setArea(4.56e-25);

  double expected_area = 4.56e-25;
  double expected_radius = std::sqrt(4.56e-25 / MY_PI);
  double expected_ference = 2 * MY_PI * expected_radius;

  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
}

TEST(TestCircle, setAreaLargeCorrect) {
  Circle circle(100.0);
  circle.setArea(7.89e25);

  double expected_area = 7.89e25;
  double expected_radius = std::sqrt(7.89e25 / MY_PI);
  double expected_ference = 2 * MY_PI * expected_radius;

  ASSERT_DOUBLE_EQ(circle.getArea(), expected_area);
  ASSERT_DOUBLE_EQ(circle.getRadius(), expected_radius);
  ASSERT_DOUBLE_EQ(circle.getFerence(), expected_ference);
}

// earthAndRope():

TEST(TestTask, earthAndRopeTest) {
  double first_radius = 6378100.0;
  double first_length = 2 * MY_PI * first_radius;

  double second_length = first_length + 1.0;
  double second_radius = second_length / (2 * MY_PI);
  double expected_value = second_radius - first_radius;

  ASSERT_DOUBLE_EQ(earthAndRope(), expected_value);
}

// poolFencePath():

TEST(TestTask, poolFencePathTest) {
  double pool_radius = 3.0;
  double path_width = 1.0;
  double path_price = 1000.0;
  double fence_price = 2000.0;

  double fence_length = 2 * MY_PI * pool_radius;
  double fence_totalcost = fence_length * fence_price;

  double pool_area = MY_PI * pool_radius * pool_radius;
  double full_radius = pool_radius + path_width;
  double full_area = MY_PI * full_radius * full_radius;
  double path_area = full_area - pool_area;
  double path_totalcost = path_price * path_area;

  double expected_value = fence_totalcost + path_totalcost;

  EXPECT_DOUBLE_EQ(poolFencePath(), expected_value);
}
