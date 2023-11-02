The Euclidean ALgorithm using MOD
This algorithm uses MOD operation recursively between 2 numbers in an attempt to find the Greatest common divisor by outputting the divisor when remainder==0.
For example,the GCD of 20,15:
x%y
until remainder==0 and we output the latest value of y
20%15==5
15%5==0
GCD=5
