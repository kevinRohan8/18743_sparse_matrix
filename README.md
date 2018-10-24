# 18743_sparse_matrix
18743: Energy efficient sparse matrix multiplication optimizations using different hardware and algorithms.

Sparse matrices form are widely used in modern day applications of big data, data analytics etc. The multiplication of sparse matrices is costly because of the compression algorithm used.

In this project we try and implement various energy efficient sparse matrix multiplication using different hardware and software. 

Progress so far:

Implemented the conventional processing for multiplication of a 4x4 sparse matrix using both CSR and CSC algorithms and ran the power analysis for both of the processes. 

The power consumed by the CSR multiplication was lesser by 0.02W. This is due to the fact that more core-core power is used in the case of CSC sparse matrix multiplication due to increase in the direct memory access operation in CSC sparse matrix multiplication.
