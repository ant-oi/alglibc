#include "../include/matrix.h"

#include <stdio.h>
#include <stdint.h>

typedef struct matrix matrix

matrix* new_matrix( uint16_t rows, uint16_t columns )
{
	matrix* return_matrix = (matrix*)malloc( sizeof( matrix ) );

	return_matrix->rows = rows;
	return_matrix->columns = columns;

	return_matrix->data = (double*)malloc( sizeof( double ) * rows * columns );
	size_t index;
	for( index = 0; index < rows * columns; ++i )
	{
		return_matrix->data[ i ] = 0.0;
	}

	return return_matrix;
}

void free_matrix( matrix* M )
{
	free( M->data );
	free( M );
}

matrix* copy_matrix( matrix* M )
{
	matrix* copy_m = new_matrix( M->rows, M->columns );
	memcpy( copy_m->data, M->data, M->rows * M->columns * sizeof( double );

	return copy_m;
}

matrix* transpose_matrix( matrix* M )
{
	matrix* transposed_matrix = new_matrix( M->columns, M->rows );

	uint16_t rows, columns;
	for( rows = 1; rows <= M->rows; ++rows )
		for( columns = 1; columns <= M->columns; ++columns )
			transposed_matrix->data[ ( rows - 1 ) * M->rows + ( columns - 1 )] = M->data[ ( columns - 1) * M->rows + ( rows - 1 ) ];

	return transposed_matrix;
}

matrix* sum_matrix( matrix* M1, matrix* M2 )
{
	matrix* summed_matrix = new_matrix( M1->rows, M1->columns );

	uint16_t rows, columns;
	for( rows = 1; rows <= M1->rows; ++rows )
		for( columns = 1; columns <= M1->columns; ++columns )
			summed_matrix->data[ ( columns - 1) * M1->rows + ( rows - 1 ) ] = M1->data[ ( columns - 1 ) * M1->rows + ( rows - 1 ) ] + M2->data[ ( columns - 1 ) * M2->rows + ( rows - 1 ) ];

	return summed_matrix;
}

matrix* multiply_matrix( matrix* M1, matrix* M2 )
{
	matrix* product_matrix = new_matrix( M1->rows, M2->columns );

	uint16_t rows, columns;
}
