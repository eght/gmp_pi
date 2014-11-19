#pragma once

#include "base/base.h"
#include <gmp.h>

namespace pi {

class Chudnovsky {
 public:
  Chudnovsky();
  ~Chudnovsky();

  void Init(int64 digits);
  void Compute(mpf_t pi);

 protected:
  void BinarySplit(int64 low, int64 up,
                   mpz_t a0, mpz_t b0, mpz_t c0,
                   bool formar);

  // Set values of A[k], B[k], and C[k].
  void SetValues(int64 k, mpz_t a, mpz_t b, mpz_t c);

  int64 num_terms_;
};

}  // namespace pi