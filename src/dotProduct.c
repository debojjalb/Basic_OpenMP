#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <vectOps.h>

/**
 * @brief Routine to calculate dot product of two vectors
 *
 * @param vect1 Pointer to first vector
 * @param vect2 Pointer to second vector
 * @param vect_len Length of two vectors
 * @param dotpvect Dot proudct of two
 */
double dotProduct(double *vect1, double *vect2, long vect_len)
{
    double dotpvect = 0;

    //Code starts here
    #pragma omp parallel for default(shared) reduction(+ : dotpvect) //openmp
    for(long i=0; i< vect_len; i++) //usual dot product
    {
        dotpvect+=vect1[i] * vect2[i];
    }
    // Code ends here

    return dotpvect;
}