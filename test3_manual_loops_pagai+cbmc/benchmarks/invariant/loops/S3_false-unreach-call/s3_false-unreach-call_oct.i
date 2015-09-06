// analysis: AIopt
/* processing Function ssl3_connect */
/* processing Function main */
extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void *malloc(unsigned long sz);



extern int __VERIFIER_nondet_int(void);

typedef unsigned int size_t;
typedef long __time_t;
struct buf_mem_st {
   int length ;
   char *data ;
   int max ;
};
typedef struct buf_mem_st BUF_MEM;
typedef __time_t time_t;
struct stack_st {
   int num ;
   char **data ;
   int sorted ;
   int num_alloc ;
   int (*comp)(char const * const * , char const * const * ) ;
};
typedef struct stack_st STACK;
struct bio_st;
struct bio_st;
struct crypto_ex_data_st {
   STACK *sk ;
   int dummy ;
};
typedef struct crypto_ex_data_st CRYPTO_EX_DATA;
typedef struct bio_st BIO;
typedef void bio_info_cb(struct bio_st * , int , char const * , int , long ,
                         long );
struct bio_method_st {
   int type ;
   char const *name ;
   int (*bwrite)(BIO * , char const * , int ) ;
   int (*bread)(BIO * , char * , int ) ;
   int (*bputs)(BIO * , char const * ) ;
   int (*bgets)(BIO * , char * , int ) ;
   long (*ctrl)(BIO * , int , long , void * ) ;
   int (*create)(BIO * ) ;
   int (*destroy)(BIO * ) ;
   long (*callback_ctrl)(BIO * , int , bio_info_cb * ) ;
};
typedef struct bio_method_st BIO_METHOD;
struct bio_st {
   BIO_METHOD *method ;
   long (*callback)(struct bio_st * , int , char const * , int , long , long ) ;
   char *cb_arg ;
   int init ;
   int shutdown ;
   int flags ;
   int retry_reason ;
   int num ;
   void *ptr ;
   struct bio_st *next_bio ;
   struct bio_st *prev_bio ;
   int references ;
   unsigned long num_read ;
   unsigned long num_write ;
   CRYPTO_EX_DATA ex_data ;
};
struct bignum_st {
   unsigned long *d ;
   int top ;
   int dmax ;
   int neg ;
   int flags ;
};
typedef struct bignum_st BIGNUM;
struct bignum_ctx {
   int tos ;
   BIGNUM bn[16] ;
   int flags ;
   int depth ;
   int pos[12] ;
   int too_many ;
};
typedef struct bignum_ctx BN_CTX;
struct bn_blinding_st {
   int init ;
   BIGNUM *A ;
   BIGNUM *Ai ;
   BIGNUM *mod ;
};
typedef struct bn_blinding_st BN_BLINDING;
struct bn_mont_ctx_st {
   int ri ;
   BIGNUM RR ;
   BIGNUM N ;
   BIGNUM Ni ;
   unsigned long n0 ;
   int flags ;
};
typedef struct bn_mont_ctx_st BN_MONT_CTX;
struct X509_algor_st;
struct X509_algor_st;
struct X509_algor_st;
struct asn1_object_st {
   char const *sn ;
   char const *ln ;
   int nid ;
   int length ;
   unsigned char *data ;
   int flags ;
};
typedef struct asn1_object_st ASN1_OBJECT;
struct asn1_string_st {
   int length ;
   int type ;
   unsigned char *data ;
   long flags ;
};
typedef struct asn1_string_st ASN1_STRING;
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef int ASN1_BOOLEAN;
union __anonunion_value_19 {
   char *ptr ;
   ASN1_BOOLEAN boolean ;
   ASN1_STRING *asn1_string ;
   ASN1_OBJECT *object ;
   ASN1_INTEGER *integer ;
   ASN1_ENUMERATED *enumerated ;
   ASN1_BIT_STRING *bit_string ;
   ASN1_OCTET_STRING *octet_string ;
   ASN1_PRINTABLESTRING *printablestring ;
   ASN1_T61STRING *t61string ;
   ASN1_IA5STRING *ia5string ;
   ASN1_GENERALSTRING *generalstring ;
   ASN1_BMPSTRING *bmpstring ;
   ASN1_UNIVERSALSTRING *universalstring ;
   ASN1_UTCTIME *utctime ;
   ASN1_GENERALIZEDTIME *generalizedtime ;
   ASN1_VISIBLESTRING *visiblestring ;
   ASN1_UTF8STRING *utf8string ;
   ASN1_STRING *set ;
   ASN1_STRING *sequence ;
};
struct asn1_type_st {
   int type ;
   union __anonunion_value_19 value ;
};
typedef struct asn1_type_st ASN1_TYPE;
struct MD5state_st {
   unsigned int A ;
   unsigned int B ;
   unsigned int C ;
   unsigned int D ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct MD5state_st MD5_CTX;
struct SHAstate_st {
   unsigned int h0 ;
   unsigned int h1 ;
   unsigned int h2 ;
   unsigned int h3 ;
   unsigned int h4 ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct SHAstate_st SHA_CTX;
struct MD2state_st {
   int num ;
   unsigned char data[16] ;
   unsigned int cksm[16] ;
   unsigned int state[16] ;
};
typedef struct MD2state_st MD2_CTX;
struct MD4state_st {
   unsigned int A ;
   unsigned int B ;
   unsigned int C ;
   unsigned int D ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct MD4state_st MD4_CTX;
struct RIPEMD160state_st {
   unsigned int A ;
   unsigned int B ;
   unsigned int C ;
   unsigned int D ;
   unsigned int E ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct RIPEMD160state_st RIPEMD160_CTX;
typedef unsigned char des_cblock[8];
union __anonunion_ks_20 {
   des_cblock cblock ;
   unsigned long deslong[2] ;
};
struct des_ks_struct {
   union __anonunion_ks_20 ks ;
   int weak_key ;
};
typedef struct des_ks_struct des_key_schedule[16];
struct rc4_key_st {
   unsigned int x ;
   unsigned int y ;
   unsigned int data[256] ;
};
typedef struct rc4_key_st RC4_KEY;
struct rc2_key_st {
   unsigned int data[64] ;
};
typedef struct rc2_key_st RC2_KEY;
struct rc5_key_st {
   int rounds ;
   unsigned long data[34] ;
};
typedef struct rc5_key_st RC5_32_KEY;
struct bf_key_st {
   unsigned int P[18] ;
   unsigned int S[1024] ;
};
typedef struct bf_key_st BF_KEY;
struct cast_key_st {
   unsigned long data[32] ;
   int short_key ;
};
typedef struct cast_key_st CAST_KEY;
struct idea_key_st {
   unsigned int data[9][6] ;
};
typedef struct idea_key_st IDEA_KEY_SCHEDULE;
struct mdc2_ctx_st {
   int num ;
   unsigned char data[8] ;
   des_cblock h ;
   des_cblock hh ;
   int pad_type ;
};
typedef struct mdc2_ctx_st MDC2_CTX;
struct rsa_st;
struct rsa_st;
typedef struct rsa_st RSA;
struct rsa_meth_st {
   char const *name ;
   int (*rsa_pub_enc)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                      int padding ) ;
   int (*rsa_pub_dec)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                      int padding ) ;
   int (*rsa_priv_enc)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                       int padding ) ;
   int (*rsa_priv_dec)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                       int padding ) ;
   int (*rsa_mod_exp)(BIGNUM *r0 , BIGNUM *I , RSA *rsa ) ;
   int (*bn_mod_exp)(BIGNUM *r , BIGNUM *a , BIGNUM const *p , BIGNUM const *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(RSA *rsa ) ;
   int (*finish)(RSA *rsa ) ;
   int flags ;
   char *app_data ;
   int (*rsa_sign)(int type , unsigned char *m , unsigned int m_len , unsigned char *sigret ,
                   unsigned int *siglen , RSA *rsa ) ;
   int (*rsa_verify)(int dtype , unsigned char *m , unsigned int m_len , unsigned char *sigbuf ,
                     unsigned int siglen , RSA *rsa ) ;
};
typedef struct rsa_meth_st RSA_METHOD;
struct rsa_st {
   int pad ;
   int version ;
   RSA_METHOD *meth ;
   BIGNUM *n ;
   BIGNUM *e ;
   BIGNUM *d ;
   BIGNUM *p ;
   BIGNUM *q ;
   BIGNUM *dmp1 ;
   BIGNUM *dmq1 ;
   BIGNUM *iqmp ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
   int flags ;
   BN_MONT_CTX *_method_mod_n ;
   BN_MONT_CTX *_method_mod_p ;
   BN_MONT_CTX *_method_mod_q ;
   char *bignum_data ;
   BN_BLINDING *blinding ;
};
struct dh_st;
struct dh_st;
typedef struct dh_st DH;
struct dh_method {
   char const *name ;
   int (*generate_key)(DH *dh ) ;
   int (*compute_key)(unsigned char *key , BIGNUM *pub_key , DH *dh ) ;
   int (*bn_mod_exp)(DH *dh , BIGNUM *r , BIGNUM *a , BIGNUM const *p , BIGNUM const *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(DH *dh ) ;
   int (*finish)(DH *dh ) ;
   int flags ;
   char *app_data ;
};
typedef struct dh_method DH_METHOD;
struct dh_st {
   int pad ;
   int version ;
   BIGNUM *p ;
   BIGNUM *g ;
   int length ;
   BIGNUM *pub_key ;
   BIGNUM *priv_key ;
   int flags ;
   char *method_mont_p ;
   BIGNUM *q ;
   BIGNUM *j ;
   unsigned char *seed ;
   int seedlen ;
   BIGNUM *counter ;
   int references ;
   CRYPTO_EX_DATA ex_data ;
   DH_METHOD *meth ;
};
struct dsa_st;
struct dsa_st;
typedef struct dsa_st DSA;
struct DSA_SIG_st {
   BIGNUM *r ;
   BIGNUM *s ;
};
typedef struct DSA_SIG_st DSA_SIG;
struct dsa_method {
   char const *name ;
   DSA_SIG *(*dsa_do_sign)(unsigned char const *dgst , int dlen , DSA *dsa ) ;
   int (*dsa_sign_setup)(DSA *dsa , BN_CTX *ctx_in , BIGNUM **kinvp , BIGNUM **rp ) ;
   int (*dsa_do_verify)(unsigned char const *dgst , int dgst_len , DSA_SIG *sig ,
                        DSA *dsa ) ;
   int (*dsa_mod_exp)(DSA *dsa , BIGNUM *rr , BIGNUM *a1 , BIGNUM *p1 , BIGNUM *a2 ,
                      BIGNUM *p2 , BIGNUM *m , BN_CTX *ctx , BN_MONT_CTX *in_mont ) ;
   int (*bn_mod_exp)(DSA *dsa , BIGNUM *r , BIGNUM *a , BIGNUM const *p , BIGNUM const *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(DSA *dsa ) ;
   int (*finish)(DSA *dsa ) ;
   int flags ;
   char *app_data ;
};
typedef struct dsa_method DSA_METHOD;
struct dsa_st {
   int pad ;
   int version ;
   int write_params ;
   BIGNUM *p ;
   BIGNUM *q ;
   BIGNUM *g ;
   BIGNUM *pub_key ;
   BIGNUM *priv_key ;
   BIGNUM *kinv ;
   BIGNUM *r ;
   int flags ;
   char *method_mont_p ;
   int references ;
   CRYPTO_EX_DATA ex_data ;
   DSA_METHOD *meth ;
};
union __anonunion_pkey_21 {
   char *ptr ;
   struct rsa_st *rsa ;
   struct dsa_st *dsa ;
   struct dh_st *dh ;
};
struct evp_pkey_st {
   int type ;
   int save_type ;
   int references ;
   union __anonunion_pkey_21 pkey ;
   int save_parameters ;
   STACK *attributes ;
};
typedef struct evp_pkey_st EVP_PKEY;
struct env_md_st {
   int type ;
   int pkey_type ;
   int md_size ;
   void (*init)() ;
   void (*update)() ;
   void (*final)() ;
   int (*sign)() ;
   int (*verify)() ;
   int required_pkey_type[5] ;
   int block_size ;
   int ctx_size ;
};
typedef struct env_md_st EVP_MD;
union __anonunion_md_22 {
   unsigned char base[4] ;
   MD2_CTX md2 ;
   MD5_CTX md5 ;
   MD4_CTX md4 ;
   RIPEMD160_CTX ripemd160 ;
   SHA_CTX sha ;
   MDC2_CTX mdc2 ;
};
struct env_md_ctx_st {
   EVP_MD const *digest ;
   union __anonunion_md_22 md ;
};
typedef struct env_md_ctx_st EVP_MD_CTX;
struct evp_cipher_st;
struct evp_cipher_st;
typedef struct evp_cipher_st EVP_CIPHER;
struct evp_cipher_ctx_st;
struct evp_cipher_ctx_st;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
struct evp_cipher_st {
   int nid ;
   int block_size ;
   int key_len ;
   int iv_len ;
   unsigned long flags ;
   int (*init)(EVP_CIPHER_CTX *ctx , unsigned char const *key , unsigned char const *iv ,
               int enc ) ;
   int (*do_cipher)(EVP_CIPHER_CTX *ctx , unsigned char *out , unsigned char const *in ,
                    unsigned int inl ) ;
   int (*cleanup)(EVP_CIPHER_CTX * ) ;
   int ctx_size ;
   int (*set_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*get_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*ctrl)(EVP_CIPHER_CTX * , int type , int arg , void *ptr ) ;
   void *app_data ;
};
struct __anonstruct_rc4_24 {
   unsigned char key[16] ;
   RC4_KEY ks ;
};
struct __anonstruct_desx_cbc_25 {
   des_key_schedule ks ;
   des_cblock inw ;
   des_cblock outw ;
};
struct __anonstruct_des_ede_26 {
   des_key_schedule ks1 ;
   des_key_schedule ks2 ;
   des_key_schedule ks3 ;
};
struct __anonstruct_rc2_27 {
   int key_bits ;
   RC2_KEY ks ;
};
struct __anonstruct_rc5_28 {
   int rounds ;
   RC5_32_KEY ks ;
};
union __anonunion_c_23 {
   struct __anonstruct_rc4_24 rc4 ;
   des_key_schedule des_ks ;
   struct __anonstruct_desx_cbc_25 desx_cbc ;
   struct __anonstruct_des_ede_26 des_ede ;
   IDEA_KEY_SCHEDULE idea_ks ;
   struct __anonstruct_rc2_27 rc2 ;
   struct __anonstruct_rc5_28 rc5 ;
   BF_KEY bf_ks ;
   CAST_KEY cast_ks ;
};
struct evp_cipher_ctx_st {
   EVP_CIPHER const *cipher ;
   int encrypt ;
   int buf_len ;
   unsigned char oiv[8] ;
   unsigned char iv[8] ;
   unsigned char buf[8] ;
   int num ;
   void *app_data ;
   int key_len ;
   union __anonunion_c_23 c ;
};
struct comp_method_st {
   int type ;
   char const *name ;
   int (*init)() ;
   void (*finish)() ;
   int (*compress)() ;
   int (*expand)() ;
   long (*ctrl)() ;
   long (*callback_ctrl)() ;
};
typedef struct comp_method_st COMP_METHOD;
struct comp_ctx_st {
   COMP_METHOD *meth ;
   unsigned long compress_in ;
   unsigned long compress_out ;
   unsigned long expand_in ;
   unsigned long expand_out ;
   CRYPTO_EX_DATA ex_data ;
};
typedef struct comp_ctx_st COMP_CTX;
struct X509_algor_st {
   ASN1_OBJECT *algorithm ;
   ASN1_TYPE *parameter ;
};
typedef struct X509_algor_st X509_ALGOR;
struct X509_val_st {
   ASN1_TIME *notBefore ;
   ASN1_TIME *notAfter ;
};
typedef struct X509_val_st X509_VAL;
struct X509_pubkey_st {
   X509_ALGOR *algor ;
   ASN1_BIT_STRING *public_key ;
   EVP_PKEY *pkey ;
};
typedef struct X509_pubkey_st X509_PUBKEY;
struct X509_name_st {
   STACK *entries ;
   int modified ;
   BUF_MEM *bytes ;
   unsigned long hash ;
};
typedef struct X509_name_st X509_NAME;
struct x509_cinf_st {
   ASN1_INTEGER *version ;
   ASN1_INTEGER *serialNumber ;
   X509_ALGOR *signature ;
   X509_NAME *issuer ;
   X509_VAL *validity ;
   X509_NAME *subject ;
   X509_PUBKEY *key ;
   ASN1_BIT_STRING *issuerUID ;
   ASN1_BIT_STRING *subjectUID ;
   STACK *extensions ;
};
typedef struct x509_cinf_st X509_CINF;
struct x509_cert_aux_st {
   STACK *trust ;
   STACK *reject ;
   ASN1_UTF8STRING *alias ;
   ASN1_OCTET_STRING *keyid ;
   STACK *other ;
};
typedef struct x509_cert_aux_st X509_CERT_AUX;
struct AUTHORITY_KEYID_st;
struct AUTHORITY_KEYID_st;
struct x509_st {
   X509_CINF *cert_info ;
   X509_ALGOR *sig_alg ;
   ASN1_BIT_STRING *signature ;
   int valid ;
   int references ;
   char *name ;
   CRYPTO_EX_DATA ex_data ;
   long ex_pathlen ;
   unsigned long ex_flags ;
   unsigned long ex_kusage ;
   unsigned long ex_xkusage ;
   unsigned long ex_nscert ;
   ASN1_OCTET_STRING *skid ;
   struct AUTHORITY_KEYID_st *akid ;
   unsigned char sha1_hash[20] ;
   X509_CERT_AUX *aux ;
};
typedef struct x509_st X509;
struct lhash_node_st {
   void *data ;
   struct lhash_node_st *next ;
   unsigned long hash ;
};
typedef struct lhash_node_st LHASH_NODE;
struct lhash_st {
   LHASH_NODE **b ;
   int (*comp)() ;
   unsigned long (*hash)() ;
   unsigned int num_nodes ;
   unsigned int num_alloc_nodes ;
   unsigned int p ;
   unsigned int pmax ;
   unsigned long up_load ;
   unsigned long down_load ;
   unsigned long num_items ;
   unsigned long num_expands ;
   unsigned long num_expand_reallocs ;
   unsigned long num_contracts ;
   unsigned long num_contract_reallocs ;
   unsigned long num_hash_calls ;
   unsigned long num_comp_calls ;
   unsigned long num_insert ;
   unsigned long num_replace ;
   unsigned long num_delete ;
   unsigned long num_no_delete ;
   unsigned long num_retrieve ;
   unsigned long num_retrieve_miss ;
   unsigned long num_hash_comps ;
   int error ;
};
struct x509_store_ctx_st;
struct x509_store_ctx_st;
typedef struct x509_store_ctx_st X509_STORE_CTX;
struct x509_store_st {
   int cache ;
   STACK *objs ;
   STACK *get_cert_methods ;
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
   int depth ;
};
typedef struct x509_store_st X509_STORE;
struct x509_store_ctx_st {
   X509_STORE *ctx ;
   int current_method ;
   X509 *cert ;
   STACK *untrusted ;
   int purpose ;
   int trust ;
   time_t check_time ;
   unsigned long flags ;
   void *other_ctx ;
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   int (*get_issuer)(X509 **issuer , X509_STORE_CTX *ctx , X509 *x ) ;
   int (*check_issued)(X509_STORE_CTX *ctx , X509 *x , X509 *issuer ) ;
   int (*cleanup)(X509_STORE_CTX *ctx ) ;
   int depth ;
   int valid ;
   int last_untrusted ;
   STACK *chain ;
   int error_depth ;
   int error ;
   X509 *current_cert ;
   X509 *current_issuer ;
   CRYPTO_EX_DATA ex_data ;
};
typedef int pem_password_cb(char *buf , int size , int rwflag , void *userdata );
struct ssl_st;
struct ssl_st;
struct ssl_cipher_st {
   int valid ;
   char const *name ;
   unsigned long id ;
   unsigned long algorithms ;
   unsigned long algo_strength ;
   unsigned long algorithm2 ;
   int strength_bits ;
   int alg_bits ;
   unsigned long mask ;
   unsigned long mask_strength ;
};
typedef struct ssl_cipher_st SSL_CIPHER;
typedef struct ssl_st SSL;
struct ssl_ctx_st;
struct ssl_ctx_st;
typedef struct ssl_ctx_st SSL_CTX;
struct ssl3_enc_method;
struct ssl3_enc_method;
struct ssl_method_st {
   int version ;
   int (*ssl_new)(SSL *s ) ;
   void (*ssl_clear)(SSL *s ) ;
   void (*ssl_free)(SSL *s ) ;
   int (*ssl_accept)(SSL *s ) ;
   int (*ssl_connect)(SSL *s ) ;
   int (*ssl_read)(SSL *s , void *buf , int len ) ;
   int (*ssl_peek)(SSL *s , void *buf , int len ) ;
   int (*ssl_write)(SSL *s , void const *buf , int len ) ;
   int (*ssl_shutdown)(SSL *s ) ;
   int (*ssl_renegotiate)(SSL *s ) ;
   int (*ssl_renegotiate_check)(SSL *s ) ;
   long (*ssl_ctrl)(SSL *s , int cmd , long larg , char *parg ) ;
   long (*ssl_ctx_ctrl)(SSL_CTX *ctx , int cmd , long larg , char *parg ) ;
   SSL_CIPHER *(*get_cipher_by_char)(unsigned char const *ptr ) ;
   int (*put_cipher_by_char)(SSL_CIPHER const *cipher , unsigned char *ptr ) ;
   int (*ssl_pending)(SSL *s ) ;
   int (*num_ciphers)(void) ;
   SSL_CIPHER *(*get_cipher)(unsigned int ncipher ) ;
   struct ssl_method_st *(*get_ssl_method)(int version ) ;
   long (*get_timeout)(void) ;
   struct ssl3_enc_method *ssl3_enc ;
   int (*ssl_version)() ;
   long (*ssl_callback_ctrl)(SSL *s , int cb_id , void (*fp)() ) ;
   long (*ssl_ctx_callback_ctrl)(SSL_CTX *s , int cb_id , void (*fp)() ) ;
};
typedef struct ssl_method_st SSL_METHOD;
struct sess_cert_st;
struct sess_cert_st;
struct ssl_session_st {
   int ssl_version ;
   unsigned int key_arg_length ;
   unsigned char key_arg[8] ;
   int master_key_length ;
   unsigned char master_key[48] ;
   unsigned int session_id_length ;
   unsigned char session_id[32] ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   int not_resumable ;
   struct sess_cert_st *sess_cert ;
   X509 *peer ;
   long verify_result ;
   int references ;
   long timeout ;
   long time ;
   int compress_meth ;
   SSL_CIPHER *cipher ;
   unsigned long cipher_id ;
   STACK *ciphers ;
   CRYPTO_EX_DATA ex_data ;
   struct ssl_session_st *prev ;
   struct ssl_session_st *next ;
};
typedef struct ssl_session_st SSL_SESSION;
struct ssl_comp_st {
   int id ;
   char *name ;
   COMP_METHOD *method ;
};
typedef struct ssl_comp_st SSL_COMP;
struct __anonstruct_stats_37 {
   int sess_connect ;
   int sess_connect_renegotiate ;
   int sess_connect_good ;
   int sess_accept ;
   int sess_accept_renegotiate ;
   int sess_accept_good ;
   int sess_miss ;
   int sess_timeout ;
   int sess_cache_full ;
   int sess_hit ;
   int sess_cb_hit ;
};
struct cert_st;
struct cert_st;
struct ssl_ctx_st {
   SSL_METHOD *method ;
   unsigned long options ;
   unsigned long mode ;
   STACK *cipher_list ;
   STACK *cipher_list_by_id ;
   struct x509_store_st *cert_store ;
   struct lhash_st *sessions ;
   unsigned long session_cache_size ;
   struct ssl_session_st *session_cache_head ;
   struct ssl_session_st *session_cache_tail ;
   int session_cache_mode ;
   long session_timeout ;
   int (*new_session_cb)(struct ssl_st *ssl , SSL_SESSION *sess ) ;
   void (*remove_session_cb)(struct ssl_ctx_st *ctx , SSL_SESSION *sess ) ;
   SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl , unsigned char *data , int len ,
                                  int *copy ) ;
   struct __anonstruct_stats_37 stats ;
   int references ;
   void (*info_callback)() ;
   int (*app_verify_callback)() ;
   char *app_verify_arg ;
   struct cert_st *cert ;
   int read_ahead ;
   int verify_mode ;
   int verify_depth ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   int (*default_verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   int purpose ;
   int trust ;
   pem_password_cb *default_passwd_callback ;
   void *default_passwd_callback_userdata ;
   int (*client_cert_cb)() ;
   STACK *client_CA ;
   int quiet_shutdown ;
   CRYPTO_EX_DATA ex_data ;
   EVP_MD const *rsa_md5 ;
   EVP_MD const *md5 ;
   EVP_MD const *sha1 ;
   STACK *extra_certs ;
   STACK *comp_methods ;
};
struct ssl2_state_st;
struct ssl2_state_st;
struct ssl3_state_st;
struct ssl3_state_st;
struct ssl_st {
   int version ;
   int type ;
   SSL_METHOD *method ;
   BIO *rbio ;
   BIO *wbio ;
   BIO *bbio ;
   int rwstate ;
   int in_handshake ;
   int (*handshake_func)() ;
   int server ;
   int new_session ;
   int quiet_shutdown ;
   int shutdown ;
   int state ;
   int rstate ;
   BUF_MEM *init_buf ;
   int init_num ;
   int init_off ;
   unsigned char *packet ;
   unsigned int packet_length ;
   struct ssl2_state_st *s2 ;
   struct ssl3_state_st *s3 ;
   int read_ahead ;
   int hit ;
   int purpose ;
   int trust ;
   STACK *cipher_list ;
   STACK *cipher_list_by_id ;
   EVP_CIPHER_CTX *enc_read_ctx ;
   EVP_MD const *read_hash ;
   COMP_CTX *expand ;
   EVP_CIPHER_CTX *enc_write_ctx ;
   EVP_MD const *write_hash ;
   COMP_CTX *compress ;
   struct cert_st *cert ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   SSL_SESSION *session ;
   int verify_mode ;
   int verify_depth ;
   int (*verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   void (*info_callback)() ;
   int error ;
   int error_code ;
   SSL_CTX *ctx ;
   int debug ;
   long verify_result ;
   CRYPTO_EX_DATA ex_data ;
   STACK *client_CA ;
   int references ;
   unsigned long options ;
   unsigned long mode ;
   int first_packet ;
   int client_version ;
};
struct __anonstruct_tmp_38 {
   unsigned int conn_id_length ;
   unsigned int cert_type ;
   unsigned int cert_length ;
   unsigned int csl ;
   unsigned int clear ;
   unsigned int enc ;
   unsigned char ccl[32] ;
   unsigned int cipher_spec_length ;
   unsigned int session_id_length ;
   unsigned int clen ;
   unsigned int rlen ;
};
struct ssl2_state_st {
   int three_byte_header ;
   int clear_text ;
   int escape ;
   int ssl2_rollback ;
   unsigned int wnum ;
   int wpend_tot ;
   unsigned char const *wpend_buf ;
   int wpend_off ;
   int wpend_len ;
   int wpend_ret ;
   int rbuf_left ;
   int rbuf_offs ;
   unsigned char *rbuf ;
   unsigned char *wbuf ;
   unsigned char *write_ptr ;
   unsigned int padding ;
   unsigned int rlength ;
   int ract_data_length ;
   unsigned int wlength ;
   int wact_data_length ;
   unsigned char *ract_data ;
   unsigned char *wact_data ;
   unsigned char *mac_data ;
   unsigned char *pad_data_UNUSED ;
   unsigned char *read_key ;
   unsigned char *write_key ;
   unsigned int challenge_length ;
   unsigned char challenge[32] ;
   unsigned int conn_id_length ;
   unsigned char conn_id[16] ;
   unsigned int key_material_length ;
   unsigned char key_material[48] ;
   unsigned long read_sequence ;
   unsigned long write_sequence ;
   struct __anonstruct_tmp_38 tmp ;
};
struct ssl3_record_st {
   int type ;
   unsigned int length ;
   unsigned int off ;
   unsigned char *data ;
   unsigned char *input ;
   unsigned char *comp ;
};
typedef struct ssl3_record_st SSL3_RECORD;
struct ssl3_buffer_st {
   unsigned char *buf ;
   int offset ;
   int left ;
};
typedef struct ssl3_buffer_st SSL3_BUFFER;
struct __anonstruct_tmp_39 {
   unsigned char cert_verify_md[72] ;
   unsigned char finish_md[72] ;
   int finish_md_len ;
   unsigned char peer_finish_md[72] ;
   int peer_finish_md_len ;
   unsigned long message_size ;
   int message_type ;
   SSL_CIPHER *new_cipher ;
   DH *dh ;
   int next_state ;
   int reuse_message ;
   int cert_req ;
   int ctype_num ;
   char ctype[7] ;
   STACK *ca_names ;
   int use_rsa_tmp ;
   int key_block_length ;
   unsigned char *key_block ;
   EVP_CIPHER const *new_sym_enc ;
   EVP_MD const *new_hash ;
   SSL_COMP const *new_compression ;
   int cert_request ;
};
struct ssl3_state_st {
   long flags ;
   int delay_buf_pop_ret ;
   unsigned char read_sequence[8] ;
   unsigned char read_mac_secret[36] ;
   unsigned char write_sequence[8] ;
   unsigned char write_mac_secret[36] ;
   unsigned char server_random[32] ;
   unsigned char client_random[32] ;
   SSL3_BUFFER rbuf ;
   SSL3_BUFFER wbuf ;
   SSL3_RECORD rrec ;
   SSL3_RECORD wrec ;
   unsigned char alert_fragment[2] ;
   unsigned int alert_fragment_len ;
   unsigned char handshake_fragment[4] ;
   unsigned int handshake_fragment_len ;
   unsigned int wnum ;
   int wpend_tot ;
   int wpend_type ;
   int wpend_ret ;
   unsigned char const *wpend_buf ;
   EVP_MD_CTX finish_dgst1 ;
   EVP_MD_CTX finish_dgst2 ;
   int change_cipher_spec ;
   int warn_alert ;
   int fatal_alert ;
   int alert_dispatch ;
   unsigned char send_alert[2] ;
   int renegotiate ;
   int total_renegotiations ;
   int num_renegotiations ;
   int in_read_app_data ;
   struct __anonstruct_tmp_39 tmp ;
};
struct cert_pkey_st {
   X509 *x509 ;
   EVP_PKEY *privatekey ;
};
typedef struct cert_pkey_st CERT_PKEY;
struct cert_st {
   CERT_PKEY *key ;
   int valid ;
   unsigned long mask ;
   unsigned long export_mask ;
   RSA *rsa_tmp ;
   RSA *(*rsa_tmp_cb)(SSL *ssl , int is_export , int keysize ) ;
   DH *dh_tmp ;
   DH *(*dh_tmp_cb)(SSL *ssl , int is_export , int keysize ) ;
   CERT_PKEY pkeys[5] ;
   int references ;
};
struct sess_cert_st {
   STACK *cert_chain ;
   int peer_cert_type ;
   CERT_PKEY *peer_key ;
   CERT_PKEY peer_pkeys[5] ;
   RSA *peer_rsa_tmp ;
   DH *peer_dh_tmp ;
   int references ;
};
struct ssl3_enc_method {
   int (*enc)(SSL * , int ) ;
   int (*mac)(SSL * , unsigned char * , int ) ;
   int (*setup_key_block)(SSL * ) ;
   int (*generate_master_secret)(SSL * , unsigned char * , unsigned char * , int ) ;
   int (*change_cipher_state)(SSL * , int ) ;
   int (*final_finish_mac)(SSL * , EVP_MD_CTX * , EVP_MD_CTX * , char const * ,
                           int , unsigned char * ) ;
   int finish_mac_length ;
   int (*cert_verify_mac)(SSL * , EVP_MD_CTX * , unsigned char * ) ;
   char const *client_finished_label ;
   int client_finished_label_len ;
   char const *server_finished_label ;
   int server_finished_label_len ;
   int (*alert_value)(int ) ;
};
extern void *memcpy(void * __restrict __dest , void const * __restrict __src ,
                    size_t __n ) ;
SSL_METHOD *SSLv3_client_method(void) ;
extern SSL_METHOD *sslv3_base_method(void) ;
int ssl3_connect(SSL *s ) ;
static SSL_METHOD *ssl3_get_client_method(int ver ) ;
static SSL_METHOD *ssl3_get_client_method(int ver )
{ SSL_METHOD *tmp ;

  {
  if (ver == 768) {
    {
    tmp = SSLv3_client_method();
    }
    return (tmp);
  } else {
    return ((SSL_METHOD *)((void *)0));
  }
}
}
static int init = 1;
static SSL_METHOD SSLv3_client_data ;
SSL_METHOD *SSLv3_client_method(void)
{ char *tmp ;
  SSL_METHOD *tmp___0 ;

  {
  if (init) {
    {
    init = 0;
    tmp___0 = sslv3_base_method();
    tmp = (char *)tmp___0;
    memcpy((void *)((char *)(& SSLv3_client_data)), (void const *)tmp, sizeof(SSL_METHOD ));
    SSLv3_client_data.ssl_connect = & ssl3_connect;
    SSLv3_client_data.get_ssl_method = & ssl3_get_client_method;
    }
  } else {

  }
  return (& SSLv3_client_data);
}
}
int main(void)
{ SSL *s ;

  {
  {
  s = /* reachable */
      malloc (sizeof (SSL));
  s->s3 = malloc(sizeof(struct ssl3_state_st));
  s->state = 12292;
  ssl3_connect(s);
  }
  /* reachable */
  return (0);
}
}
int ssl3_connect(SSL *s )
{ BUF_MEM *buf ;
  unsigned long tmp ;
  unsigned long l ;
  long num1 ;
  void (*cb)() ;
  int ret ;
  int new_state ;
  int state ;
  int skip ;
  int *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;

  int blastFlag ;

  {
  blastFlag = 0;
  /* reachable */
  s->state = 12292;
  s->hit = __VERIFIER_nondet_int();

  tmp = __VERIFIER_nondet_int();
  cb = (void (*)())((void *)0);
  ret = -1;
  skip = 0;
  *tmp___0 = 0;
  if ((unsigned long )s->info_callback != (unsigned long )((void *)0)) {
    cb = s->info_callback;
  } else {
    if ((unsigned long )(s->ctx)->info_callback != (unsigned long )((void *)0)) {
      cb = (s->ctx)->info_callback;
    } else {

    }
  }
  // unsafe: possible undefined behavior
  s->in_handshake += 1;
  if (tmp___1 & 12288) {
    if (tmp___2 & 16384) {

    } else {

    }
  } else {

  }
  {
  while (1) /* invariant:
            blastFlag >= 0
            4.000000e+00-blastFlag >= 0
            */
            {
	__CPROVER_assume(blastFlag >= 0 &&
            4.000000e+00-blastFlag >= 0 );

    while_0_continue: ;
    /* invariant:
    blastFlag >= 0
    4.000000e+00-blastFlag >= 0
    */

	__CPROVER_assume(blastFlag >= 0 &&
            4.000000e+00-blastFlag >= 0 );

    state = s->state;
    if (s->state == 12292) {
      goto switch_1_12292;
    } else {
      if (s->state == 16384) {
        goto switch_1_16384;
      } else {
        if (s->state == 4096) {
          goto switch_1_4096;
        } else {
          if (s->state == 20480) {
            goto switch_1_20480;
          } else {
            if (s->state == 4099) {
              goto switch_1_4099;
            } else {
              if (s->state == 4368) {
                goto switch_1_4368;
              } else {
                if (s->state == 4369) {
                  goto switch_1_4369;
                } else {
                  if (s->state == 4384) {
                    goto switch_1_4384;
                  } else {
                    if (s->state == 4385) {
                      goto switch_1_4385;
                    } else {
                      if (s->state == 4400) {
                        goto switch_1_4400;
                      } else {
                        if (s->state == 4401) {
                          goto switch_1_4401;
                        } else {
                          if (s->state == 4416) {
                            goto switch_1_4416;
                          } else {
                            if (s->state == 4417) {
                              goto switch_1_4417;
                            } else {
                              if (s->state == 4432) {
                                goto switch_1_4432;
                              } else {
                                if (s->state == 4433) {
                                  goto switch_1_4433;
                                } else {
                                  if (s->state == 4448) {
                                    goto switch_1_4448;
                                  } else {
                                    if (s->state == 4449) {
                                      goto switch_1_4449;
                                    } else {
                                      if (s->state == 4464) {
                                        goto switch_1_4464;
                                      } else {
                                        if (s->state == 4465) {
                                          goto switch_1_4465;
                                        } else {
                                          if (s->state == 4466) {
                                            goto switch_1_4466;
                                          } else {
                                            if (s->state == 4467) {
                                              goto switch_1_4467;
                                            } else {
                                              if (s->state == 4480) {
                                                goto switch_1_4480;
                                              } else {
                                                if (s->state == 4481) {
                                                  goto switch_1_4481;
                                                } else {
                                                  if (s->state == 4496) {
                                                    goto switch_1_4496;
                                                  } else {
                                                    if (s->state == 4497) {
                                                      goto switch_1_4497;
                                                    } else {
                                                      if (s->state == 4512) {
                                                        goto switch_1_4512;
                                                      } else {
                                                        if (s->state == 4513) {
                                                          goto switch_1_4513;
                                                        } else {
                                                          if (s->state == 4528) {
                                                            goto switch_1_4528;
                                                          } else {
                                                            if (s->state == 4529) {
                                                              goto switch_1_4529;
                                                            } else {
                                                              if (s->state == 4560) {
                                                                goto switch_1_4560;
                                                              } else {
                                                                if (s->state == 4561) {
                                                                  goto switch_1_4561;
                                                                } else {
                                                                  if (s->state == 4352) {
                                                                    goto switch_1_4352;
                                                                  } else {
                                                                    if (s->state == 3) {
                                                                      goto switch_1_3;
                                                                    } else {
                                                                      {
                                                                      goto switch_1_default;
                                                                      if (0) {
                                                                        switch_1_12292:
                                                                        s->new_session = 1;
                                                                        s->state = 4096;
                                                                        // unsafe: possible undefined behavior
                                                                        (s->ctx)->stats.sess_connect_renegotiate += 1;
                                                                        switch_1_16384: ;
                                                                        switch_1_4096: ;
                                                                        switch_1_20480: ;
                                                                        switch_1_4099:
                                                                        s->server = 0;
                                                                        if ((unsigned long )cb != (unsigned long )((void *)0)) {

                                                                        } else {

                                                                        }
                                                                        if ((s->version & 65280) != 768) {
                                                                          ret = -1;
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->type = 4096;
                                                                        if ((unsigned long )s->init_buf == (unsigned long )((void *)0)) {
                                                                          tmp___3 = __VERIFIER_nondet_int();
                                                                          if (! tmp___3) {
                                                                            ret = -1;
                                                                            goto end;
                                                                          } else {

                                                                          }
                                                                          s->init_buf = buf;
                                                                        } else {

                                                                        }
                                                                        tmp___4 = __VERIFIER_nondet_int();
                                                                        if (! tmp___4) {
                                                                          ret = -1;
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        tmp___5 = __VERIFIER_nondet_int();
                                                                        if (! tmp___5) {
                                                                          ret = -1;
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4368;
                                                                        // unsafe: possible undefined behavior
                                                                        (s->ctx)->stats.sess_connect += 1;
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4368: ;
                                                                        switch_1_4369:
                                                                        s->shutdown = 0;
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (blastFlag == 0) {
                                                                          blastFlag = 1;
                                                                        } else {

                                                                        }
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4384;
                                                                        s->init_num = 0;
                                                                        if ((unsigned long )s->bbio != (unsigned long )s->wbio) {

                                                                        } else {

                                                                        }
                                                                        goto switch_1_break;
                                                                        switch_1_4384: ;
                                                                        switch_1_4385:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (blastFlag == 1) {
                                                                          blastFlag = 2;
                                                                        } else {

                                                                        }
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        if (s->hit) {
                                                                          s->state = 4560;
                                                                        } else {
                                                                          s->state = 4400;
                                                                        }
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4400: ;
                                                                        switch_1_4401: ;
                                                                        if (((s->s3)->tmp.new_cipher)->algorithms & 256UL) {
                                                                          skip = 1;
                                                                        } else {
                                                                          ret = __VERIFIER_nondet_int();
                                                                          if (blastFlag == 2) {
                                                                            blastFlag = 3;
                                                                          } else {

                                                                          }
                                                                          if (ret <= 0) {
                                                                            goto end;
                                                                          } else {

                                                                          }
                                                                        }
                                                                        s->state = 4416;
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4416: ;
                                                                        switch_1_4417:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (blastFlag == 3) {
                                                                          blastFlag = 4;
                                                                        } else {

                                                                        }
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4432;
                                                                        s->init_num = 0;
                                                                        tmp___6 = __VERIFIER_nondet_int();
                                                                        if (! tmp___6) {
                                                                          ret = -1;
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        goto switch_1_break;
                                                                        switch_1_4432: ;
                                                                        switch_1_4433:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (blastFlag == 5) {
                                                                          goto ERROR;
                                                                        } else {

                                                                        }
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4448;
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4448: ;
                                                                        switch_1_4449:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (blastFlag == 4) {
                                                                          goto ERROR;
                                                                        } else {

                                                                        }
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        if ((s->s3)->tmp.cert_req) {
                                                                          s->state = 4464;
                                                                        } else {
                                                                          s->state = 4480;
                                                                        }
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4464: ;
                                                                        switch_1_4465: ;
                                                                        switch_1_4466: ;
                                                                        switch_1_4467:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4480;
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4480: ;
                                                                        switch_1_4481:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        l = ((s->s3)->tmp.new_cipher)->algorithms;
                                                                        if ((s->s3)->tmp.cert_req == 1) {
                                                                          s->state = 4496;
                                                                        } else {
                                                                          s->state = 4512;
                                                                          (s->s3)->change_cipher_spec = 0;
                                                                        }
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4496: ;
                                                                        switch_1_4497:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4512;
                                                                        s->init_num = 0;
                                                                        (s->s3)->change_cipher_spec = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4512: ;
                                                                        switch_1_4513:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4528;
                                                                        s->init_num = 0;
                                                                        (s->session)->cipher = (s->s3)->tmp.new_cipher;
                                                                        if ((unsigned long )(s->s3)->tmp.new_compression == (unsigned long )((void *)0)) {
                                                                          (s->session)->compress_meth = 0;
                                                                        } else {
                                                                          (s->session)->compress_meth = ((s->s3)->tmp.new_compression)->id;
                                                                        }
                                                                        tmp___7 = __VERIFIER_nondet_int();
                                                                        if (! tmp___7) {
                                                                          ret = -1;
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        tmp___8 = __VERIFIER_nondet_int();
                                                                        if (! tmp___8) {
                                                                          ret = -1;
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        goto switch_1_break;
                                                                        switch_1_4528: ;
                                                                        switch_1_4529:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        s->state = 4352;
                                                                        (s->s3)->flags &= -5L;
                                                                        if (s->hit) {
                                                                          (s->s3)->tmp.next_state = 3;
                                                                          if ((s->s3)->flags & 2L) {
                                                                            s->state = 3;
                                                                            (s->s3)->flags |= 4L;
                                                                            (s->s3)->delay_buf_pop_ret = 0;
                                                                          } else {

                                                                          }
                                                                        } else {
                                                                          (s->s3)->tmp.next_state = 4560;
                                                                        }
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4560: ;
                                                                        switch_1_4561:
                                                                        ret = __VERIFIER_nondet_int();
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        } else {

                                                                        }
                                                                        if (s->hit) {
                                                                          s->state = 4512;
                                                                        } else {
                                                                          s->state = 3;
                                                                        }
                                                                        s->init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4352:
                                                                        num1 = __VERIFIER_nondet_int();
                                                                        if (num1 > 0L) {
                                                                          s->rwstate = 2;
                                                                          tmp___9 = __VERIFIER_nondet_int();
                                                                          num1 = (long )((int )tmp___9);
                                                                          if (num1 <= 0L) {
                                                                            ret = -1;
                                                                            goto end;
                                                                          } else {

                                                                          }
                                                                          s->rwstate = 1;
                                                                        } else {

                                                                        }
                                                                        s->state = (s->s3)->tmp.next_state;
                                                                        goto switch_1_break;
                                                                        switch_1_3:
                                                                        if ((unsigned long )s->init_buf != (unsigned long )((void *)0)) {
                                                                          s->init_buf = (BUF_MEM *)((void *)0);
                                                                        } else {

                                                                        }
                                                                        if (! ((s->s3)->flags & 4L)) {

                                                                        } else {

                                                                        }
                                                                        s->init_num = 0;
                                                                        s->new_session = 0;
                                                                        if (s->hit) {
                                                                          // unsafe: possible undefined behavior
                                                                          (s->ctx)->stats.sess_hit += 1;
                                                                        } else {

                                                                        }
                                                                        ret = 1;
                                                                        s->handshake_func = (int (*)())(& ssl3_connect);
                                                                        // unsafe: possible undefined behavior
                                                                        (s->ctx)->stats.sess_connect_good += 1;
                                                                        if ((unsigned long )cb != (unsigned long )((void *)0)) {

                                                                        } else {

                                                                        }
                                                                        goto end;
                                                                        switch_1_default:
                                                                        ret = -1;
                                                                        goto end;
                                                                      } else {
                                                                        switch_1_break: ;
                                                                      }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (! (s->s3)->tmp.reuse_message) {
      if (! skip) {
        if (s->debug) {
          ret = __VERIFIER_nondet_int();
          if (ret <= 0) {
            goto end;
          } else {

          }
        } else {

        }
        if ((unsigned long )cb != (unsigned long )((void *)0)) {
          if (s->state != state) {
            new_state = s->state;
            s->state = state;
            s->state = new_state;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
    skip = 0;
  }
  while_0_break: ;
  }
  end:
  // unsafe: possible undefined behavior
  s->in_handshake -= 1;
  if ((unsigned long )cb != (unsigned long )((void *)0)) {

  } else {

  }
  /* invariant:
  1.000000e+00-ret >= 0
  */
  return (ret);
  ERROR: /* assert not proved */
         /* assert not proved */
         __VERIFIER_error();
}
}
