
// change the below code
//  the function below now only works with integers, change it to work with any
//  type also fill out the body
template <typename WhatType> void multiples(WhatType &sum, WhatType x, int n) {
  sum = 1;
  for (int i = 0; i <= (int)n; i++) {
    sum += x * n;
  }
}
