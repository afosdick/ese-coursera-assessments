/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file course1.c 
 * @brief This file is to be used to course 1 final assessment.
 *
 * @author Alex Fosdick
 * @date April 2, 2017
 *
 */

#include <stdio.h>
#include <stdint.h>
#include "course1.h"

void course1() {

  test_data();
  test_memmove1();
  test_memmove2();
  test_memmove3();
  test_memcopy();
  test_memset();
  test_reverse();

}

void test_data() {
  uint8_t ret;
  int8_t * ptr;
  int32_t num1 = -4096;
  int32_t num2 = 123456;
  uint32_t digits;
  int32_t value;

  ret = reserve_words( ((uint32_t*)ptr), DATA_SET_SIZE_W);

  if (! ret ) {
    return;
  }

  printf("Initial num1: %d\n", num1);  
  digits = my_itoa(ptr, num1, BASE_16);
  print_array(ptr, digits);
  value = my_atoi(ptr, digits, BASE_16);
  printf("Final num1: %d\n", num1);  

  printf("Initial num2: %d\n", num2);  
  digits = my_itoa(ptr, num2, BASE_10);
  print_array(ptr, digits);
  value = my_atoi(ptr, digits, BASE_10);
  printf("Final num2: %d\n", num2);  

  free_words( (uint32_t*)ptr );

}

void test_memmove1() {
  uint8_t ret, i;
  uint8_t * set;
  uint8_t * ptra = &set[0];
  uint8_t * ptrb = &set[16];

  ret = reserve_words( ((uint32_t*)set), SET_SIZE_W);

  if (! ret ) {
    return;
  }
  /* Initialize the set to test values */
  for( i = 0; i < SET_SIZE; i++) {
    set[i] = i;
  }

  printf("Array before Memmove\n");
  print_array(set, SET_SIZE);
  my_memmove(ptra, ptrb, TEST_MOVE_LENGTH);
  printf("Array after Memmove\n");
  print_array(set, SET_SIZE);

  free_words( (uint32_t*)set );
}

void test_memmove2() {
  uint8_t ret, i;
  uint8_t * set;
  uint8_t * ptra = &set[0];
  uint8_t * ptrb = &set[8];

  ret = reserve_words( ((uint32_t*)set), SET_SIZE_W);

  if (! ret ) {
    return;
  }

  /* Initialize the set to test values */
  for( i = 0; i < SET_SIZE; i++) {
    set[i] = i;
  }

  printf("Array before Memmove\n");
  print_array(set, SET_SIZE);
  my_memmove(ptra, ptrb, TEST_MOVE_LENGTH);
  printf("Array after Memmove\n");
  print_array(set, SET_SIZE);

  free_words( (uint32_t*)set );
}

void test_memmove3() {
  uint8_t ret, i;
  uint8_t * set;
  uint8_t * ptra = &set[8];
  uint8_t * ptrb = &set[0];

  ret = reserve_words( ((uint32_t*)set), SET_SIZE_W);

  if (! ret ) {
    return;
  }

  /* Initialize the set to test values */
  for( i = 0; i < SET_SIZE; i++) {
    set[i] = i;
  }

  printf("Array before Memmove\n");
  print_array(set, SET_SIZE);
  my_memmove(ptra, ptrb, TEST_MOVE_LENGTH);
  printf("Array after Memmove\n");
  print_array(set, SET_SIZE);

  free_words( (uint32_t*)set );

}

void test_memcopy() {
  uint8_t ret, i;
  uint8_t * set;
  uint8_t * ptra = &set[0];
  uint8_t * ptrb = &set[16];

  ret = reserve_words( ((uint32_t*)set), SET_SIZE_W);

  if (! ret ) {
    return;
  }

  /* Initialize the set to test values */
  for( i = 0; i < SET_SIZE; i++) {
    set[i] = i;
  }

  printf("Array before Memcopy\n");
  print_array(set, SET_SIZE);
  my_memcopy(ptra, ptrb, TEST_MOVE_LENGTH);
  printf("Array after Memcopy\n");
  print_array(set, SET_SIZE);

  free_words( (uint32_t*)set );

}

void test_memset() {
  uint8_t ret, i;
  uint8_t * set;
  uint8_t * ptra = &set[0];
  uint8_t * ptrb = &set[16];

  ret = reserve_words( ((uint32_t*)set), SET_SIZE_W);

  if (! ret ) {
    return;
  }

  /* Initialize the set to test values */
  for( i = 0; i < SET_SIZE; i++) {
    set[i] = i;
  }

  printf("Array before Memset\n");
  print_array(set, SET_SIZE);
  my_memset(ptra, TEST_SET_LENGTH, 0xFF);
  printf("Array after Memset\n");
  print_array(set, SET_SIZE);
  my_memzero(ptrb, TEST_ZERO_LENGTH);
  printf("Array after Memclear\n");
  print_array(set, SET_SIZE);

  free_words( (uint32_t*)set );

}

void test_reverse() {
  uint8_t set[SET_SIZE] = { 0x54, 0x68, 0x69, 0x24, 0x20, 0x7c, 0x24, 0x20,
                            0x40, 0x20, 0x4d, 0x21, 0x78, 0x74, 0x75, 0x72,
                            0x33, 0x20, 0x00, 0x6f, 0x66, 0x20, 0x63, 0x48,
                            0x26, 0x72, 0x43, 0x54, 0x33, 0x72, 0x73, 0x3f };

  printf("Array before reverse\n");
  print_array(set, SET_SIZE);
  my_reverse(set, TEST_SET_LENGTH);
  printf("Array after reverse\n");
  print_array(set, SET_SIZE);
}
