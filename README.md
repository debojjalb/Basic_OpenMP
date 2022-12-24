# Basic_OpenMP

Credits: This work was done as a part of an assignment of course DS226 at IISc, Bengaluru

Basic implementation of L2Norm, Matrix Vector multiplcation and matric multiplication effitiently using OpenMP in C
To run first compile makefile, then run codes in src/assignment2.c using test examples or change with actual input  in test folder

The following information is pasted from the assignment details. All credits to the respective authors. 

1) The main function can be found in assignment2.c. The function readParams reads the data file param.
txt to obtain names of the input files containing the vectors and matrix, and their dimensions. This
way, you can execute your code for vectors of different sizes without having to compile again. Just
copy the input files to your parent folder and fill in the details in param.txt.
2) The main function handles all the declarations and makes calls to l2Norm and MatVectMult.
3) Once you’ve written all parts of your code, you can simply go to the src directory and run the
makefile to compile your project. The executable, assignment2.out can then be run in the parent
folder.
```
cd src/
make
cd ../
./assignment2.out
```
When you run the main program, you should get daxpy.txt (from when Daxpy is called in the L2
error routine),l2error.txt and matvectmult.txt as outputs.
