# Hack Recursive Function Stack Overflow

This repository demonstrates a common error in Hack involving stack overflow in recursive functions.  Hack, unlike some other languages, doesn't perform tail-call optimization, meaning recursive calls accumulate on the stack.  This can lead to a stack overflow error if the recursion depth is too great.

The `bug.hh` file contains the buggy code. The `bugSolution.hh` provides a solution using iteration.