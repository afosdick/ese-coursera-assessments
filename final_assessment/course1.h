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
 * @file course1.h 
 * @brief This file is to be used to course 1 final assessment.
 *
 * @author Alex Fosdick
 * @date April 2, 2017
 *
 */
#ifndef __COURSE1_H__
#define __COURSE1_H__

#define BASE_2  (2)
#define BASE_3  (3)
#define BASE_8  (8)
#define BASE_10 (10)
#define BASE_16 (16)

#define DATA_SET_SIZE_W (10)
#define SET_SIZE (32)
#define SET_SIZE_W (8)
#define SET_SIZE_W (8)
#define TEST_MOVE_LENGTH (16)
#define TEST_SET_LENGTH (32)
#define TEST_ZERO_LENGTH (16)

/**
 * @brief function to run course1 materials
 * 
 * This function calls some various simple tests that you can run to test 
 * your code for the course 1 final assesment. The contents of these functions
 * have been provided. 
 *
 * @return void
 */
void course1();

/**
 * @brief function to run course1 data operations
 * 
 * This function calls the my_itoa and my_atoi functions to validate they
 * work as expected. These call functions that the learner defines. They will
 * have to keep their function definitions consistent to the assignment. 
 *
 * @return void
 */
void test_data();

/**
 * @brief function to test the non-overlapped memmove operation
 * 
 * This function calls the memmove routine with two sets of data that do not
 * over lap in anyway. This function should print that a move worked correctly
 * for a move from source to destination.
 *
 * @return void
 */
void test_memmove1();

/**
 * @brief function to test an overlapped Memmove operation Part 1
 * 
 * This function calls the memmove routine with two sets of data that not
 * over lap. Overlap exists at the start of the destination and the end of the
 * source pointers. This function should print that a move worked correctly
 * for a move from source to destination regardless of overlap.
 *
 * @return void
 */
void test_memmove2();

/**
 * @brief function to run course1 data test part 2
 * 
 * This function calls the memmove routine with two sets of data that not
 * over lap. Overlap exists at the start of the source and the end of the
 * destination pointers. This function should print that a move worked correctly
 * for a move from source to destination regardless of overlap.
 *
 * @return void
 */
void test_memmove3();

/**
 * @brief function to run course1 memmove test 
 * 
 * This function calls the memory.c and stats.c functions to validate they
 * work as expected. These call functions that the learner defines. They will
 * have to keep their function definitions consistent to the assignment. 
 *
 * @return void
 */
void test_memcopy();

/**
 * @brief function to test the memcopy functionality
 * 
 * This function calls the my_memcopy functions to validate a copy works
 * correctly. 
 *
 * @return void
 */
void test_memory4();

/**
 * @brief function to test the memset and memzero functionality
 * 
 * This function calls the memset and memzero functions. This shoudl zero out
 * the bytes from [] to []. This should set the bytes [] to [] with 0xFF.
 *
 * @return void
 */
void test_memset();

/**
 * @brief function to test the reverse functionality
 * 
 * This function calls the my_reverse function to see if a give set of ASCII
 * characters will properly reverse.
 *
 * @return void
 */
void test_reverse();

#endif /* __COURSE1_H__ */

