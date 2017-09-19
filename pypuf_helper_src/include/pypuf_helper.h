/*
 * C header file of the pypuf_helper module.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void
eval_id_xor(const int64_t* inputs, const double* weights,
            uint64_t n, uint64_t k, uint64_t N,
            int64_t** ret_ptr);

/*
 * Parameters
 * inputs  - Pointer to the challenges to transform (shape: (N, k))
 * n 	   - Bitlength of the Aribter PUF
 * k 	   - Number of used Arbiter chains
 * N 	   - Number of challenges
 * ret_ptr - Address of the pointer that will contain the transformed
 * 		     challenges containing of -1, 1 (shape: (N, k, n)).
 */
void
transform_id(const int64_t* inputs,
          	 uint64_t n, uint64_t k, uint64_t N,
          	 int64_t** ret_ptr);

/*
 * The function eval takes as input a set of N transformed challenges
 * for a n-bit k-Arbiter PUF. That means that the input should have
 * shape (N, k, n). This set of challenges is evaluated with a
 * n-bit k-Arbiter PUF and the individual responses for each Aribter
 * chain are created.
 *
 * Parameters
 * inputs  - Pointer to the challenges (shape: (N, k, n))
 * weiths  - Pointer to the weights of the Arbiter PUF 
 *			 (shape: (k, n))
 * n 	   - Bitlength of the Aribter PUF
 * k 	   - Number of used Arbiter chains
 * N 	   - Number of challenges
 * ret_ptr - Address of the pointer that will contain the evaluated
 * 		     challenges containing of -1, 1 (shape: (N, k)). That
 * 			 means that eval() returns the sign of the evaluated
 * 			 challenges.
 */
void
eval(const int64_t* inputs, const double* weights,
     uint64_t n, uint64_t k, uint64_t N,
     int64_t** ret_ptr);
/*
 * Parameters
 * inputs  - Pointer to the evaluated challenges (shape: (N, k))
 * k 	   - Number of used Arbiter chains
 * N 	   - Number of challenges
 * ret_ptr - Address of the pointer that will contain the evaluated
 * 		     and combined challenges containing of -1, 1 (shape: (N)).
 */
void
combiner_xor(const int64_t* inputs,
             uint64_t k, uint64_t N,
             int64_t** ret_ptr);

