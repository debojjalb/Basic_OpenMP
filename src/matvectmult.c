#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <vectHandling.h>
#include <vectOps.h>


/**
 * @brief Routine to perform matrix vector multiplication
 *
 * @param matrix Pointer to matrix
 * @param vect2 Pointer to vector
 * @param height Height of matrix
 * @param width Width of matrix
 * @param filename Name of output file
 * @param result Result of matrix vector multiplication
 * @param temp A temporary array
 */
void MatVectMult(double *matrix, double *vect, long height, long width, char *filename)
{
    double *result = make1dvect(height);

    //Code starts here
    double *temp=make1dvect(width);

    for(long i=0;i<height;i++)
    {
        #pragma omp parallel for
        for(long j=0; j<width; j++)
        {
            temp[j]=matrix[width*i+j];
        }

        result[i]=dotProduct(temp,vect,width);
    }
    free1dvect(temp);
    // Code ends here


    print1dvect(result, height, filename);
}