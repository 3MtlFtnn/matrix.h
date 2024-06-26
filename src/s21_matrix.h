// generated with chat.mistral.ai gpt camry 3.5
#ifndef S21_MATRIX_H
#define S21_MATRIX_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE 1
#define CALC_ERR 2

#define COMP_SUCCESS 1
#define COMP_FAILURE 0

typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

// Создание и удаление
int s21_create_matrix(int rows, int columns, matrix_t *result);
void s21_remove_matrix(matrix_t *A);

// Сравнение
int s21_eq_matrix(matrix_t *A, matrix_t *B);

// Арифметические операции
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
/* умножение скалярного числа (number) */
int s21_mult_number(matrix_t *A, double number, matrix_t *result);
/* умножение матриц */
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

// Другие операции
int s21_transpose(matrix_t *A, matrix_t *result);
int s21_calc_complements(matrix_t *A, matrix_t *result);
int s21_determinant(matrix_t *A, double *result);
int s21_inverse_matrix(matrix_t *A, matrix_t *result);

// Вспомогательные функции
int matrix_print(matrix_t *A);
int matrix_copy(matrix_t *source, matrix_t *destination);
int matrix_filler(matrix_t *A);
int matrix_filler_random(matrix_t *A);
double matrix_get_determinant(matrix_t *A);
int matrix_divide_row(matrix_t *matrix, int pivot);
int matrix_reduce_row(matrix_t *matrix);

double randfrom(double min, double max);
void matrix_minor(double **A, double **result, int minrow, int mincol,
                  int size);
void matrix_carry_row(matrix_t *multiplier_matrix, matrix_t *matrix, int pivot,
                      int row_index);
#endif
