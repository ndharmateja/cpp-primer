int main()
{
    // Exercise 2.30 : For each of the following declarations indicate whether the object
    // being declared has top-level or low-level const.
    int i = 10;
    // v2: top level const
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    // p2: low level, p3: top and low level const, r2: low level const
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    // Exercise 2.31: Given the declarations in the previous exercise determine whether
    // the following assignments are legal. Explain how the top-level or low-level const
    // applies in each case.
    // !OK: as r1 is simply a reference bound to obj v1
    // !so the following line is doing essentially v1 = v2
    // !which is okay as v1 is not const and also r1 is not const
    // !(remember that if the reference to const can't change the obj even if obj is non-const)
    r1 = v2;
    // Illegal: p1 is not low level const, p2 is low level const
    p1 = p2;
    // OK: as p2 is low level const, p1 is not low level const
    p2 = p1;
    // Illegal: p1 is not low level const, p3 is low level const
    p1 = p3;
    // OK: both are low level consts (doesn't matter that p3 is also top level const)
    p2 = p3;
}