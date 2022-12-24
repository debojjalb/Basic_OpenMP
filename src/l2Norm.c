#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
#include <vectOps.h>
#include <vectHandling.h>

/**
 * @brief Routine to calculate l2  norm of two vectors
 *
 * @param vect1 Pointer to first vector
 * @param vect2 Pointer to second vector
 * @param n Length of two vectors
 * @param ln2 l2n norm
 */
void l2NormErr(double *vect1, double *vect2, long n)
{

    double l2n = 0; // L2 norm error 

    //Code starts here
    char fname[]="daxpy.txt";
    Daxpy(vect1, vect2, -1.0, n, fname);
    l2n= dotProduct(vect1, vect1, n);
    l2n= sqrt(l2n);
    // Code ends here

    // printf("L2 Norm of the error vector: %lf\n", l2n);
    print1dvect(&l2n, 1, "l2error.txt");

    return;
}