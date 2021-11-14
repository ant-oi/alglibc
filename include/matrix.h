#pragma once
#include <...>
#include <...>
#include <...>

struct matrix
{
	uint16_t rows,
	uint16_t columns
	double* data;	
};

struct matrix* new_matrix
(
	uint16_t rows,
	uint16_t columns
);

void free_matrix
(
	struct matrix* M
);

struct matrix* copy_matrix
(
	struct matrix* M 
);

struct matrix* transpose_matrix
(
	struct matrix* M
);

struct matrix* sum_matrix
(
	struct matrix* M1,
	struct matrix* M2
);

struct matrix* multiply_matrix
(
	struct matrix* M1,
	struct matrix* M2
);

struct matrix* power_matrix
(
	struct matrix* M
);

bool equal_matrix
(
	struct matrix* M1,
	struct matrix* M2
);

bool is_triangular_matrix
(
	struct matrix* M
);
