function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will cause a stack overflow error if x is a large number.  Hack doesn't have built-in tail-call optimization, so the recursive calls accumulate on the stack until it overflows.