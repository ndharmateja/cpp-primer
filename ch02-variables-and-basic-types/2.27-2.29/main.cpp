int main()
{
    // Exercise 2.27 : Which of the following initializations are legal ? Explain why.
    // (a) illegal: int &r = 0 is not okay as only refs to const are allowed to be init with rvalues
    int i = -1, &r = 0;
    // (b) OK: as long as i2 is not const and defined before
    int *const p2 = &i2;
    // (c) OK: as refs to const can be init with rvalues (literals/expressions)
    // and also the const int obj was init
    const int i = -1, &r = 0;
    // (d) OK: as the const ptr is init. doesn't matter if i2 was const or not.
    const int *const p3 = &i2;
    // (e) OK: as p1 is a ptr to a const. doesn't matter if i2 was const or not.
    const int *p1 = &i2;
    // (f) illegal: as there are no const references (only references to const).
    // Also a reference has to be initialized.
    const int &const r2;
    // (g) OK: as r is a reference to const and it's been init. doesn't matter if i was const or not.
    const int i2 = i, &r = i;

    // Exercise 2.28: Explain the following definitions. Identify any that are illegal.
    // (a) illegal: cp is a const ptr that's not been init.
    int i, *const cp;
    // (b) illegal: same issue as (a)
    int *p1, *const p2;
    // (c) illegal: const obj int ic has not been init.
    const int ic, &r = ic;
    // (d) illegal: same issue as (a) and (b) as p3 is a const ptr that's not been init
    const int *const p3;
    // (e) OK: as it is a ptr to const, it can be uninitialized.
    const int *p;

    // Exercise 2.29 : Uing the variables in the previous exercise, which of the following assignments are legal ? Explain why.
    // (a) OK: as i isn't const
    i = ic;
    // (b) illegal: as p3 is a ptr to const and p1 isn't
    // just how a ptr to non-const can't point to a const int obj
    p1 = p3;
    // (c) illegal: p1 is not a ptr to const but ic is a const int
    p1 = &ic;
    // (d) illegal: p3 is a const ptr and can't be reassigned
    p3 = &ic;
    // (e) illegal: p2 is a const ptr and can't be reassigned
    p2 = p1;
    // (f) illegal: ic is a const int obj and can't be reassigned
    ic = *p3;
}