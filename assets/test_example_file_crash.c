/* =========================================================================
    Ceedling - Test-Centered Build System for C
    ThrowTheSwitch.org
    Copyright (c) 2010-25 Mike Karlesky, Mark VanderVoord, & Greg Williams
    SPDX-License-Identifier: MIT
========================================================================= */

#include <signal.h>
#include "unity.h"
#include "example_file.h"


void setUp(void) {}
void tearDown(void) {}

void test_add_numbers_adds_numbers(void) {
  TEST_ASSERT_EQUAL_INT(2, add_numbers(1,1));
}

void test_add_numbers_will_fail(void) {
  // Platform-independent way of forcing a crash
  uint32_t* nullptr = (void*) 0;
  uint32_t i = *nullptr;
  TEST_ASSERT_EQUAL_INT(2, add_numbers(i,2));
}
