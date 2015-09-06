# 52
void *__cs_safe_malloc(int __cs_size)
 {
        void *__cs_ptr = malloc(__cs_size);
        __VERIFIER_assume(__cs_ptr);
        return __cs_ptr;
}
