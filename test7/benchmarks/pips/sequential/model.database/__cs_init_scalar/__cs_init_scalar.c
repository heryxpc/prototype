# 60
void __cs_init_scalar(void *__cs_var, int __cs_size)
{
        if (__cs_size == (sizeof(int)))
                *((int *) __cs_var) = __VERIFIER_nondet_int();
        else
        {
                char *__cs_ptr = (char *) __cs_var;
                int __cs_j;
        }
}
