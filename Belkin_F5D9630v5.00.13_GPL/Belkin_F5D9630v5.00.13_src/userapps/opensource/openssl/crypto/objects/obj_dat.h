/* crypto/objects/obj_dat.h */

/* THIS FILE IS GENERATED FROM objects.h by obj_dat.pl via the
 * following command:
 * perl obj_dat.pl obj_mac.h obj_dat.h
 */

/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 * 
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 * 
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from 
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 * 
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */

#define NUM_NID 662
#define NUM_SN 655
#define NUM_LN 655
#define NUM_OBJ 619

static unsigned char lvalues[4461]={
0x00,                                        /* [  0] OBJ_undef */
0x2A,0x86,0x48,0x86,0xF7,0x0D,               /* [  1] OBJ_rsadsi */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,          /* [  7] OBJ_pkcs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x02,     /* [ 14] OBJ_md2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x05,     /* [ 22] OBJ_md5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x04,     /* [ 30] OBJ_rc4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x01,/* [ 38] OBJ_rsaEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x02,/* [ 47] OBJ_md2WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x04,/* [ 56] OBJ_md5WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x01,/* [ 65] OBJ_pbeWithMD2AndDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x03,/* [ 74] OBJ_pbeWithMD5AndDES_CBC */
0x55,                                        /* [ 83] OBJ_X500 */
0x55,0x04,                                   /* [ 84] OBJ_X509 */
0x55,0x04,0x03,                              /* [ 86] OBJ_commonName */
0x55,0x04,0x06,                              /* [ 89] OBJ_countryName */
0x55,0x04,0x07,                              /* [ 92] OBJ_localityName */
0x55,0x04,0x08,                              /* [ 95] OBJ_stateOrProvinceName */
0x55,0x04,0x0A,                              /* [ 98] OBJ_organizationName */
0x55,0x04,0x0B,                              /* [101] OBJ_organizationalUnitName */
0x55,0x08,0x01,0x01,                         /* [104] OBJ_rsa */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,     /* [108] OBJ_pkcs7 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x01,/* [116] OBJ_pkcs7_data */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x02,/* [125] OBJ_pkcs7_signed */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x03,/* [134] OBJ_pkcs7_enveloped */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x04,/* [143] OBJ_pkcs7_signedAndEnveloped */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x05,/* [152] OBJ_pkcs7_digest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x06,/* [161] OBJ_pkcs7_encrypted */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x03,     /* [170] OBJ_pkcs3 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x03,0x01,/* [178] OBJ_dhKeyAgreement */
0x2B,0x0E,0x03,0x02,0x06,                    /* [187] OBJ_des_ecb */
0x2B,0x0E,0x03,0x02,0x09,                    /* [192] OBJ_des_cfb64 */
0x2B,0x0E,0x03,0x02,0x07,                    /* [197] OBJ_des_cbc */
0x2B,0x0E,0x03,0x02,0x11,                    /* [202] OBJ_des_ede_ecb */
0x2B,0x06,0x01,0x04,0x01,0x81,0x3C,0x07,0x01,0x01,0x02,/* [207] OBJ_idea_cbc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x02,     /* [218] OBJ_rc2_cbc */
0x2B,0x0E,0x03,0x02,0x12,                    /* [226] OBJ_sha */
0x2B,0x0E,0x03,0x02,0x0F,                    /* [231] OBJ_shaWithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x07,     /* [236] OBJ_des_ede3_cbc */
0x2B,0x0E,0x03,0x02,0x08,                    /* [244] OBJ_des_ofb64 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,     /* [249] OBJ_pkcs9 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x01,/* [257] OBJ_pkcs9_emailAddress */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x02,/* [266] OBJ_pkcs9_unstructuredName */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x03,/* [275] OBJ_pkcs9_contentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x04,/* [284] OBJ_pkcs9_messageDigest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x05,/* [293] OBJ_pkcs9_signingTime */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x06,/* [302] OBJ_pkcs9_countersignature */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x07,/* [311] OBJ_pkcs9_challengePassword */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x08,/* [320] OBJ_pkcs9_unstructuredAddress */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x09,/* [329] OBJ_pkcs9_extCertAttributes */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,          /* [338] OBJ_netscape */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,     /* [345] OBJ_netscape_cert_extension */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x02,     /* [353] OBJ_netscape_data_type */
0x2B,0x0E,0x03,0x02,0x1A,                    /* [361] OBJ_sha1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x05,/* [366] OBJ_sha1WithRSAEncryption */
0x2B,0x0E,0x03,0x02,0x0D,                    /* [375] OBJ_dsaWithSHA */
0x2B,0x0E,0x03,0x02,0x0C,                    /* [380] OBJ_dsa_2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0B,/* [385] OBJ_pbeWithSHA1AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0C,/* [394] OBJ_id_pbkdf2 */
0x2B,0x0E,0x03,0x02,0x1B,                    /* [403] OBJ_dsaWithSHA1_2 */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x01,/* [408] OBJ_netscape_cert_type */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x02,/* [417] OBJ_netscape_base_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x03,/* [426] OBJ_netscape_revocation_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x04,/* [435] OBJ_netscape_ca_revocation_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x07,/* [444] OBJ_netscape_renewal_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x08,/* [453] OBJ_netscape_ca_policy_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x0C,/* [462] OBJ_netscape_ssl_server_name */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x0D,/* [471] OBJ_netscape_comment */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x02,0x05,/* [480] OBJ_netscape_cert_sequence */
0x55,0x1D,                                   /* [489] OBJ_id_ce */
0x55,0x1D,0x0E,                              /* [491] OBJ_subject_key_identifier */
0x55,0x1D,0x0F,                              /* [494] OBJ_key_usage */
0x55,0x1D,0x10,                              /* [497] OBJ_private_key_usage_period */
0x55,0x1D,0x11,                              /* [500] OBJ_subject_alt_name */
0x55,0x1D,0x12,                              /* [503] OBJ_issuer_alt_name */
0x55,0x1D,0x13,                              /* [506] OBJ_basic_constraints */
0x55,0x1D,0x14,                              /* [509] OBJ_crl_number */
0x55,0x1D,0x20,                              /* [512] OBJ_certificate_policies */
0x55,0x1D,0x23,                              /* [515] OBJ_authority_key_identifier */
0x2B,0x06,0x01,0x04,0x01,0x97,0x55,0x01,0x02,/* [518] OBJ_bf_cbc */
0x55,0x08,0x03,0x65,                         /* [527] OBJ_mdc2 */
0x55,0x08,0x03,0x64,                         /* [531] OBJ_mdc2WithRSA */
0x55,0x04,0x2A,                              /* [535] OBJ_givenName */
0x55,0x04,0x04,                              /* [538] OBJ_surname */
0x55,0x04,0x2B,                              /* [541] OBJ_initials */
0x55,0x1D,0x1F,                              /* [544] OBJ_crl_distribution_points */
0x2B,0x0E,0x03,0x02,0x03,                    /* [547] OBJ_md5WithRSA */
0x55,0x04,0x05,                              /* [552] OBJ_serialNumber */
0x55,0x04,0x0C,                              /* [555] OBJ_title */
0x55,0x04,0x0D,                              /* [558] OBJ_description */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0A,/* [561] OBJ_cast5_cbc */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0C,/* [570] OBJ_pbeWithMD5AndCast5_CBC */
0x2A,0x86,0x48,0xCE,0x38,0x04,0x03,          /* [579] OBJ_dsaWithSHA1 */
0x2B,0x0E,0x03,0x02,0x1D,                    /* [586] OBJ_sha1WithRSA */
0x2A,0x86,0x48,0xCE,0x38,0x04,0x01,          /* [591] OBJ_dsa */
0x2B,0x24,0x03,0x02,0x01,                    /* [598] OBJ_ripemd160 */
0x2B,0x24,0x03,0x03,0x01,0x02,               /* [603] OBJ_ripemd160WithRSA */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x08,     /* [609] OBJ_rc5_cbc */
0x29,0x01,0x01,0x85,0x1A,0x01,               /* [617] OBJ_rle_compression */
0x29,0x01,0x01,0x85,0x1A,0x02,               /* [623] OBJ_zlib_compression */
0x55,0x1D,0x25,                              /* [629] OBJ_ext_key_usage */
0x2B,0x06,0x01,0x05,0x05,0x07,               /* [632] OBJ_id_pkix */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,          /* [638] OBJ_id_kp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x01,     /* [645] OBJ_server_auth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x02,     /* [653] OBJ_client_auth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x03,     /* [661] OBJ_code_sign */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x04,     /* [669] OBJ_email_protect */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x08,     /* [677] OBJ_time_stamp */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x15,/* [685] OBJ_ms_code_ind */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x16,/* [695] OBJ_ms_code_com */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x01,/* [705] OBJ_ms_ctl_sign */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x03,/* [715] OBJ_ms_sgc */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x04,/* [725] OBJ_ms_efs */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x04,0x01,/* [735] OBJ_ns_sgc */
0x55,0x1D,0x1B,                              /* [744] OBJ_delta_crl */
0x55,0x1D,0x15,                              /* [747] OBJ_crl_reason */
0x55,0x1D,0x18,                              /* [750] OBJ_invalidity_date */
0x2B,0x65,0x01,0x04,0x01,                    /* [753] OBJ_sxnet */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x01,/* [758] OBJ_pbe_WithSHA1And128BitRC4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x02,/* [768] OBJ_pbe_WithSHA1And40BitRC4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x03,/* [778] OBJ_pbe_WithSHA1And3_Key_TripleDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x04,/* [788] OBJ_pbe_WithSHA1And2_Key_TripleDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x05,/* [798] OBJ_pbe_WithSHA1And128BitRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x06,/* [808] OBJ_pbe_WithSHA1And40BitRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x01,/* [818] OBJ_keyBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x02,/* [829] OBJ_pkcs8ShroudedKeyBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x03,/* [840] OBJ_certBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x04,/* [851] OBJ_crlBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x05,/* [862] OBJ_secretBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x06,/* [873] OBJ_safeContentsBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x14,/* [884] OBJ_friendlyName */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x15,/* [893] OBJ_localKeyID */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x16,0x01,/* [902] OBJ_x509Certificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x16,0x02,/* [912] OBJ_sdsiCertificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x17,0x01,/* [922] OBJ_x509Crl */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0D,/* [932] OBJ_pbes2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0E,/* [941] OBJ_pbmac1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x07,     /* [950] OBJ_hmacWithSHA1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x01,     /* [958] OBJ_id_qt_cps */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x02,     /* [966] OBJ_id_qt_unotice */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x0F,/* [974] OBJ_SMIMECapabilities */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x04,/* [983] OBJ_pbeWithMD2AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x06,/* [992] OBJ_pbeWithMD5AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0A,/* [1001] OBJ_pbeWithSHA1AndDES_CBC */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x0E,/* [1010] OBJ_ms_ext_req */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x0E,/* [1020] OBJ_ext_req */
0x55,0x04,0x29,                              /* [1029] OBJ_name */
0x55,0x04,0x2E,                              /* [1032] OBJ_dnQualifier */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,          /* [1035] OBJ_id_pe */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,          /* [1042] OBJ_id_ad */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x01,     /* [1049] OBJ_info_access */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,     /* [1057] OBJ_ad_OCSP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x02,     /* [1065] OBJ_ad_ca_issuers */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x09,     /* [1073] OBJ_OCSP_sign */
0x28,                                        /* [1081] OBJ_iso */
0x2A,                                        /* [1082] OBJ_member_body */
0x2A,0x86,0x48,                              /* [1083] OBJ_ISO_US */
0x2A,0x86,0x48,0xCE,0x38,                    /* [1086] OBJ_X9_57 */
0x2A,0x86,0x48,0xCE,0x38,0x04,               /* [1091] OBJ_X9cm */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,     /* [1097] OBJ_pkcs1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,     /* [1105] OBJ_pkcs5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,/* [1113] OBJ_SMIME */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,/* [1122] OBJ_id_smime_mod */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,/* [1132] OBJ_id_smime_ct */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,/* [1142] OBJ_id_smime_aa */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,/* [1152] OBJ_id_smime_alg */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x04,/* [1162] OBJ_id_smime_cd */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,/* [1172] OBJ_id_smime_spq */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,/* [1182] OBJ_id_smime_cti */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x01,/* [1192] OBJ_id_smime_mod_cms */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x02,/* [1203] OBJ_id_smime_mod_ess */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x03,/* [1214] OBJ_id_smime_mod_oid */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x04,/* [1225] OBJ_id_smime_mod_msg_v3 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x05,/* [1236] OBJ_id_smime_mod_ets_eSignature_88 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x06,/* [1247] OBJ_id_smime_mod_ets_eSignature_97 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x07,/* [1258] OBJ_id_smime_mod_ets_eSigPolicy_88 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x08,/* [1269] OBJ_id_smime_mod_ets_eSigPolicy_97 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x01,/* [1280] OBJ_id_smime_ct_receipt */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x02,/* [1291] OBJ_id_smime_ct_authData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x03,/* [1302] OBJ_id_smime_ct_publishCert */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x04,/* [1313] OBJ_id_smime_ct_TSTInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x05,/* [1324] OBJ_id_smime_ct_TDTInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x06,/* [1335] OBJ_id_smime_ct_contentInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x07,/* [1346] OBJ_id_smime_ct_DVCSRequestData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x08,/* [1357] OBJ_id_smime_ct_DVCSResponseData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x01,/* [1368] OBJ_id_smime_aa_receiptRequest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x02,/* [1379] OBJ_id_smime_aa_securityLabel */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x03,/* [1390] OBJ_id_smime_aa_mlExpandHistory */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x04,/* [1401] OBJ_id_smime_aa_contentHint */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x05,/* [1412] OBJ_id_smime_aa_msgSigDigest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x06,/* [1423] OBJ_id_smime_aa_encapContentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x07,/* [1434] OBJ_id_smime_aa_contentIdentifier */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x08,/* [1445] OBJ_id_smime_aa_macValue */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x09,/* [1456] OBJ_id_smime_aa_equivalentLabels */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0A,/* [1467] OBJ_id_smime_aa_contentReference */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0B,/* [1478] OBJ_id_smime_aa_encrypKeyPref */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0C,/* [1489] OBJ_id_smime_aa_signingCertificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0D,/* [1500] OBJ_id_smime_aa_smimeEncryptCerts */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0E,/* [1511] OBJ_id_smime_aa_timeStampToken */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0F,/* [1522] OBJ_id_smime_aa_ets_sigPolicyId */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x10,/* [1533] OBJ_id_smime_aa_ets_commitmentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x11,/* [1544] OBJ_id_smime_aa_ets_signerLocation */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x12,/* [1555] OBJ_id_smime_aa_ets_signerAttr */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x13,/* [1566] OBJ_id_smime_aa_ets_otherSigCert */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x14,/* [1577] OBJ_id_smime_aa_ets_contentTimestamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x15,/* [1588] OBJ_id_smime_aa_ets_CertificateRefs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x16,/* [1599] OBJ_id_smime_aa_ets_RevocationRefs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x17,/* [1610] OBJ_id_smime_aa_ets_certValues */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x18,/* [1621] OBJ_id_smime_aa_ets_revocationValues */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x19,/* [1632] OBJ_id_smime_aa_ets_escTimeStamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1A,/* [1643] OBJ_id_smime_aa_ets_certCRLTimestamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1B,/* [1654] OBJ_id_smime_aa_ets_archiveTimeStamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1C,/* [1665] OBJ_id_smime_aa_signatureType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1D,/* [1676] OBJ_id_smime_aa_dvcs_dvc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x01,/* [1687] OBJ_id_smime_alg_ESDHwith3DES */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x02,/* [1698] OBJ_id_smime_alg_ESDHwithRC2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x03,/* [1709] OBJ_id_smime_alg_3DESwrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x04,/* [1720] OBJ_id_smime_alg_RC2wrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x05,/* [1731] OBJ_id_smime_alg_ESDH */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x06,/* [1742] OBJ_id_smime_alg_CMS3DESwrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x07,/* [1753] OBJ_id_smime_alg_CMSRC2wrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x04,0x01,/* [1764] OBJ_id_smime_cd_ldap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,0x01,/* [1775] OBJ_id_smime_spq_ets_sqt_uri */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,0x02,/* [1786] OBJ_id_smime_spq_ets_sqt_unotice */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x01,/* [1797] OBJ_id_smime_cti_ets_proofOfOrigin */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x02,/* [1808] OBJ_id_smime_cti_ets_proofOfReceipt */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x03,/* [1819] OBJ_id_smime_cti_ets_proofOfDelivery */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x04,/* [1830] OBJ_id_smime_cti_ets_proofOfSender */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x05,/* [1841] OBJ_id_smime_cti_ets_proofOfApproval */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x06,/* [1852] OBJ_id_smime_cti_ets_proofOfCreation */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x04,     /* [1863] OBJ_md4 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,          /* [1871] OBJ_id_pkix_mod */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,          /* [1878] OBJ_id_qt */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,          /* [1885] OBJ_id_it */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,          /* [1892] OBJ_id_pkip */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,          /* [1899] OBJ_id_alg */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,          /* [1906] OBJ_id_cmc */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,          /* [1913] OBJ_id_on */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,          /* [1920] OBJ_id_pda */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,          /* [1927] OBJ_id_aca */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0B,          /* [1934] OBJ_id_qcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,          /* [1941] OBJ_id_cct */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x01,     /* [1948] OBJ_id_pkix1_explicit_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x02,     /* [1956] OBJ_id_pkix1_implicit_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x03,     /* [1964] OBJ_id_pkix1_explicit_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x04,     /* [1972] OBJ_id_pkix1_implicit_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x05,     /* [1980] OBJ_id_mod_crmf */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x06,     /* [1988] OBJ_id_mod_cmc */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x07,     /* [1996] OBJ_id_mod_kea_profile_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x08,     /* [2004] OBJ_id_mod_kea_profile_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x09,     /* [2012] OBJ_id_mod_cmp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0A,     /* [2020] OBJ_id_mod_qualified_cert_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0B,     /* [2028] OBJ_id_mod_qualified_cert_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0C,     /* [2036] OBJ_id_mod_attribute_cert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0D,     /* [2044] OBJ_id_mod_timestamp_protocol */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0E,     /* [2052] OBJ_id_mod_ocsp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0F,     /* [2060] OBJ_id_mod_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x10,     /* [2068] OBJ_id_mod_cmp2000 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x02,     /* [2076] OBJ_biometricInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x03,     /* [2084] OBJ_qcStatements */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x04,     /* [2092] OBJ_ac_auditEntity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x05,     /* [2100] OBJ_ac_targeting */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x06,     /* [2108] OBJ_aaControls */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x07,     /* [2116] OBJ_sbqp_ipAddrBlock */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x08,     /* [2124] OBJ_sbqp_autonomousSysNum */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x09,     /* [2132] OBJ_sbqp_routerIdentifier */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x03,     /* [2140] OBJ_textNotice */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x05,     /* [2148] OBJ_ipsecEndSystem */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x06,     /* [2156] OBJ_ipsecTunnel */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x07,     /* [2164] OBJ_ipsecUser */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x0A,     /* [2172] OBJ_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x01,     /* [2180] OBJ_id_it_caProtEncCert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x02,     /* [2188] OBJ_id_it_signKeyPairTypes */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x03,     /* [2196] OBJ_id_it_encKeyPairTypes */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x04,     /* [2204] OBJ_id_it_preferredSymmAlg */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x05,     /* [2212] OBJ_id_it_caKeyUpdateInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x06,     /* [2220] OBJ_id_it_currentCRL */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x07,     /* [2228] OBJ_id_it_unsupportedOIDs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x08,     /* [2236] OBJ_id_it_subscriptionRequest */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x09,     /* [2244] OBJ_id_it_subscriptionResponse */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0A,     /* [2252] OBJ_id_it_keyPairParamReq */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0B,     /* [2260] OBJ_id_it_keyPairParamRep */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0C,     /* [2268] OBJ_id_it_revPassphrase */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0D,     /* [2276] OBJ_id_it_implicitConfirm */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0E,     /* [2284] OBJ_id_it_confirmWaitTime */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0F,     /* [2292] OBJ_id_it_origPKIMessage */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,     /* [2300] OBJ_id_regCtrl */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,     /* [2308] OBJ_id_regInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x01,/* [2316] OBJ_id_regCtrl_regToken */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x02,/* [2325] OBJ_id_regCtrl_authenticator */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x03,/* [2334] OBJ_id_regCtrl_pkiPublicationInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x04,/* [2343] OBJ_id_regCtrl_pkiArchiveOptions */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x05,/* [2352] OBJ_id_regCtrl_oldCertID */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x06,/* [2361] OBJ_id_regCtrl_protocolEncrKey */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,0x01,/* [2370] OBJ_id_regInfo_utf8Pairs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,0x02,/* [2379] OBJ_id_regInfo_certReq */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x01,     /* [2388] OBJ_id_alg_des40 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x02,     /* [2396] OBJ_id_alg_noSignature */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x03,     /* [2404] OBJ_id_alg_dh_sig_hmac_sha1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x04,     /* [2412] OBJ_id_alg_dh_pop */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x01,     /* [2420] OBJ_id_cmc_statusInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x02,     /* [2428] OBJ_id_cmc_identification */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x03,     /* [2436] OBJ_id_cmc_identityProof */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x04,     /* [2444] OBJ_id_cmc_dataReturn */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x05,     /* [2452] OBJ_id_cmc_transactionId */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x06,     /* [2460] OBJ_id_cmc_senderNonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x07,     /* [2468] OBJ_id_cmc_recipientNonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x08,     /* [2476] OBJ_id_cmc_addExtensions */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x09,     /* [2484] OBJ_id_cmc_encryptedPOP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0A,     /* [2492] OBJ_id_cmc_decryptedPOP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0B,     /* [2500] OBJ_id_cmc_lraPOPWitness */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0F,     /* [2508] OBJ_id_cmc_getCert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x10,     /* [2516] OBJ_id_cmc_getCRL */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x11,     /* [2524] OBJ_id_cmc_revokeRequest */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x12,     /* [2532] OBJ_id_cmc_regInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x13,     /* [2540] OBJ_id_cmc_responseInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x15,     /* [2548] OBJ_id_cmc_queryPending */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x16,     /* [2556] OBJ_id_cmc_popLinkRandom */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x17,     /* [2564] OBJ_id_cmc_popLinkWitness */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x18,     /* [2572] OBJ_id_cmc_confirmCertAcceptance */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,0x01,     /* [2580] OBJ_id_on_personalData */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x01,     /* [2588] OBJ_id_pda_dateOfBirth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x02,     /* [2596] OBJ_id_pda_placeOfBirth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x03,     /* [2604] OBJ_id_pda_gender */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x04,     /* [2612] OBJ_id_pda_countryOfCitizenship */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x05,     /* [2620] OBJ_id_pda_countryOfResidence */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x01,     /* [2628] OBJ_id_aca_authenticationInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x02,     /* [2636] OBJ_id_aca_accessIdentity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x03,     /* [2644] OBJ_id_aca_chargingIdentity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x04,     /* [2652] OBJ_id_aca_group */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x05,     /* [2660] OBJ_id_aca_role */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0B,0x01,     /* [2668] OBJ_id_qcs_pkixQCSyntax_v1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x01,     /* [2676] OBJ_id_cct_crs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x02,     /* [2684] OBJ_id_cct_PKIData */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x03,     /* [2692] OBJ_id_cct_PKIResponse */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x03,     /* [2700] OBJ_ad_timeStamping */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x04,     /* [2708] OBJ_ad_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x01,/* [2716] OBJ_id_pkix_OCSP_basic */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x02,/* [2725] OBJ_id_pkix_OCSP_Nonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x03,/* [2734] OBJ_id_pkix_OCSP_CrlID */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x04,/* [2743] OBJ_id_pkix_OCSP_acceptableResponses */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x05,/* [2752] OBJ_id_pkix_OCSP_noCheck */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x06,/* [2761] OBJ_id_pkix_OCSP_archiveCutoff */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x07,/* [2770] OBJ_id_pkix_OCSP_serviceLocator */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x08,/* [2779] OBJ_id_pkix_OCSP_extendedStatus */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x09,/* [2788] OBJ_id_pkix_OCSP_valid */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x0A,/* [2797] OBJ_id_pkix_OCSP_path */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x0B,/* [2806] OBJ_id_pkix_OCSP_trustRoot */
0x2B,0x0E,0x03,0x02,                         /* [2815] OBJ_algorithm */
0x2B,0x0E,0x03,0x02,0x0B,                    /* [2819] OBJ_rsaSignature */
0x55,0x08,                                   /* [2824] OBJ_X500algorithms */
0x2B,                                        /* [2826] OBJ_org */
0x2B,0x06,                                   /* [2827] OBJ_dod */
0x2B,0x06,0x01,                              /* [2829] OBJ_iana */
0x2B,0x06,0x01,0x01,                         /* [2832] OBJ_Directory */
0x2B,0x06,0x01,0x02,                         /* [2836] OBJ_Management */
0x2B,0x06,0x01,0x03,                         /* [2840] OBJ_Experimental */
0x2B,0x06,0x01,0x04,                         /* [2844] OBJ_Private */
0x2B,0x06,0x01,0x05,                         /* [2848] OBJ_Security */
0x2B,0x06,0x01,0x06,                         /* [2852] OBJ_SNMPv2 */
0x2B,0x06,0x01,0x07,                         /* [2856] OBJ_Mail */
0x2B,0x06,0x01,0x04,0x01,                    /* [2860] OBJ_Enterprises */
0x2B,0x06,0x01,0x04,0x01,0x8B,0x3A,0x82,0x58,/* [2865] OBJ_dcObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x19,/* [2874] OBJ_domainComponent */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0D,/* [2884] OBJ_Domain */
0x50,                                        /* [2894] OBJ_joint_iso_ccitt */
0x55,0x01,0x05,                              /* [2895] OBJ_selected_attribute_types */
0x55,0x01,0x05,0x37,                         /* [2898] OBJ_clearance */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x03,/* [2902] OBJ_md4WithRSAEncryption */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0A,     /* [2911] OBJ_ac_proxying */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0B,     /* [2919] OBJ_sinfo_access */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x06,     /* [2927] OBJ_id_aca_encAttrs */
0x55,0x04,0x48,                              /* [2935] OBJ_role */
0x55,0x1D,0x24,                              /* [2938] OBJ_policy_constraints */
0x55,0x1D,0x37,                              /* [2941] OBJ_target_information */
0x55,0x1D,0x38,                              /* [2944] OBJ_no_rev_avail */
0x00,                                        /* [2947] OBJ_ccitt */
0x2A,0x86,0x48,0xCE,0x3D,                    /* [2948] OBJ_ansi_X9_62 */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x01,          /* [2953] OBJ_X9_62_prime_field */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,          /* [2960] OBJ_X9_62_characteristic_two_field */
0x2A,0x86,0x48,0xCE,0x3D,0x02,0x01,          /* [2967] OBJ_X9_62_id_ecPublicKey */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x01,     /* [2974] OBJ_X9_62_prime192v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x02,     /* [2982] OBJ_X9_62_prime192v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x03,     /* [2990] OBJ_X9_62_prime192v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x04,     /* [2998] OBJ_X9_62_prime239v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x05,     /* [3006] OBJ_X9_62_prime239v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x06,     /* [3014] OBJ_X9_62_prime239v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x07,     /* [3022] OBJ_X9_62_prime256v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x01,          /* [3030] OBJ_ecdsa_with_SHA1 */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x11,0x01,/* [3037] OBJ_ms_csp_name */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x01,/* [3046] OBJ_aes_128_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x02,/* [3055] OBJ_aes_128_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x03,/* [3064] OBJ_aes_128_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x04,/* [3073] OBJ_aes_128_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x15,/* [3082] OBJ_aes_192_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x16,/* [3091] OBJ_aes_192_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x17,/* [3100] OBJ_aes_192_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x18,/* [3109] OBJ_aes_192_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x29,/* [3118] OBJ_aes_256_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2A,/* [3127] OBJ_aes_256_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2B,/* [3136] OBJ_aes_256_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2C,/* [3145] OBJ_aes_256_cfb128 */
0x55,0x1D,0x17,                              /* [3154] OBJ_hold_instruction_code */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x01,          /* [3157] OBJ_hold_instruction_none */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x02,          /* [3164] OBJ_hold_instruction_call_issuer */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x03,          /* [3171] OBJ_hold_instruction_reject */
0x09,                                        /* [3178] OBJ_data */
0x09,0x92,0x26,                              /* [3179] OBJ_pss */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,          /* [3182] OBJ_ucl */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,     /* [3189] OBJ_pilot */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,/* [3197] OBJ_pilotAttributeType */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,/* [3206] OBJ_pilotAttributeSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,/* [3215] OBJ_pilotObjectClass */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x0A,/* [3224] OBJ_pilotGroups */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,0x04,/* [3233] OBJ_iA5StringSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,0x05,/* [3243] OBJ_caseIgnoreIA5StringSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x03,/* [3253] OBJ_pilotObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x04,/* [3263] OBJ_pilotPerson */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x05,/* [3273] OBJ_account */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x06,/* [3283] OBJ_document */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x07,/* [3293] OBJ_room */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x09,/* [3303] OBJ_documentSeries */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0E,/* [3313] OBJ_rFC822localPart */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0F,/* [3323] OBJ_dNSDomain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x11,/* [3333] OBJ_domainRelatedObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x12,/* [3343] OBJ_friendlyCountry */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x13,/* [3353] OBJ_simpleSecurityObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x14,/* [3363] OBJ_pilotOrganization */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x15,/* [3373] OBJ_pilotDSA */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x16,/* [3383] OBJ_qualityLabelledData */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x01,/* [3393] OBJ_userId */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x02,/* [3403] OBJ_textEncodedORAddress */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x03,/* [3413] OBJ_rfc822Mailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x04,/* [3423] OBJ_info */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x05,/* [3433] OBJ_favouriteDrink */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x06,/* [3443] OBJ_roomNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x07,/* [3453] OBJ_photo */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x08,/* [3463] OBJ_userClass */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x09,/* [3473] OBJ_host */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0A,/* [3483] OBJ_manager */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0B,/* [3493] OBJ_documentIdentifier */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0C,/* [3503] OBJ_documentTitle */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0D,/* [3513] OBJ_documentVersion */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0E,/* [3523] OBJ_documentAuthor */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0F,/* [3533] OBJ_documentLocation */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x14,/* [3543] OBJ_homeTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x15,/* [3553] OBJ_secretary */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x16,/* [3563] OBJ_otherMailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x17,/* [3573] OBJ_lastModifiedTime */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x18,/* [3583] OBJ_lastModifiedBy */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1A,/* [3593] OBJ_aRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1B,/* [3603] OBJ_pilotAttributeType27 */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1C,/* [3613] OBJ_mXRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1D,/* [3623] OBJ_nSRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1E,/* [3633] OBJ_sOARecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1F,/* [3643] OBJ_cNAMERecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x25,/* [3653] OBJ_associatedDomain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x26,/* [3663] OBJ_associatedName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x27,/* [3673] OBJ_homePostalAddress */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x28,/* [3683] OBJ_personalTitle */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x29,/* [3693] OBJ_mobileTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2A,/* [3703] OBJ_pagerTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2B,/* [3713] OBJ_friendlyCountryName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2D,/* [3723] OBJ_organizationalStatus */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2E,/* [3733] OBJ_janetMailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2F,/* [3743] OBJ_mailPreferenceOption */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x30,/* [3753] OBJ_buildingName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x31,/* [3763] OBJ_dSAQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x32,/* [3773] OBJ_singleLevelQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x33,/* [3783] OBJ_subtreeMinimumQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x34,/* [3793] OBJ_subtreeMaximumQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x35,/* [3803] OBJ_personalSignature */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x36,/* [3813] OBJ_dITRedirect */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x37,/* [3823] OBJ_audio */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x38,/* [3833] OBJ_documentPublisher */
0x55,0x04,0x2D,                              /* [3843] OBJ_x500UniqueIdentifier */
0x2B,0x06,0x01,0x07,0x01,                    /* [3846] OBJ_mime_mhs */
0x2B,0x06,0x01,0x07,0x01,0x01,               /* [3851] OBJ_mime_mhs_headings */
0x2B,0x06,0x01,0x07,0x01,0x02,               /* [3857] OBJ_mime_mhs_bodies */
0x2B,0x06,0x01,0x07,0x01,0x01,0x01,          /* [3863] OBJ_id_hex_partial_message */
0x2B,0x06,0x01,0x07,0x01,0x01,0x02,          /* [3870] OBJ_id_hex_multipart_message */
0x55,0x04,0x2C,                              /* [3877] OBJ_generationQualifier */
0x55,0x04,0x41,                              /* [3880] OBJ_pseudonym */
0x67,0x2A,                                   /* [3883] OBJ_id_set */
0x67,0x2A,0x00,                              /* [3885] OBJ_set_ctype */
0x67,0x2A,0x01,                              /* [3888] OBJ_set_msgExt */
0x67,0x2A,0x03,                              /* [3891] OBJ_set_attr */
0x67,0x2A,0x05,                              /* [3894] OBJ_set_policy */
0x67,0x2A,0x07,                              /* [3897] OBJ_set_certExt */
0x67,0x2A,0x08,                              /* [3900] OBJ_set_brand */
0x67,0x2A,0x00,0x00,                         /* [3903] OBJ_setct_PANData */
0x67,0x2A,0x00,0x01,                         /* [3907] OBJ_setct_PANToken */
0x67,0x2A,0x00,0x02,                         /* [3911] OBJ_setct_PANOnly */
0x67,0x2A,0x00,0x03,                         /* [3915] OBJ_setct_OIData */
0x67,0x2A,0x00,0x04,                         /* [3919] OBJ_setct_PI */
0x67,0x2A,0x00,0x05,                         /* [3923] OBJ_setct_PIData */
0x67,0x2A,0x00,0x06,                         /* [3927] OBJ_setct_PIDataUnsigned */
0x67,0x2A,0x00,0x07,                         /* [3931] OBJ_setct_HODInput */
0x67,0x2A,0x00,0x08,                         /* [3935] OBJ_setct_AuthResBaggage */
0x67,0x2A,0x00,0x09,                         /* [3939] OBJ_setct_AuthRevReqBaggage */
0x67,0x2A,0x00,0x0A,                         /* [3943] OBJ_setct_AuthRevResBaggage */
0x67,0x2A,0x00,0x0B,                         /* [3947] OBJ_setct_CapTokenSeq */
0x67,0x2A,0x00,0x0C,                         /* [3951] OBJ_setct_PInitResData */
0x67,0x2A,0x00,0x0D,                         /* [3955] OBJ_setct_PI_TBS */
0x67,0x2A,0x00,0x0E,                         /* [3959] OBJ_setct_PResData */
0x67,0x2A,0x00,0x10,                         /* [3963] OBJ_setct_AuthReqTBS */
0x67,0x2A,0x00,0x11,                         /* [3967] OBJ_setct_AuthResTBS */
0x67,0x2A,0x00,0x12,                         /* [3971] OBJ_setct_AuthResTBSX */
0x67,0x2A,0x00,0x13,                         /* [3975] OBJ_setct_AuthTokenTBS */
0x67,0x2A,0x00,0x14,                         /* [3979] OBJ_setct_CapTokenData */
0x67,0x2A,0x00,0x15,                         /* [3983] OBJ_setct_CapTokenTBS */
0x67,0x2A,0x00,0x16,                         /* [3987] OBJ_setct_AcqCardCodeMsg */
0x67,0x2A,0x00,0x17,                         /* [3991] OBJ_setct_AuthRevReqTBS */
0x67,0x2A,0x00,0x18,                         /* [3995] OBJ_setct_AuthRevResData */
0x67,0x2A,0x00,0x19,                         /* [3999] OBJ_setct_AuthRevResTBS */
0x67,0x2A,0x00,0x1A,                         /* [4003] OBJ_setct_CapReqTBS */
0x67,0x2A,0x00,0x1B,                         /* [4007] OBJ_setct_CapReqTBSX */
0x67,0x2A,0x00,0x1C,                         /* [4011] OBJ_setct_CapResData */
0x67,0x2A,0x00,0x1D,                         /* [4015] OBJ_setct_CapRevReqTBS */
0x67,0x2A,0x00,0x1E,                         /* [4019] OBJ_setct_CapRevReqTBSX */
0x67,0x2A,0x00,0x1F,                         /* [4023] OBJ_setct_CapRevResData */
0x67,0x2A,0x00,0x20,                         /* [4027] OBJ_setct_CredReqTBS */
0x67,0x2A,0x00,0x21,                         /* [4031] OBJ_setct_CredReqTBSX */
0x67,0x2A,0x00,0x22,                         /* [4035] OBJ_setct_CredResData */
0x67,0x2A,0x00,0x23,                         /* [4039] OBJ_setct_CredRevReqTBS */
0x67,0x2A,0x00,0x24,                         /* [4043] OBJ_setct_CredRevReqTBSX */
0x67,0x2A,0x00,0x25,                         /* [4047] OBJ_setct_CredRevResData */
0x67,0x2A,0x00,0x26,                         /* [4051] OBJ_setct_PCertReqData */
0x67,0x2A,0x00,0x27,                         /* [4055] OBJ_setct_PCertResTBS */
0x67,0x2A,0x00,0x28,                         /* [4059] OBJ_setct_BatchAdminReqData */
0x67,0x2A,0x00,0x29,                         /* [4063] OBJ_setct_BatchAdminResData */
0x67,0x2A,0x00,0x2A,                         /* [4067] OBJ_setct_CardCInitResTBS */
0x67,0x2A,0x00,0x2B,                         /* [4071] OBJ_setct_MeAqCInitResTBS */
0x67,0x2A,0x00,0x2C,                         /* [4075] OBJ_setct_RegFormResTBS */
0x67,0x2A,0x00,0x2D,                         /* [4079] OBJ_setct_CertReqData */
0x67,0x2A,0x00,0x2E,                         /* [4083] OBJ_setct_CertReqTBS */
0x67,0x2A,0x00,0x2F,                         /* [4087] OBJ_setct_CertResData */
0x67,0x2A,0x00,0x30,                         /* [4091] OBJ_setct_CertInqReqTBS */
0x67,0x2A,0x00,0x31,                         /* [4095] OBJ_setct_ErrorTBS */
0x67,0x2A,0x00,0x32,                         /* [4099] OBJ_setct_PIDualSignedTBE */
0x67,0x2A,0x00,0x33,                         /* [4103] OBJ_setct_PIUnsignedTBE */
0x67,0x2A,0x00,0x34,                         /* [4107] OBJ_setct_AuthReqTBE */
0x67,0x2A,0x00,0x35,                         /* [4111] OBJ_setct_AuthResTBE */
0x67,0x2A,0x00,0x36,                         /* [4115] OBJ_setct_AuthResTBEX */
0x67,0x2A,0x00,0x37,                         /* [4119] OBJ_setct_AuthTokenTBE */
0x67,0x2A,0x00,0x38,                         /* [4123] OBJ_setct_CapTokenTBE */
0x67,0x2A,0x00,0x39,                         /* [4127] OBJ_setct_CapTokenTBEX */
0x67,0x2A,0x00,0x3A,                         /* [4131] OBJ_setct_AcqCardCodeMsgTBE */
0x67,0x2A,0x00,0x3B,                         /* [4135] OBJ_setct_AuthRevReqTBE */
0x67,0x2A,0x00,0x3C,                         /* [4139] OBJ_setct_AuthRevResTBE */
0x67,0x2A,0x00,0x3D,                         /* [4143] OBJ_setct_AuthRevResTBEB */
0x67,0x2A,0x00,0x3E,                         /* [4147] OBJ_setct_CapReqTBE */
0x67,0x2A,0x00,0x3F,                         /* [4151] OBJ_setct_CapReqTBEX */
0x67,0x2A,0x00,0x40,                         /* [4155] OBJ_setct_CapResTBE */
0x67,0x2A,0x00,0x41,                         /* [4159] OBJ_setct_CapRevReqTBE */
0x67,0x2A,0x00,0x42,                         /* [4163] OBJ_setct_CapRevReqTBEX */
0x67,0x2A,0x00,0x43,                         /* [4167] OBJ_setct_CapRevResTBE */
0x67,0x2A,0x00,0x44,                         /* [4171] OBJ_setct_CredReqTBE */
0x67,0x2A,0x00,0x45,                         /* [4175] OBJ_setct_CredReqTBEX */
0x67,0x2A,0x00,0x46,                         /* [4179] OBJ_setct_CredResTBE */
0x67,0x2A,0x00,0x47,                         /* [4183] OBJ_setct_CredRevReqTBE */
0x67,0x2A,0x00,0x48,                         /* [4187] OBJ_setct_CredRevReqTBEX */
0x67,0x2A,0x00,0x49,                         /* [4191] OBJ_setct_CredRevResTBE */
0x67,0x2A,0x00,0x4A,                         /* [4195] OBJ_setct_BatchAdminReqTBE */
0x67,0x2A,0x00,0x4B,                         /* [4199] OBJ_setct_BatchAdminResTBE */
0x67,0x2A,0x00,0x4C,                         /* [4203] OBJ_setct_RegFormReqTBE */
0x67,0x2A,0x00,0x4D,                         /* [4207] OBJ_setct_CertReqTBE */
0x67,0x2A,0x00,0x4E,                         /* [4211] OBJ_setct_CertReqTBEX */
0x67,0x2A,0x00,0x4F,                         /* [4215] OBJ_setct_CertResTBE */
0x67,0x2A,0x00,0x50,                         /* [4219] OBJ_setct_CRLNotificationTBS */
0x67,0x2A,0x00,0x51,                         /* [4223] OBJ_setct_CRLNotificationResTBS */
0x67,0x2A,0x00,0x52,                         /* [4227] OBJ_setct_BCIDistributionTBS */
0x67,0x2A,0x01,0x01,                         /* [4231] OBJ_setext_genCrypt */
0x67,0x2A,0x01,0x03,                         /* [4235] OBJ_setext_miAuth */
0x67,0x2A,0x01,0x04,                         /* [4239] OBJ_setext_pinSecure */
0x67,0x2A,0x01,0x05,                         /* [4243] OBJ_setext_pinAny */
0x67,0x2A,0x01,0x07,                         /* [4247] OBJ_setext_track2 */
0x67,0x2A,0x01,0x08,                         /* [4251] OBJ_setext_cv */
0x67,0x2A,0x05,0x00,                         /* [4255] OBJ_set_policy_root */
0x67,0x2A,0x07,0x00,                         /* [4259] OBJ_setCext_hashedRoot */
0x67,0x2A,0x07,0x01,                         /* [4263] OBJ_setCext_certType */
0x67,0x2A,0x07,0x02,                         /* [4267] OBJ_setCext_merchData */
0x67,0x2A,0x07,0x03,                         /* [4271] OBJ_setCext_cCertRequired */
0x67,0x2A,0x07,0x04,                         /* [4275] OBJ_setCext_tunneling */
0x67,0x2A,0x07,0x05,                         /* [4279] OBJ_setCext_setExt */
0x67,0x2A,0x07,0x06,                         /* [4283] OBJ_setCext_setQualf */
0x67,0x2A,0x07,0x07,                         /* [4287] OBJ_setCext_PGWYcapabilities */
0x67,0x2A,0x07,0x08,                         /* [4291] OBJ_setCext_TokenIdentifier */
0x67,0x2A,0x07,0x09,                         /* [4295] OBJ_setCext_Track2Data */
0x67,0x2A,0x07,0x0A,                         /* [4299] OBJ_setCext_TokenType */
0x67,0x2A,0x07,0x0B,                         /* [4303] OBJ_setCext_IssuerCapabilities */
0x67,0x2A,0x03,0x00,                         /* [4307] OBJ_setAttr_Cert */
0x67,0x2A,0x03,0x01,                         /* [4311] OBJ_setAttr_PGWYcap */
0x67,0x2A,0x03,0x02,                         /* [4315] OBJ_setAttr_TokenType */
0x67,0x2A,0x03,0x03,                         /* [4319] OBJ_setAttr_IssCap */
0x67,0x2A,0x03,0x00,0x00,                    /* [4323] OBJ_set_rootKeyThumb */
0x67,0x2A,0x03,0x00,0x01,                    /* [4328] OBJ_set_addPolicy */
0x67,0x2A,0x03,0x02,0x01,                    /* [4333] OBJ_setAttr_Token_EMV */
0x67,0x2A,0x03,0x02,0x02,                    /* [4338] OBJ_setAttr_Token_B0Prime */
0x67,0x2A,0x03,0x03,0x03,                    /* [4343] OBJ_setAttr_IssCap_CVM */
0x67,0x2A,0x03,0x03,0x04,                    /* [4348] OBJ_setAttr_IssCap_T2 */
0x67,0x2A,0x03,0x03,0x05,                    /* [4353] OBJ_setAttr_IssCap_Sig */
0x67,0x2A,0x03,0x03,0x03,0x01,               /* [4358] OBJ_setAttr_GenCryptgrm */
0x67,0x2A,0x03,0x03,0x04,0x01,               /* [4364] OBJ_setAttr_T2Enc */
0x67,0x2A,0x03,0x03,0x04,0x02,               /* [4370] OBJ_setAttr_T2cleartxt */
0x67,0x2A,0x03,0x03,0x05,0x01,               /* [4376] OBJ_setAttr_TokICCsig */
0x67,0x2A,0x03,0x03,0x05,0x02,               /* [4382] OBJ_setAttr_SecDevSig */
0x67,0x2A,0x08,0x01,                         /* [4388] OBJ_set_brand_IATA_ATA */
0x67,0x2A,0x08,0x1E,                         /* [4392] OBJ_set_brand_Diners */
0x67,0x2A,0x08,0x22,                         /* [4396] OBJ_set_brand_AmericanExpress */
0x67,0x2A,0x08,0x23,                         /* [4400] OBJ_set_brand_JCB */
0x67,0x2A,0x08,0x04,                         /* [4404] OBJ_set_brand_Visa */
0x67,0x2A,0x08,0x05,                         /* [4408] OBJ_set_brand_MasterCard */
0x67,0x2A,0x08,0xAE,0x7B,                    /* [4412] OBJ_set_brand_Novus */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x0A,     /* [4417] OBJ_des_cdmf */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x06,/* [4425] OBJ_rsaOAEPEncryptionSET */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02,0x02,/* [4434] OBJ_ms_smartcard_login */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02,0x03,/* [4444] OBJ_ms_upn */
0x55,0x04,0x09,                              /* [4454] OBJ_streetAddress */
0x55,0x04,0x11,                              /* [4457] OBJ_postalCode */
};

static ASN1_OBJECT nid_objs[NUM_NID]={
{"UNDEF","undefined",NID_undef,1,&(lvalues[0]),0},
{"rsadsi","RSA Data Security, Inc.",NID_rsadsi,6,&(lvalues[1]),0},
{"pkcs","RSA Data Security, Inc. PKCS",NID_pkcs,7,&(lvalues[7]),0},
{"MD2","md2",NID_md2,8,&(lvalues[14]),0},
{"MD5","md5",NID_md5,8,&(lvalues[22]),0},
{"RC4","rc4",NID_rc4,8,&(lvalues[30]),0},
{"rsaEncryption","rsaEncryption",NID_rsaEncryption,9,&(lvalues[38]),0},
{"RSA-MD2","md2WithRSAEncryption",NID_md2WithRSAEncryption,9,
	&(lvalues[47]),0},
{"RSA-MD5","md5WithRSAEncryption",NID_md5WithRSAEncryption,9,
	&(lvalues[56]),0},
{"PBE-MD2-DES","pbeWithMD2AndDES-CBC",NID_pbeWithMD2AndDES_CBC,9,
	&(lvalues[65]),0},
{"PBE-MD5-DES","pbeWithMD5AndDES-CBC",NID_pbeWithMD5AndDES_CBC,9,
	&(lvalues[74]),0},
{"X500","directory services (X.500)",NID_X500,1,&(lvalues[83]),0},
{"X509","X509",NID_X509,2,&(lvalues[84]),0},
{"CN","commonName",NID_commonName,3,&(lvalues[86]),0},
{"C","countryName",NID_countryName,3,&(lvalues[89]),0},
{"L","localityName",NID_localityName,3,&(lvalues[92]),0},
{"ST","stateOrProvinceName",NID_stateOrProvinceName,3,&(lvalues[95]),0},
{"O","organizationName",NID_organizationName,3,&(lvalues[98]),0},
{"OU","organizationalUnitName",NID_organizationalUnitName,3,
	&(lvalues[101]),0},
{"RSA","rsa",NID_rsa,4,&(lvalues[104]),0},
{"pkcs7","pkcs7",NID_pkcs7,8,&(lvalues[108]),0},
{"pkcs7-data","pkcs7-data",NID_pkcs7_data,9,&(lvalues[116]),0},
{"pkcs7-signedData","pkcs7-signedData",NID_pkcs7_signed,9,
	&(lvalues[125]),0},
{"pkcs7-envelopedData","pkcs7-envelopedData",NID_pkcs7_enveloped,9,
	&(lvalues[134]),0},
{"pkcs7-signedAndEnvelopedData","pkcs7-signedAndEnvelopedData",
	NID_pkcs7_signedAndEnveloped,9,&(lvalues[143]),0},
{"pkcs7-digestData","pkcs7-digestData",NID_pkcs7_digest,9,
	&(lvalues[152]),0},
{"pkcs7-encryptedData","pkcs7-encryptedData",NID_pkcs7_encrypted,9,
	&(lvalues[161]),0},
{"pkcs3","pkcs3",NID_pkcs3,8,&(lvalues[170]),0},
{"dhKeyAgreement","dhKeyAgreement",NID_dhKeyAgreement,9,
	&(lvalues[178]),0},
{"DES-ECB","des-ecb",NID_des_ecb,5,&(lvalues[187]),0},
{"DES-CFB","des-cfb",NID_des_cfb64,5,&(lvalues[192]),0},
{"DES-CBC","des-cbc",NID_des_cbc,5,&(lvalues[197]),0},
{"DES-EDE","des-ede",NID_des_ede_ecb,5,&(lvalues[202]),0},
{"DES-EDE3","des-ede3",NID_des_ede3_ecb,0,NULL},
{"IDEA-CBC","idea-cbc",NID_idea_cbc,11,&(lvalues[207]),0},
{"IDEA-CFB","idea-cfb",NID_idea_cfb64,0,NULL},
{"IDEA-ECB","idea-ecb",NID_idea_ecb,0,NULL},
{"RC2-CBC","rc2-cbc",NID_rc2_cbc,8,&(lvalues[218]),0},
{"RC2-ECB","rc2-ecb",NID_rc2_ecb,0,NULL},
{"RC2-CFB","rc2-cfb",NID_rc2_cfb64,0,NULL},
{"RC2-OFB","rc2-ofb",NID_rc2_ofb64,0,NULL},
{"SHA","sha",NID_sha,5,&(lvalues[226]),0},
{"RSA-SHA","shaWithRSAEncryption",NID_shaWithRSAEncryption,5,
	&(lvalues[231]),0},
{"DES-EDE-CBC","des-ede-cbc",NID_des_ede_cbc,0,NULL},
{"DES-EDE3-CBC","des-ede3-cbc",NID_des_ede3_cbc,8,&(lvalues[236]),0},
{"DES-OFB","des-ofb",NID_des_ofb64,5,&(lvalues[244]),0},
{"IDEA-OFB","idea-ofb",NID_idea_ofb64,0,NULL},
{"pkcs9","pkcs9",NID_pkcs9,8,&(lvalues[249]),0},
{"emailAddress","emailAddress",NID_pkcs9_emailAddress,9,
	&(lvalues[257]),0},
{"unstructuredName","unstructuredName",NID_pkcs9_unstructuredName,9,
	&(lvalues[266]),0},
{"contentType","contentType",NID_pkcs9_contentType,9,&(lvalues[275]),0},
{"messageDigest","messageDigest",NID_pkcs9_messageDigest,9,
	&(lvalues[284]),0},
{"signingTime","signingTime",NID_pkcs9_signingTime,9,&(lvalues[293]),0},
{"countersignature","countersignature",NID_pkcs9_countersignature,9,
	&(lvalues[302]),0},
{"challengePassword","challengePassword",NID_pkcs9_challengePassword,
	9,&(lvalues[311]),0},
{"unstructuredAddress","unstructuredAddress",
	NID_pkcs9_unstructuredAddress,9,&(lvalues[320]),0},
{"extendedCertificateAttributes","extendedCertificateAttributes",
	NID_pkcs9_extCertAttributes,9,&(lvalues[329]),0},
{"Netscape","Netscape Communications Corp.",NID_netscape,7,
	&(lvalues[338]),0},
{"nsCertExt","Netscape Certificate Extension",
	NID_netscape_cert_extension,8,&(lvalues[345]),0},
{"nsDataType","Netscape Data Type",NID_netscape_data_type,8,
	&(lvalues[353]),0},
{"DES-EDE-CFB","des-ede-cfb",NID_des_ede_cfb64,0,NULL},
{"DES-EDE3-CFB","des-ede3-cfb",NID_des_ede3_cfb64,0,NULL},
{"DES-EDE-OFB","des-ede-ofb",NID_des_ede_ofb64,0,NULL},
{"DES-EDE3-OFB","des-ede3-ofb",NID_des_ede3_ofb64,0,NULL},
{"SHA1","sha1",NID_sha1,5,&(lvalues[361]),0},
{"RSA-SHA1","sha1WithRSAEncryption",NID_sha1WithRSAEncryption,9,
	&(lvalues[366]),0},
{"DSA-SHA","dsaWithSHA",NID_dsaWithSHA,5,&(lvalues[375]),0},
{"DSA-old","dsaEncryption-old",NID_dsa_2,5,&(lvalues[380]),0},
{"PBE-SHA1-RC2-64","pbeWithSHA1AndRC2-CBC",NID_pbeWithSHA1AndRC2_CBC,
	9,&(lvalues[385]),0},
{"PBKDF2","PBKDF2",NID_id_pbkdf2,9,&(lvalues[394]),0},
{"DSA-SHA1-old","dsaWithSHA1-old",NID_dsaWithSHA1_2,5,&(lvalues[403]),0},
{"nsCertType","Netscape Cert Type",NID_netscape_cert_type,9,
	&(lvalues[408]),0},
{"nsBaseUrl","Netscape Base Url",NID_netscape_base_url,9,
	&(lvalues[417]),0},
{"nsRevocationUrl","Netscape Revocation Url",
	NID_netscape_revocation_url,9,&(lvalues[426]),0},
{"nsCaRevocationUrl","Netscape CA Revocation Url",
	NID_netscape_ca_revocation_url,9,&(lvalues[435]),0},
{"nsRenewalUrl","Netscape Renewal Url",NID_netscape_renewal_url,9,
	&(lvalues[444]),0},
{"nsCaPolicyUrl","Netscape CA Policy Url",NID_netscape_ca_policy_url,
	9,&(lvalues[453]),0},
{"nsSslServerName","Netscape SSL Server Name",
	NID_netscape_ssl_server_name,9,&(lvalues[462]),0},
{"nsComment","Netscape Comment",NID_netscape_comment,9,&(lvalues[471]),0},
{"nsCertSequence","Netscape Certificate Sequence",
	NID_netscape_cert_sequence,9,&(lvalues[480]),0},
{"DESX-CBC","desx-cbc",NID_desx_cbc,0,NULL},
{"id-ce","id-ce",NID_id_ce,2,&(lvalues[489]),0},
{"subjectKeyIdentifier","X509v3 Subject Key Identifier",
	NID_subject_key_identifier,3,&(lvalues[491]),0},
{"keyUsage","X509v3 Key Usage",NID_key_usage,3,&(lvalues[494]),0},
{"privateKeyUsagePeriod","X509v3 Private Key Usage Period",
	NID_private_key_usage_period,3,&(lvalues[497]),0},
{"subjectAltName","X509v3 Subject Alternative Name",
	NID_subject_alt_name,3,&(lvalues[500]),0},
{"issuerAltName","X509v3 Issuer Alternative Name",NID_issuer_alt_name,
	3,&(lvalues[503]),0},
{"basicConstraints","X509v3 Basic Constraints",NID_basic_constraints,
	3,&(lvalues[506]),0},
{"crlNumber","X509v3 CRL Number",NID_crl_number,3,&(lvalues[509]),0},
{"certificatePolicies","X509v3 Certificate Policies",
	NID_certificate_policies,3,&(lvalues[512]),0},
{"authorityKeyIdentifier","X509v3 Authority Key Identifier",
	NID_authority_key_identifier,3,&(lvalues[515]),0},
{"BF-CBC","bf-cbc",NID_bf_cbc,9,&(lvalues[518]),0},
{"BF-ECB","bf-ecb",NID_bf_ecb,0,NULL},
{"BF-CFB","bf-cfb",NID_bf_cfb64,0,NULL},
{"BF-OFB","bf-ofb",NID_bf_ofb64,0,NULL},
{"MDC2","mdc2",NID_mdc2,4,&(lvalues[527]),0},
{"RSA-MDC2","mdc2WithRSA",NID_mdc2WithRSA,4,&(lvalues[531]),0},
{"RC4-40","rc4-40",NID_rc4_40,0,NULL},
{"RC2-40-CBC","rc2-40-cbc",NID_rc2_40_cbc,0,NULL},
{"GN","givenName",NID_givenName,3,&(lvalues[535]),0},
{"SN","surname",NID_surname,3,&(lvalues[538]),0},
{"initials","initials",NID_initials,3,&(lvalues[541]),0},
{NULL,NULL,NID_undef,0,NULL},
{"crlDistributionPoints","X509v3 CRL Distribution Points",
	NID_crl_distribution_points,3,&(lvalues[544]),0},
{"RSA-NP-MD5","md5WithRSA",NID_md5WithRSA,5,&(lvalues[547]),0},
{"serialNumber","serialNumber",NID_serialNumber,3,&(lvalues[552]),0},
{"title","title",NID_title,3,&(lvalues[555]),0},
{"description","description",NID_description,3,&(lvalues[558]),0},
{"CAST5-CBC","cast5-cbc",NID_cast5_cbc,9,&(lvalues[561]),0},
{"CAST5-ECB","cast5-ecb",NID_cast5_ecb,0,NULL},
{"CAST5-CFB","cast5-cfb",NID_cast5_cfb64,0,NULL},
{"CAST5-OFB","cast5-ofb",NID_cast5_ofb64,0,NULL},
{"pbeWithMD5AndCast5CBC","pbeWithMD5AndCast5CBC",
	NID_pbeWithMD5AndCast5_CBC,9,&(lvalues[570]),0},
{"DSA-SHA1","dsaWithSHA1",NID_dsaWithSHA1,7,&(lvalues[579]),0},
{"MD5-SHA1","md5-sha1",NID_md5_sha1,0,NULL},
{"RSA-SHA1-2","sha1WithRSA",NID_sha1WithRSA,5,&(lvalues[586]),0},
{"DSA","dsaEncryption",NID_dsa,7,&(lvalues[591]),0},
{"RIPEMD160","ripemd160",NID_ripemd160,5,&(lvalues[598]),0},
{NULL,NULL,NID_undef,0,NULL},
{"RSA-RIPEMD160","ripemd160WithRSA",NID_ripemd160WithRSA,6,
	&(lvalues[603]),0},
{"RC5-CBC","rc5-cbc",NID_rc5_cbc,8,&(lvalues[609]),0},
{"RC5-ECB","rc5-ecb",NID_rc5_ecb,0,NULL},
{"RC5-CFB","rc5-cfb",NID_rc5_cfb64,0,NULL},
{"RC5-OFB","rc5-ofb",NID_rc5_ofb64,0,NULL},
{"RLE","run length compression",NID_rle_compression,6,&(lvalues[617]),0},
{"ZLIB","zlib compression",NID_zlib_compression,6,&(lvalues[623]),0},
{"extendedKeyUsage","X509v3 Extended Key Usage",NID_ext_key_usage,3,
	&(lvalues[629]),0},
{"PKIX","PKIX",NID_id_pkix,6,&(lvalues[632]),0},
{"id-kp","id-kp",NID_id_kp,7,&(lvalues[638]),0},
{"serverAuth","TLS Web Server Authentication",NID_server_auth,8,
	&(lvalues[645]),0},
{"clientAuth","TLS Web Client Authentication",NID_client_auth,8,
	&(lvalues[653]),0},
{"codeSigning","Code Signing",NID_code_sign,8,&(lvalues[661]),0},
{"emailProtection","E-mail Protection",NID_email_protect,8,
	&(lvalues[669]),0},
{"timeStamping","Time Stamping",NID_time_stamp,8,&(lvalues[677]),0},
{"msCodeInd","Microsoft Individual Code Signing",NID_ms_code_ind,10,
	&(lvalues[685]),0},
{"msCodeCom","Microsoft Commercial Code Signing",NID_ms_code_com,10,
	&(lvalues[695]),0},
{"msCTLSign","Microsoft Trust List Signing",NID_ms_ctl_sign,10,
	&(lvalues[705]),0},
{"msSGC","Microsoft Server Gated Crypto",NID_ms_sgc,10,&(lvalues[715]),0},
{"msEFS","Microsoft Encrypted File System",NID_ms_efs,10,
	&(lvalues[725]),0},
{"nsSGC","Netscape Server Gated Crypto",NID_ns_sgc,9,&(lvalues[735]),0},
{"deltaCRL","X509v3 Delta CRL Indicator",NID_delta_crl,3,
	&(lvalues[744]),0},
{"CRLReason","X509v3 CRL Reason Code",NID_crl_reason,3,&(lvalues[747]),0},
{"invalidityDate","Invalidity Date",NID_invalidity_date,3,
	&(lvalues[750]),0},
{"SXNetID","Strong Extranet ID",NID_sxnet,5,&(lvalues[753]),0},
{"PBE-SHA1-RC4-128","pbeWithSHA1And128BitRC4",
	NID_pbe_WithSHA1And128BitRC4,10,&(lvalues[758]),0},
{"PBE-SHA1-RC4-40","pbeWithSHA1And40BitRC4",
	NID_pbe_WithSHA1And40BitRC4,10,&(lvalues[768]),0},
{"PBE-SHA1-3DES","pbeWithSHA1And3-KeyTripleDES-CBC",
	NID_pbe_WithSHA1And3_Key_TripleDES_CBC,10,&(lvalues[778]),0},
{"PBE-SHA1-2DES","pbeWithSHA1And2-KeyTripleDES-CBC",
	NID_pbe_WithSHA1And2_Key_TripleDES_CBC,10,&(lvalues[788]),0},
{"PBE-SHA1-RC2-128","pbeWithSHA1And128BitRC2-CBC",
	NID_pbe_WithSHA1And128BitRC2_CBC,10,&(lvalues[798]),0},
{"PBE-SHA1-RC2-40","pbeWithSHA1And40BitRC2-CBC",
	NID_pbe_WithSHA1And40BitRC2_CBC,10,&(lvalues[808]),0},
{"keyBag","keyBag",NID_keyBag,11,&(lvalues[818]),0},
{"pkcs8ShroudedKeyBag","pkcs8ShroudedKeyBag",NID_pkcs8ShroudedKeyBag,
	11,&(lvalues[829]),0},
{"certBag","certBag",NID_certBag,11,&(lvalues[840]),0},
{"crlBag","crlBag",NID_crlBag,11,&(lvalues[851]),0},
{"secretBag","secretBag",NID_secretBag,11,&(lvalues[862]),0},
{"safeContentsBag","safeContentsBag",NID_safeContentsBag,11,
	&(lvalues[873]),0},
{"friendlyName","friendlyName",NID_friendlyName,9,&(lvalues[884]),0},
{"localKeyID","localKeyID",NID_localKeyID,9,&(lvalues[893]),0},
{"x509Certificate","x509Certificate",NID_x509Certificate,10,
	&(lvalues[902]),0},
{"sdsiCertificate","sdsiCertificate",NID_sdsiCertificate,10,
	&(lvalues[912]),0},
{"x509Crl","x509Crl",NID_x509Crl,10,&(lvalues[922]),0},
{"PBES2","PBES2",NID_pbes2,9,&(lvalues[932]),0},
{"PBMAC1","PBMAC1",NID_pbmac1,9,&(lvalues[941]),0},
{"hmacWithSHA1","hmacWithSHA1",NID_hmacWithSHA1,8,&(lvalues[950]),0},
{"id-qt-cps","Policy Qualifier CPS",NID_id_qt_cps,8,&(lvalues[958]),0},
{"id-qt-unotice","Policy Qualifier User Notice",NID_id_qt_unotice,8,
	&(lvalues[966]),0},
{"RC2-64-CBC","rc2-64-cbc",NID_rc2_64_cbc,0,NULL},
{"SMIME-CAPS","S/MIME Capabilities",NID_SMIMECapabilities,9,
	&(lvalues[974]),0},
{"PBE-MD2-RC2-64","pbeWithMD2AndRC2-CBC",NID_pbeWithMD2AndRC2_CBC,9,
	&(lvalues[983]),0},
{"PBE-MD5-RC2-64","pbeWithMD5AndRC2-CBC",NID_pbeWithMD5AndRC2_CBC,9,
	&(lvalues[992]),0},
{"PBE-SHA1-DES","pbeWithSHA1AndDES-CBC",NID_pbeWithSHA1AndDES_CBC,9,
	&(lvalues[1001]),0},
{"msExtReq","Microsoft Extension Request",NID_ms_ext_req,10,
	&(lvalues[1010]),0},
{"extReq","Extension Request",NID_ext_req,9,&(lvalues[1020]),0},
{"name","name",NID_name,3,&(lvalues[1029]),0},
{"dnQualifier","dnQualifier",NID_dnQualifier,3,&(lvalues[1032]),0},
{"id-pe","id-pe",NID_id_pe,7,&(lvalues[1035]),0},
{"id-ad","id-ad",NID_id_ad,7,&(lvalues[1042]),0},
{"authorityInfoAccess","Authority Information Access",NID_info_access,
	8,&(lvalues[1049]),0},
{"OCSP","OCSP",NID_ad_OCSP,8,&(lvalues[1057]),0},
{"caIssuers","CA Issuers",NID_ad_ca_issuers,8,&(lvalues[1065]),0},
{"OCSPSigning","OCSP Signing",NID_OCSP_sign,8,&(lvalues[1073]),0},
{"ISO","iso",NID_iso,1,&(lvalues[1081]),0},
{"member-body","ISO Member Body",NID_member_body,1,&(lvalues[1082]),0},
{"ISO-US","ISO US Member Body",NID_ISO_US,3,&(lvalues[1083]),0},
{"X9-57","X9.57",NID_X9_57,5,&(lvalues[1086]),0},
{"X9cm","X9.57 CM ?",NID_X9cm,6,&(lvalues[1091]),0},
{"pkcs1","pkcs1",NID_pkcs1,8,&(lvalues[1097]),0},
{"pkcs5","pkcs5",NID_pkcs5,8,&(lvalues[1105]),0},
{"SMIME","S/MIME",NID_SMIME,9,&(lvalues[1113]),0},
{"id-smime-mod","id-smime-mod",NID_id_smime_mod,10,&(lvalues[1122]),0},
{"id-smime-ct","id-smime-ct",NID_id_smime_ct,10,&(lvalues[1132]),0},
{"id-smime-aa","id-smime-aa",NID_id_smime_aa,10,&(lvalues[1142]),0},
{"id-smime-alg","id-smime-alg",NID_id_smime_alg,10,&(lvalues[1152]),0},
{"id-smime-cd","id-smime-cd",NID_id_smime_cd,10,&(lvalues[1162]),0},
{"id-smime-spq","id-smime-spq",NID_id_smime_spq,10,&(lvalues[1172]),0},
{"id-smime-cti","id-smime-cti",NID_id_smime_cti,10,&(lvalues[1182]),0},
{"id-smime-mod-cms","id-smime-mod-cms",NID_id_smime_mod_cms,11,
	&(lvalues[1192]),0},
{"id-smime-mod-ess","id-smime-mod-ess",NID_id_smime_mod_ess,11,
	&(lvalues[1203]),0},
{"id-smime-mod-oid","id-smime-mod-oid",NID_id_smime_mod_oid,11,
	&(lvalues[1214]),0},
{"id-smime-mod-msg-v3","id-smime-mod-msg-v3",NID_id_smime_mod_msg_v3,
	11,&(lvalues[1225]),0},
{"id-smime-mod-ets-eSignature-88","id-smime-mod-ets-eSignature-88",
	NID_id_smime_mod_ets_eSignature_88,11,&(lvalues[1236]),0},
{"id-smime-mod-ets-eSignature-97","id-smime-mod-ets-eSignature-97",
	NID_id_smime_mod_ets_eSignature_97,11,&(lvalues[1247]),0},
{"id-smime-mod-ets-eSigPolicy-88","id-smime-mod-ets-eSigPolicy-88",
	NID_id_smime_mod_ets_eSigPolicy_88,11,&(lvalues[1258]),0},
{"id-smime-mod-ets-eSigPolicy-97","id-smime-mod-ets-eSigPolicy-97",
	NID_id_smime_mod_ets_eSigPolicy_97,11,&(lvalues[1269]),0},
{"id-smime-ct-receipt","id-smime-ct-receipt",NID_id_smime_ct_receipt,
	11,&(lvalues[1280]),0},
{"id-smime-ct-authData","id-smime-ct-authData",
	NID_id_smime_ct_authData,11,&(lvalues[1291]),0},
{"id-smime-ct-publishCert","id-smime-ct-publishCert",
	NID_id_smime_ct_publishCert,11,&(lvalues[1302]),0},
{"id-smime-ct-TSTInfo","id-smime-ct-TSTInfo",NID_id_smime_ct_TSTInfo,
	11,&(lvalues[1313]),0},
{"id-smime-ct-TDTInfo","id-smime-ct-TDTInfo",NID_id_smime_ct_TDTInfo,
	11,&(lvalues[1324]),0},
{"id-smime-ct-contentInfo","id-smime-ct-contentInfo",
	NID_id_smime_ct_contentInfo,11,&(lvalues[1335]),0},
{"id-smime-ct-DVCSRequestData","id-smime-ct-DVCSRequestData",
	NID_id_smime_ct_DVCSRequestData,11,&(lvalues[1346]),0},
{"id-smime-ct-DVCSResponseData","id-smime-ct-DVCSResponseData",
	NID_id_smime_ct_DVCSResponseData,11,&(lvalues[1357]),0},
{"id-smime-aa-receiptRequest","id-smime-aa-receiptRequest",
	NID_id_smime_aa_receiptRequest,11,&(lvalues[1368]),0},
{"id-smime-aa-securityLabel","id-smime-aa-securityLabel",
	NID_id_smime_aa_securityLabel,11,&(lvalues[1379]),0},
{"id-smime-aa-mlExpandHistory","id-smime-aa-mlExpandHistory",
	NID_id_smime_aa_mlExpandHistory,11,&(lvalues[1390]),0},
{"id-smime-aa-contentHint","id-smime-aa-contentHint",
	NID_id_smime_aa_contentHint,11,&(lvalues[1401]),0},
{"id-smime-aa-msgSigDigest","id-smime-aa-msgSigDigest",
	NID_id_smime_aa_msgSigDigest,11,&(lvalues[1412]),0},
{"id-smime-aa-encapContentType","id-smime-aa-encapContentType",
	NID_id_smime_aa_encapContentType,11,&(lvalues[1423]),0},
{"id-smime-aa-contentIdentifier","id-smime-aa-contentIdentifier",
	NID_id_smime_aa_contentIdentifier,11,&(lvalues[1434]),0},
{"id-smime-aa-macValue","id-smime-aa-macValue",
	NID_id_smime_aa_macValue,11,&(lvalues[1445]),0},
{"id-smime-aa-equivalentLabels","id-smime-aa-equivalentLabels",
	NID_id_smime_aa_equivalentLabels,11,&(lvalues[1456]),0},
{"id-smime-aa-contentReference","id-smime-aa-contentReference",
	NID_id_smime_aa_contentReference,11,&(lvalues[1467]),0},
{"id-smime-aa-encrypKeyPref","id-smime-aa-encrypKeyPref",
	NID_id_smime_aa_encrypKeyPref,11,&(lvalues[1478]),0},
{"id-smime-aa-signingCertificate","id-smime-aa-signingCertificate",
	NID_id_smime_aa_signingCertificate,11,&(lvalues[1489]),0},
{"id-smime-aa-smimeEncryptCerts","id-smime-aa-smimeEncryptCerts",
	NID_id_smime_aa_smimeEncryptCerts,11,&(lvalues[1500]),0},
{"id-smime-aa-timeStampToken","id-smime-aa-timeStampToken",
	NID_id_smime_aa_timeStampToken,11,&(lvalues[1511]),0},
{"id-smime-aa-ets-sigPolicyId","id-smime-aa-ets-sigPolicyId",
	NID_id_smime_aa_ets_sigPolicyId,11,&(lvalues[1522]),0},
{"id-smime-aa-ets-commitmentType","id-smime-aa-ets-commitmentType",
	NID_id_smime_aa_ets_commitmentType,11,&(lvalues[1533]),0},
{"id-smime-aa-ets-signerLocation","id-smime-aa-ets-signerLocation",
	NID_id_smime_aa_ets_signerLocation,11,&(lvalues[1544]),0},
{"id-smime-aa-ets-signerAttr","id-smime-aa-ets-signerAttr",
	NID_id_smime_aa_ets_signerAttr,11,&(lvalues[1555]),0},
{"id-smime-aa-ets-otherSigCert","id-smime-aa-ets-otherSigCert",
	NID_id_smime_aa_ets_otherSigCert,11,&(lvalues[1566]),0},
{"id-smime-aa-ets-contentTimestamp",
	"id-smime-aa-ets-contentTimestamp",
	NID_id_smime_aa_ets_contentTimestamp,11,&(lvalues[1577]),0},
{"id-smime-aa-ets-CertificateRefs","id-smime-aa-ets-CertificateRefs",
	NID_id_smime_aa_ets_CertificateRefs,11,&(lvalues[1588]),0},
{"id-smime-aa-ets-RevocationRefs","id-smime-aa-ets-RevocationRefs",
	NID_id_smime_aa_ets_RevocationRefs,11,&(lvalues[1599]),0},
{"id-smime-aa-ets-certValues","id-smime-aa-ets-certValues",
	NID_id_smime_aa_ets_certValues,11,&(lvalues[1610]),0},
{"id-smime-aa-ets-revocationValues",
	"id-smime-aa-ets-revocationValues",
	NID_id_smime_aa_ets_revocationValues,11,&(lvalues[1621]),0},
{"id-smime-aa-ets-escTimeStamp","id-smime-aa-ets-escTimeStamp",
	NID_id_smime_aa_ets_escTimeStamp,11,&(lvalues[1632]),0},
{"id-smime-aa-ets-certCRLTimestamp",
	"id-smime-aa-ets-certCRLTimestamp",
	NID_id_smime_aa_ets_certCRLTimestamp,11,&(lvalues[1643]),0},
{"id-smime-aa-ets-archiveTimeStamp",
	"id-smime-aa-ets-archiveTimeStamp",
	NID_id_smime_aa_ets_archiveTimeStamp,11,&(lvalues[1654]),0},
{"id-smime-aa-signatureType","id-smime-aa-signatureType",
	NID_id_smime_aa_signatureType,11,&(lvalues[1665]),0},
{"id-smime-aa-dvcs-dvc","id-smime-aa-dvcs-dvc",
	NID_id_smime_aa_dvcs_dvc,11,&(lvalues[1676]),0},
{"id-smime-alg-ESDHwith3DES","id-smime-alg-ESDHwith3DES",
	NID_id_smime_alg_ESDHwith3DES,11,&(lvalues[1687]),0},
{"id-smime-alg-ESDHwithRC2","id-smime-alg-ESDHwithRC2",
	NID_id_smime_alg_ESDHwithRC2,11,&(lvalues[1698]),0},
{"id-smime-alg-3DESwrap","id-smime-alg-3DESwrap",
	NID_id_smime_alg_3DESwrap,11,&(lvalues[1709]),0},
{"id-smime-alg-RC2wrap","id-smime-alg-RC2wrap",
	NID_id_smime_alg_RC2wrap,11,&(lvalues[1720]),0},
{"id-smime-alg-ESDH","id-smime-alg-ESDH",NID_id_smime_alg_ESDH,11,
	&(lvalues[1731]),0},
{"id-smime-alg-CMS3DESwrap","id-smime-alg-CMS3DESwrap",
	NID_id_smime_alg_CMS3DESwrap,11,&(lvalues[1742]),0},
{"id-smime-alg-CMSRC2wrap","id-smime-alg-CMSRC2wrap",
	NID_id_smime_alg_CMSRC2wrap,11,&(lvalues[1753]),0},
{"id-smime-cd-ldap","id-smime-cd-ldap",NID_id_smime_cd_ldap,11,
	&(lvalues[1764]),0},
{"id-smime-spq-ets-sqt-uri","id-smime-spq-ets-sqt-uri",
	NID_id_smime_spq_ets_sqt_uri,11,&(lvalues[1775]),0},
{"id-smime-spq-ets-sqt-unotice","id-smime-spq-ets-sqt-unotice",
	NID_id_smime_spq_ets_sqt_unotice,11,&(lvalues[1786]),0},
{"id-smime-cti-ets-proofOfOrigin","id-smime-cti-ets-proofOfOrigin",
	NID_id_smime_cti_ets_proofOfOrigin,11,&(lvalues[1797]),0},
{"id-smime-cti-ets-proofOfReceipt","id-smime-cti-ets-proofOfReceipt",
	NID_id_smime_cti_ets_proofOfReceipt,11,&(lvalues[1808]),0},
{"id-smime-cti-ets-proofOfDelivery",
	"id-smime-cti-ets-proofOfDelivery",
	NID_id_smime_cti_ets_proofOfDelivery,11,&(lvalues[1819]),0},
{"id-smime-cti-ets-proofOfSender","id-smime-cti-ets-proofOfSender",
	NID_id_smime_cti_ets_proofOfSender,11,&(lvalues[1830]),0},
{"id-smime-cti-ets-proofOfApproval",
	"id-smime-cti-ets-proofOfApproval",
	NID_id_smime_cti_ets_proofOfApproval,11,&(lvalues[1841]),0},
{"id-smime-cti-ets-proofOfCreation",
	"id-smime-cti-ets-proofOfCreation",
	NID_id_smime_cti_ets_proofOfCreation,11,&(lvalues[1852]),0},
{"MD4","md4",NID_md4,8,&(lvalues[1863]),0},
{"id-pkix-mod","id-pkix-mod",NID_id_pkix_mod,7,&(lvalues[1871]),0},
{"id-qt","id-qt",NID_id_qt,7,&(lvalues[1878]),0},
{"id-it","id-it",NID_id_it,7,&(lvalues[1885]),0},
{"id-pkip","id-pkip",NID_id_pkip,7,&(lvalues[1892]),0},
{"id-alg","id-alg",NID_id_alg,7,&(lvalues[1899]),0},
{"id-cmc","id-cmc",NID_id_cmc,7,&(lvalues[1906]),0},
{"id-on","id-on",NID_id_on,7,&(lvalues[1913]),0},
{"id-pda","id-pda",NID_id_pda,7,&(lvalues[1920]),0},
{"id-aca","id-aca",NID_id_aca,7,&(lvalues[1927]),0},
{"id-qcs","id-qcs",NID_id_qcs,7,&(lvalues[1934]),0},
{"id-cct","id-cct",NID_id_cct,7,&(lvalues[1941]),0},
{"id-pkix1-explicit-88","id-pkix1-explicit-88",
	NID_id_pkix1_explicit_88,8,&(lvalues[1948]),0},
{"id-pkix1-implicit-88","id-pkix1-implicit-88",
	NID_id_pkix1_implicit_88,8,&(lvalues[1956]),0},
{"id-pkix1-explicit-93","id-pkix1-explicit-93",
	NID_id_pkix1_explicit_93,8,&(lvalues[1964]),0},
{"id-pkix1-implicit-93","id-pkix1-implicit-93",
	NID_id_pkix1_implicit_93,8,&(lvalues[1972]),0},
{"id-mod-crmf","id-mod-crmf",NID_id_mod_crmf,8,&(lvalues[1980]),0},
{"id-mod-cmc","id-mod-cmc",NID_id_mod_cmc,8,&(lvalues[1988]),0},
{"id-mod-kea-profile-88","id-mod-kea-profile-88",
	NID_id_mod_kea_profile_88,8,&(lvalues[1996]),0},
{"id-mod-kea-profile-93","id-mod-kea-profile-93",
	NID_id_mod_kea_profile_93,8,&(lvalues[2004]),0},
{"id-mod-cmp","id-mod-cmp",NID_id_mod_cmp,8,&(lvalues[2012]),0},
{"id-mod-qualified-cert-88","id-mod-qualified-cert-88",
	NID_id_mod_qualified_cert_88,8,&(lvalues[2020]),0},
{"id-mod-qualified-cert-93","id-mod-qualified-cert-93",
	NID_id_mod_qualified_cert_93,8,&(lvalues[2028]),0},
{"id-mod-attribute-cert","id-mod-attribute-cert",
	NID_id_mod_attribute_cert,8,&(lvalues[2036]),0},
{"id-mod-timestamp-protocol","id-mod-timestamp-protocol",
	NID_id_mod_timestamp_protocol,8,&(lvalues[2044]),0},
{"id-mod-ocsp","id-mod-ocsp",NID_id_mod_ocsp,8,&(lvalues[2052]),0},
{"id-mod-dvcs","id-mod-dvcs",NID_id_mod_dvcs,8,&(lvalues[2060]),0},
{"id-mod-cmp2000","id-mod-cmp2000",NID_id_mod_cmp2000,8,
	&(lvalues[2068]),0},
{"biometricInfo","Biometric Info",NID_biometricInfo,8,&(lvalues[2076]),0},
{"qcStatements","qcStatements",NID_qcStatements,8,&(lvalues[2084]),0},
{"ac-auditEntity","ac-auditEntity",NID_ac_auditEntity,8,
	&(lvalues[2092]),0},
{"ac-targeting","ac-targeting",NID_ac_targeting,8,&(lvalues[2100]),0},
{"aaControls","aaControls",NID_aaControls,8,&(lvalues[2108]),0},
{"sbqp-ipAddrBlock","sbqp-ipAddrBlock",NID_sbqp_ipAddrBlock,8,
	&(lvalues[2116]),0},
{"sbqp-autonomousSysNum","sbqp-autonomousSysNum",
	NID_sbqp_autonomousSysNum,8,&(lvalues[2124]),0},
{"sbqp-routerIdentifier","sbqp-routerIdentifier",
	NID_sbqp_routerIdentifier,8,&(lvalues[2132]),0},
{"textNotice","textNotice",NID_textNotice,8,&(lvalues[2140]),0},
{"ipsecEndSystem","IPSec End System",NID_ipsecEndSystem,8,
	&(lvalues[2148]),0},
{"ipsecTunnel","IPSec Tunnel",NID_ipsecTunnel,8,&(lvalues[2156]),0},
{"ipsecUser","IPSec User",NID_ipsecUser,8,&(lvalues[2164]),0},
{"DVCS","dvcs",NID_dvcs,8,&(lvalues[2172]),0},
{"id-it-caProtEncCert","id-it-caProtEncCert",NID_id_it_caProtEncCert,
	8,&(lvalues[2180]),0},
{"id-it-signKeyPairTypes","id-it-signKeyPairTypes",
	NID_id_it_signKeyPairTypes,8,&(lvalues[2188]),0},
{"id-it-encKeyPairTypes","id-it-encKeyPairTypes",
	NID_id_it_encKeyPairTypes,8,&(lvalues[2196]),0},
{"id-it-preferredSymmAlg","id-it-preferredSymmAlg",
	NID_id_it_preferredSymmAlg,8,&(lvalues[2204]),0},
{"id-it-caKeyUpdateInfo","id-it-caKeyUpdateInfo",
	NID_id_it_caKeyUpdateInfo,8,&(lvalues[2212]),0},
{"id-it-currentCRL","id-it-currentCRL",NID_id_it_currentCRL,8,
	&(lvalues[2220]),0},
{"id-it-unsupportedOIDs","id-it-unsupportedOIDs",
	NID_id_it_unsupportedOIDs,8,&(lvalues[2228]),0},
{"id-it-subscriptionRequest","id-it-subscriptionRequest",
	NID_id_it_subscriptionRequest,8,&(lvalues[2236]),0},
{"id-it-subscriptionResponse","id-it-subscriptionResponse",
	NID_id_it_subscriptionResponse,8,&(lvalues[2244]),0},
{"id-it-keyPairParamReq","id-it-keyPairParamReq",
	NID_id_it_keyPairParamReq,8,&(lvalues[2252]),0},
{"id-it-keyPairParamRep","id-it-keyPairParamRep",
	NID_id_it_keyPairParamRep,8,&(lvalues[2260]),0},
{"id-it-revPassphrase","id-it-revPassphrase",NID_id_it_revPassphrase,
	8,&(lvalues[2268]),0},
{"id-it-implicitConfirm","id-it-implicitConfirm",
	NID_id_it_implicitConfirm,8,&(lvalues[2276]),0},
{"id-it-confirmWaitTime","id-it-confirmWaitTime",
	NID_id_it_confirmWaitTime,8,&(lvalues[2284]),0},
{"id-it-origPKIMessage","id-it-origPKIMessage",
	NID_id_it_origPKIMessage,8,&(lvalues[2292]),0},
{"id-regCtrl","id-regCtrl",NID_id_regCtrl,8,&(lvalues[2300]),0},
{"id-regInfo","id-regInfo",NID_id_regInfo,8,&(lvalues[2308]),0},
{"id-regCtrl-regToken","id-regCtrl-regToken",NID_id_regCtrl_regToken,
	9,&(lvalues[2316]),0},
{"id-regCtrl-authenticator","id-regCtrl-authenticator",
	NID_id_regCtrl_authenticator,9,&(lvalues[2325]),0},
{"id-regCtrl-pkiPublicationInfo","id-regCtrl-pkiPublicationInfo",
	NID_id_regCtrl_pkiPublicationInfo,9,&(lvalues[2334]),0},
{"id-regCtrl-pkiArchiveOptions","id-regCtrl-pkiArchiveOptions",
	NID_id_regCtrl_pkiArchiveOptions,9,&(lvalues[2343]),0},
{"id-regCtrl-oldCertID","id-regCtrl-oldCertID",
	NID_id_regCtrl_oldCertID,9,&(lvalues[2352]),0},
{"id-regCtrl-protocolEncrKey","id-regCtrl-protocolEncrKey",
	NID_id_regCtrl_protocolEncrKey,9,&(lvalues[2361]),0},
{"id-regInfo-utf8Pairs","id-regInfo-utf8Pairs",
	NID_id_regInfo_utf8Pairs,9,&(lvalues[2370]),0},
{"id-regInfo-certReq","id-regInfo-certReq",NID_id_regInfo_certReq,9,
	&(lvalues[2379]),0},
{"id-alg-des40","id-alg-des40",NID_id_alg_des40,8,&(lvalues[2388]),0},
{"id-alg-noSignature","id-alg-noSignature",NID_id_alg_noSignature,8,
	&(lvalues[2396]),0},
{"id-alg-dh-sig-hmac-sha1","id-alg-dh-sig-hmac-sha1",
	NID_id_alg_dh_sig_hmac_sha1,8,&(lvalues[2404]),0},
{"id-alg-dh-pop","id-alg-dh-pop",NID_id_alg_dh_pop,8,&(lvalues[2412]),0},
{"id-cmc-statusInfo","id-cmc-statusInfo",NID_id_cmc_statusInfo,8,
	&(lvalues[2420]),0},
{"id-cmc-identification","id-cmc-identification",
	NID_id_cmc_identification,8,&(lvalues[2428]),0},
{"id-cmc-identityProof","id-cmc-identityProof",
	NID_id_cmc_identityProof,8,&(lvalues[2436]),0},
{"id-cmc-dataReturn","id-cmc-dataReturn",NID_id_cmc_dataReturn,8,
	&(lvalues[2444]),0},
{"id-cmc-transactionId","id-cmc-transactionId",
	NID_id_cmc_transactionId,8,&(lvalues[2452]),0},
{"id-cmc-senderNonce","id-cmc-senderNonce",NID_id_cmc_senderNonce,8,
	&(lvalues[2460]),0},
{"id-cmc-recipientNonce","id-cmc-recipientNonce",
	NID_id_cmc_recipientNonce,8,&(lvalues[2468]),0},
{"id-cmc-addExtensions","id-cmc-addExtensions",
	NID_id_cmc_addExtensions,8,&(lvalues[2476]),0},
{"id-cmc-encryptedPOP","id-cmc-encryptedPOP",NID_id_cmc_encryptedPOP,
	8,&(lvalues[2484]),0},
{"id-cmc-decryptedPOP","id-cmc-decryptedPOP",NID_id_cmc_decryptedPOP,
	8,&(lvalues[2492]),0},
{"id-cmc-lraPOPWitness","id-cmc-lraPOPWitness",
	NID_id_cmc_lraPOPWitness,8,&(lvalues[2500]),0},
{"id-cmc-getCert","id-cmc-getCert",NID_id_cmc_getCert,8,
	&(lvalues[2508]),0},
{"id-cmc-getCRL","id-cmc-getCRL",NID_id_cmc_getCRL,8,&(lvalues[2516]),0},
{"id-cmc-revokeRequest","id-cmc-revokeRequest",
	NID_id_cmc_revokeRequest,8,&(lvalues[2524]),0},
{"id-cmc-regInfo","id-cmc-regInfo",NID_id_cmc_regInfo,8,
	&(lvalues[2532]),0},
{"id-cmc-responseInfo","id-cmc-responseInfo",NID_id_cmc_responseInfo,
	8,&(lvalues[2540]),0},
{"id-cmc-queryPending","id-cmc-queryPending",NID_id_cmc_queryPending,
	8,&(lvalues[2548]),0},
{"id-cmc-popLinkRandom","id-cmc-popLinkRandom",
	NID_id_cmc_popLinkRandom,8,&(lvalues[2556]),0},
{"id-cmc-popLinkWitness","id-cmc-popLinkWitness",
	NID_id_cmc_popLinkWitness,8,&(lvalues[2564]),0},
{"id-cmc-confirmCertAcceptance","id-cmc-confirmCertAcceptance",
	NID_id_cmc_confirmCertAcceptance,8,&(lvalues[2572]),0},
{"id-on-personalData","id-on-personalData",NID_id_on_personalData,8,
	&(lvalues[2580]),0},
{"id-pda-dateOfBirth","id-pda-dateOfBirth",NID_id_pda_dateOfBirth,8,
	&(lvalues[2588]),0},
{"id-pda-placeOfBirth","id-pda-placeOfBirth",NID_id_pda_placeOfBirth,
	8,&(lvalues[2596]),0},
{NULL,NULL,NID_undef,0,NULL},
{"id-pda-gender","id-pda-gender",NID_id_pda_gender,8,&(lvalues[2604]),0},
{"id-pda-countryOfCitizenship","id-pda-countryOfCitizenship",
	NID_id_pda_countryOfCitizenship,8,&(lvalues[2612]),0},
{"id-pda-countryOfResidence","id-pda-countryOfResidence",
	NID_id_pda_countryOfResidence,8,&(lvalues[2620]),0},
{"id-aca-authenticationInfo","id-aca-authenticationInfo",
	NID_id_aca_authenticationInfo,8,&(lvalues[2628]),0},
{"id-aca-accessIdentity","id-aca-accessIdentity",
	NID_id_aca_accessIdentity,8,&(lvalues[2636]),0},
{"id-aca-chargingIdentity","id-aca-chargingIdentity",
	NID_id_aca_chargingIdentity,8,&(lvalues[2644]),0},
{"id-aca-group","id-aca-group",NID_id_aca_group,8,&(lvalues[2652]),0},
{"id-aca-role","id-aca-role",NID_id_aca_role,8,&(lvalues[2660]),0},
{"id-qcs-pkixQCSyntax-v1","id-qcs-pkixQCSyntax-v1",
	NID_id_qcs_pkixQCSyntax_v1,8,&(lvalues[2668]),0},
{"id-cct-crs","id-cct-crs",NID_id_cct_crs,8,&(lvalues[2676]),0},
{"id-cct-PKIData","id-cct-PKIData",NID_id_cct_PKIData,8,
	&(lvalues[2684]),0},
{"id-cct-PKIResponse","id-cct-PKIResponse",NID_id_cct_PKIResponse,8,
	&(lvalues[2692]),0},
{"ad_timestamping","AD Time Stamping",NID_ad_timeStamping,8,
	&(lvalues[2700]),0},
{"AD_DVCS","ad dvcs",NID_ad_dvcs,8,&(lvalues[2708]),0},
{"basicOCSPResponse","Basic OCSP Response",NID_id_pkix_OCSP_basic,9,
	&(lvalues[2716]),0},
{"Nonce","OCSP Nonce",NID_id_pkix_OCSP_Nonce,9,&(lvalues[2725]),0},
{"CrlID","OCSP CRL ID",NID_id_pkix_OCSP_CrlID,9,&(lvalues[2734]),0},
{"acceptableResponses","Acceptable OCSP Responses",
	NID_id_pkix_OCSP_acceptableResponses,9,&(lvalues[2743]),0},
{"noCheck","OCSP No Check",NID_id_pkix_OCSP_noCheck,9,&(lvalues[2752]),0},
{"archiveCutoff","OCSP Archive Cutoff",NID_id_pkix_OCSP_archiveCutoff,
	9,&(lvalues[2761]),0},
{"serviceLocator","OCSP Service Locator",
	NID_id_pkix_OCSP_serviceLocator,9,&(lvalues[2770]),0},
{"extendedStatus","Extended OCSP Status",
	NID_id_pkix_OCSP_extendedStatus,9,&(lvalues[2779]),0},
{"valid","valid",NID_id_pkix_OCSP_valid,9,&(lvalues[2788]),0},
{"path","path",NID_id_pkix_OCSP_path,9,&(lvalues[2797]),0},
{"trustRoot","Trust Root",NID_id_pkix_OCSP_trustRoot,9,
	&(lvalues[2806]),0},
{"algorithm","algorithm",NID_algorithm,4,&(lvalues[2815]),0},
{"rsaSignature","rsaSignature",NID_rsaSignature,5,&(lvalues[2819]),0},
{"X500algorithms","directory services - algorithms",
	NID_X500algorithms,2,&(lvalues[2824]),0},
{"ORG","org",NID_org,1,&(lvalues[2826]),0},
{"DOD","dod",NID_dod,2,&(lvalues[2827]),0},
{"IANA","iana",NID_iana,3,&(lvalues[2829]),0},
{"directory","Directory",NID_Directory,4,&(lvalues[2832]),0},
{"mgmt","Management",NID_Management,4,&(lvalues[2836]),0},
{"experimental","Experimental",NID_Experimental,4,&(lvalues[2840]),0},
{"private","Private",NID_Private,4,&(lvalues[2844]),0},
{"security","Security",NID_Security,4,&(lvalues[2848]),0},
{"snmpv2","SNMPv2",NID_SNMPv2,4,&(lvalues[2852]),0},
{"Mail","Mail",NID_Mail,4,&(lvalues[2856]),0},
{"enterprises","Enterprises",NID_Enterprises,5,&(lvalues[2860]),0},
{"dcobject","dcObject",NID_dcObject,9,&(lvalues[2865]),0},
{"DC","domainComponent",NID_domainComponent,10,&(lvalues[2874]),0},
{"domain","Domain",NID_Domain,10,&(lvalues[2884]),0},
{"JOINT-ISO-CCITT","joint-iso-ccitt",NID_joint_iso_ccitt,1,
	&(lvalues[2894]),0},
{"selected-attribute-types","Selected Attribute Types",
	NID_selected_attribute_types,3,&(lvalues[2895]),0},
{"clearance","clearance",NID_clearance,4,&(lvalues[2898]),0},
{"RSA-MD4","md4WithRSAEncryption",NID_md4WithRSAEncryption,9,
	&(lvalues[2902]),0},
{"ac-proxying","ac-proxying",NID_ac_proxying,8,&(lvalues[2911]),0},
{"subjectInfoAccess","Subject Information Access",NID_sinfo_access,8,
	&(lvalues[2919]),0},
{"id-aca-encAttrs","id-aca-encAttrs",NID_id_aca_encAttrs,8,
	&(lvalues[2927]),0},
{"role","role",NID_role,3,&(lvalues[2935]),0},
{"policyConstraints","X509v3 Policy Constraints",
	NID_policy_constraints,3,&(lvalues[2938]),0},
{"targetInformation","X509v3 AC Targeting",NID_target_information,3,
	&(lvalues[2941]),0},
{"noRevAvail","X509v3 No Revocation Available",NID_no_rev_avail,3,
	&(lvalues[2944]),0},
{"CCITT","ccitt",NID_ccitt,1,&(lvalues[2947]),0},
{"ansi-X9-62","ANSI X9.62",NID_ansi_X9_62,5,&(lvalues[2948]),0},
{"prime-field","prime-field",NID_X9_62_prime_field,7,&(lvalues[2953]),0},
{"characteristic-two-field","characteristic-two-field",
	NID_X9_62_characteristic_two_field,7,&(lvalues[2960]),0},
{"id-ecPublicKey","id-ecPublicKey",NID_X9_62_id_ecPublicKey,7,
	&(lvalues[2967]),0},
{"prime192v1","prime192v1",NID_X9_62_prime192v1,8,&(lvalues[2974]),0},
{"prime192v2","prime192v2",NID_X9_62_prime192v2,8,&(lvalues[2982]),0},
{"prime192v3","prime192v3",NID_X9_62_prime192v3,8,&(lvalues[2990]),0},
{"prime239v1","prime239v1",NID_X9_62_prime239v1,8,&(lvalues[2998]),0},
{"prime239v2","prime239v2",NID_X9_62_prime239v2,8,&(lvalues[3006]),0},
{"prime239v3","prime239v3",NID_X9_62_prime239v3,8,&(lvalues[3014]),0},
{"prime256v1","prime256v1",NID_X9_62_prime256v1,8,&(lvalues[3022]),0},
{"ecdsa-with-SHA1","ecdsa-with-SHA1",NID_ecdsa_with_SHA1,7,
	&(lvalues[3030]),0},
{"CSPName","Microsoft CSP Name",NID_ms_csp_name,9,&(lvalues[3037]),0},
{"AES-128-ECB","aes-128-ecb",NID_aes_128_ecb,9,&(lvalues[3046]),0},
{"AES-128-CBC","aes-128-cbc",NID_aes_128_cbc,9,&(lvalues[3055]),0},
{"AES-128-OFB","aes-128-ofb",NID_aes_128_ofb128,9,&(lvalues[3064]),0},
{"AES-128-CFB","aes-128-cfb",NID_aes_128_cfb128,9,&(lvalues[3073]),0},
{"AES-192-ECB","aes-192-ecb",NID_aes_192_ecb,9,&(lvalues[3082]),0},
{"AES-192-CBC","aes-192-cbc",NID_aes_192_cbc,9,&(lvalues[3091]),0},
{"AES-192-OFB","aes-192-ofb",NID_aes_192_ofb128,9,&(lvalues[3100]),0},
{"AES-192-CFB","aes-192-cfb",NID_aes_192_cfb128,9,&(lvalues[3109]),0},
{"AES-256-ECB","aes-256-ecb",NID_aes_256_ecb,9,&(lvalues[3118]),0},
{"AES-256-CBC","aes-256-cbc",NID_aes_256_cbc,9,&(lvalues[3127]),0},
{"AES-256-OFB","aes-256-ofb",NID_aes_256_ofb128,9,&(lvalues[3136]),0},
{"AES-256-CFB","aes-256-cfb",NID_aes_256_cfb128,9,&(lvalues[3145]),0},
{"holdInstructionCode","Hold Instruction Code",
	NID_hold_instruction_code,3,&(lvalues[3154]),0},
{"holdInstructionNone","Hold Instruction None",
	NID_hold_instruction_none,7,&(lvalues[3157]),0},
{"holdInstructionCallIssuer","Hold Instruction Call Issuer",
	NID_hold_instruction_call_issuer,7,&(lvalues[3164]),0},
{"holdInstructionReject","Hold Instruction Reject",
	NID_hold_instruction_reject,7,&(lvalues[3171]),0},
{"data","data",NID_data,1,&(lvalues[3178]),0},
{"pss","pss",NID_pss,3,&(lvalues[3179]),0},
{"ucl","ucl",NID_ucl,7,&(lvalues[3182]),0},
{"pilot","pilot",NID_pilot,8,&(lvalues[3189]),0},
{"pilotAttributeType","pilotAttributeType",NID_pilotAttributeType,9,
	&(lvalues[3197]),0},
{"pilotAttributeSyntax","pilotAttributeSyntax",
	NID_pilotAttributeSyntax,9,&(lvalues[3206]),0},
{"pilotObjectClass","pilotObjectClass",NID_pilotObjectClass,9,
	&(lvalues[3215]),0},
{"pilotGroups","pilotGroups",NID_pilotGroups,9,&(lvalues[3224]),0},
{"iA5StringSyntax","iA5StringSyntax",NID_iA5StringSyntax,10,
	&(lvalues[3233]),0},
{"caseIgnoreIA5StringSyntax","caseIgnoreIA5StringSyntax",
	NID_caseIgnoreIA5StringSyntax,10,&(lvalues[3243]),0},
{"pilotObject","pilotObject",NID_pilotObject,10,&(lvalues[3253]),0},
{"pilotPerson","pilotPerson",NID_pilotPerson,10,&(lvalues[3263]),0},
{"account","account",NID_account,10,&(lvalues[3273]),0},
{"document","document",NID_document,10,&(lvalues[3283]),0},
{"room","room",NID_room,10,&(lvalues[3293]),0},
{"documentSeries","documentSeries",NID_documentSeries,10,
	&(lvalues[3303]),0},
{"rFC822localPart","rFC822localPart",NID_rFC822localPart,10,
	&(lvalues[3313]),0},
{"dNSDomain","dNSDomain",NID_dNSDomain,10,&(lvalues[3323]),0},
{"domainRelatedObject","domainRelatedObject",NID_domainRelatedObject,
	10,&(lvalues[3333]),0},
{"friendlyCountry","friendlyCountry",NID_friendlyCountry,10,
	&(lvalues[3343]),0},
{"simpleSecurityObject","simpleSecurityObject",
	NID_simpleSecurityObject,10,&(lvalues[3353]),0},
{"pilotOrganization","pilotOrganization",NID_pilotOrganization,10,
	&(lvalues[3363]),0},
{"pilotDSA","pilotDSA",NID_pilotDSA,10,&(lvalues[3373]),0},
{"qualityLabelledData","qualityLabelledData",NID_qualityLabelledData,
	10,&(lvalues[3383]),0},
{"UID","userId",NID_userId,10,&(lvalues[3393]),0},
{"textEncodedORAddress","textEncodedORAddress",
	NID_textEncodedORAddress,10,&(lvalues[3403]),0},
{"mail","rfc822Mailbox",NID_rfc822Mailbox,10,&(lvalues[3413]),0},
{"info","info",NID_info,10,&(lvalues[3423]),0},
{"favouriteDrink","favouriteDrink",NID_favouriteDrink,10,
	&(lvalues[3433]),0},
{"roomNumber","roomNumber",NID_roomNumber,10,&(lvalues[3443]),0},
{"photo","photo",NID_photo,10,&(lvalues[3453]),0},
{"userClass","userClass",NID_userClass,10,&(lvalues[3463]),0},
{"host","host",NID_host,10,&(lvalues[3473]),0},
{"manager","manager",NID_manager,10,&(lvalues[3483]),0},
{"documentIdentifier","documentIdentifier",NID_documentIdentifier,10,
	&(lvalues[3493]),0},
{"documentTitle","documentTitle",NID_documentTitle,10,&(lvalues[3503]),0},
{"documentVersion","documentVersion",NID_documentVersion,10,
	&(lvalues[3513]),0},
{"documentAuthor","documentAuthor",NID_documentAuthor,10,
	&(lvalues[3523]),0},
{"documentLocation","documentLocation",NID_documentLocation,10,
	&(lvalues[3533]),0},
{"homeTelephoneNumber","homeTelephoneNumber",NID_homeTelephoneNumber,
	10,&(lvalues[3543]),0},
{"secretary","secretary",NID_secretary,10,&(lvalues[3553]),0},
{"otherMailbox","otherMailbox",NID_otherMailbox,10,&(lvalues[3563]),0},
{"lastModifiedTime","lastModifiedTime",NID_lastModifiedTime,10,
	&(lvalues[3573]),0},
{"lastModifiedBy","lastModifiedBy",NID_lastModifiedBy,10,
	&(lvalues[3583]),0},
{"aRecord","aRecord",NID_aRecord,10,&(lvalues[3593]),0},
{"pilotAttributeType27","pilotAttributeType27",
	NID_pilotAttributeType27,10,&(lvalues[3603]),0},
{"mXRecord","mXRecord",NID_mXRecord,10,&(lvalues[3613]),0},
{"nSRecord","nSRecord",NID_nSRecord,10,&(lvalues[3623]),0},
{"sOARecord","sOARecord",NID_sOARecord,10,&(lvalues[3633]),0},
{"cNAMERecord","cNAMERecord",NID_cNAMERecord,10,&(lvalues[3643]),0},
{"associatedDomain","associatedDomain",NID_associatedDomain,10,
	&(lvalues[3653]),0},
{"associatedName","associatedName",NID_associatedName,10,
	&(lvalues[3663]),0},
{"homePostalAddress","homePostalAddress",NID_homePostalAddress,10,
	&(lvalues[3673]),0},
{"personalTitle","personalTitle",NID_personalTitle,10,&(lvalues[3683]),0},
{"mobileTelephoneNumber","mobileTelephoneNumber",
	NID_mobileTelephoneNumber,10,&(lvalues[3693]),0},
{"pagerTelephoneNumber","pagerTelephoneNumber",
	NID_pagerTelephoneNumber,10,&(lvalues[3703]),0},
{"friendlyCountryName","friendlyCountryName",NID_friendlyCountryName,
	10,&(lvalues[3713]),0},
{"organizationalStatus","organizationalStatus",
	NID_organizationalStatus,10,&(lvalues[3723]),0},
{"janetMailbox","janetMailbox",NID_janetMailbox,10,&(lvalues[3733]),0},
{"mailPreferenceOption","mailPreferenceOption",
	NID_mailPreferenceOption,10,&(lvalues[3743]),0},
{"buildingName","buildingName",NID_buildingName,10,&(lvalues[3753]),0},
{"dSAQuality","dSAQuality",NID_dSAQuality,10,&(lvalues[3763]),0},
{"singleLevelQuality","singleLevelQuality",NID_singleLevelQuality,10,
	&(lvalues[3773]),0},
{"subtreeMinimumQuality","subtreeMinimumQuality",
	NID_subtreeMinimumQuality,10,&(lvalues[3783]),0},
{"subtreeMaximumQuality","subtreeMaximumQuality",
	NID_subtreeMaximumQuality,10,&(lvalues[3793]),0},
{"personalSignature","personalSignature",NID_personalSignature,10,
	&(lvalues[3803]),0},
{"dITRedirect","dITRedirect",NID_dITRedirect,10,&(lvalues[3813]),0},
{"audio","audio",NID_audio,10,&(lvalues[3823]),0},
{"documentPublisher","documentPublisher",NID_documentPublisher,10,
	&(lvalues[3833]),0},
{"x500UniqueIdentifier","x500UniqueIdentifier",
	NID_x500UniqueIdentifier,3,&(lvalues[3843]),0},
{"mime-mhs","MIME MHS",NID_mime_mhs,5,&(lvalues[3846]),0},
{"mime-mhs-headings","mime-mhs-headings",NID_mime_mhs_headings,6,
	&(lvalues[3851]),0},
{"mime-mhs-bodies","mime-mhs-bodies",NID_mime_mhs_bodies,6,
	&(lvalues[3857]),0},
{"id-hex-partial-message","id-hex-partial-message",
	NID_id_hex_partial_message,7,&(lvalues[3863]),0},
{"id-hex-multipart-message","id-hex-multipart-message",
	NID_id_hex_multipart_message,7,&(lvalues[3870]),0},
{"generationQualifier","generationQualifier",NID_generationQualifier,
	3,&(lvalues[3877]),0},
{"pseudonym","pseudonym",NID_pseudonym,3,&(lvalues[3880]),0},
{NULL,NULL,NID_undef,0,NULL},
{"id-set","Secure Electronic Transactions",NID_id_set,2,
	&(lvalues[3883]),0},
{"set-ctype","content types",NID_set_ctype,3,&(lvalues[3885]),0},
{"set-msgExt","message extensions",NID_set_msgExt,3,&(lvalues[3888]),0},
{"set-attr","set-attr",NID_set_attr,3,&(lvalues[3891]),0},
{"set-policy","set-policy",NID_set_policy,3,&(lvalues[3894]),0},
{"set-certExt","certificate extensions",NID_set_certExt,3,
	&(lvalues[3897]),0},
{"set-brand","set-brand",NID_set_brand,3,&(lvalues[3900]),0},
{"setct-PANData","setct-PANData",NID_setct_PANData,4,&(lvalues[3903]),0},
{"setct-PANToken","setct-PANToken",NID_setct_PANToken,4,
	&(lvalues[3907]),0},
{"setct-PANOnly","setct-PANOnly",NID_setct_PANOnly,4,&(lvalues[3911]),0},
{"setct-OIData","setct-OIData",NID_setct_OIData,4,&(lvalues[3915]),0},
{"setct-PI","setct-PI",NID_setct_PI,4,&(lvalues[3919]),0},
{"setct-PIData","setct-PIData",NID_setct_PIData,4,&(lvalues[3923]),0},
{"setct-PIDataUnsigned","setct-PIDataUnsigned",
	NID_setct_PIDataUnsigned,4,&(lvalues[3927]),0},
{"setct-HODInput","setct-HODInput",NID_setct_HODInput,4,
	&(lvalues[3931]),0},
{"setct-AuthResBaggage","setct-AuthResBaggage",
	NID_setct_AuthResBaggage,4,&(lvalues[3935]),0},
{"setct-AuthRevReqBaggage","setct-AuthRevReqBaggage",
	NID_setct_AuthRevReqBaggage,4,&(lvalues[3939]),0},
{"setct-AuthRevResBaggage","setct-AuthRevResBaggage",
	NID_setct_AuthRevResBaggage,4,&(lvalues[3943]),0},
{"setct-CapTokenSeq","setct-CapTokenSeq",NID_setct_CapTokenSeq,4,
	&(lvalues[3947]),0},
{"setct-PInitResData","setct-PInitResData",NID_setct_PInitResData,4,
	&(lvalues[3951]),0},
{"setct-PI-TBS","setct-PI-TBS",NID_setct_PI_TBS,4,&(lvalues[3955]),0},
{"setct-PResData","setct-PResData",NID_setct_PResData,4,
	&(lvalues[3959]),0},
{"setct-AuthReqTBS","setct-AuthReqTBS",NID_setct_AuthReqTBS,4,
	&(lvalues[3963]),0},
{"setct-AuthResTBS","setct-AuthResTBS",NID_setct_AuthResTBS,4,
	&(lvalues[3967]),0},
{"setct-AuthResTBSX","setct-AuthResTBSX",NID_setct_AuthResTBSX,4,
	&(lvalues[3971]),0},
{"setct-AuthTokenTBS","setct-AuthTokenTBS",NID_setct_AuthTokenTBS,4,
	&(lvalues[3975]),0},
{"setct-CapTokenData","setct-CapTokenData",NID_setct_CapTokenData,4,
	&(lvalues[3979]),0},
{"setct-CapTokenTBS","setct-CapTokenTBS",NID_setct_CapTokenTBS,4,
	&(lvalues[3983]),0},
{"setct-AcqCardCodeMsg","setct-AcqCardCodeMsg",
	NID_setct_AcqCardCodeMsg,4,&(lvalues[3987]),0},
{"setct-AuthRevReqTBS","setct-AuthRevReqTBS",NID_setct_AuthRevReqTBS,
	4,&(lvalues[3991]),0},
{"setct-AuthRevResData","setct-AuthRevResData",
	NID_setct_AuthRevResData,4,&(lvalues[3995]),0},
{"setct-AuthRevResTBS","setct-AuthRevResTBS",NID_setct_AuthRevResTBS,
	4,&(lvalues[3999]),0},
{"setct-CapReqTBS","setct-CapReqTBS",NID_setct_CapReqTBS,4,
	&(lvalues[4003]),0},
{"setct-CapReqTBSX","setct-CapReqTBSX",NID_setct_CapReqTBSX,4,
	&(lvalues[4007]),0},
{"setct-CapResData","setct-CapResData",NID_setct_CapResData,4,
	&(lvalues[4011]),0},
{"setct-CapRevReqTBS","setct-CapRevReqTBS",NID_setct_CapRevReqTBS,4,
	&(lvalues[4015]),0},
{"setct-CapRevReqTBSX","setct-CapRevReqTBSX",NID_setct_CapRevReqTBSX,
	4,&(lvalues[4019]),0},
{"setct-CapRevResData","setct-CapRevResData",NID_setct_CapRevResData,
	4,&(lvalues[4023]),0},
{"setct-CredReqTBS","setct-CredReqTBS",NID_setct_CredReqTBS,4,
	&(lvalues[4027]),0},
{"setct-CredReqTBSX","setct-CredReqTBSX",NID_setct_CredReqTBSX,4,
	&(lvalues[4031]),0},
{"setct-CredResData","setct-CredResData",NID_setct_CredResData,4,
	&(lvalues[4035]),0},
{"setct-CredRevReqTBS","setct-CredRevReqTBS",NID_setct_CredRevReqTBS,
	4,&(lvalues[4039]),0},
{"setct-CredRevReqTBSX","setct-CredRevReqTBSX",
	NID_setct_CredRevReqTBSX,4,&(lvalues[4043]),0},
{"setct-CredRevResData","setct-CredRevResData",
	NID_setct_CredRevResData,4,&(lvalues[4047]),0},
{"setct-PCertReqData","setct-PCertReqData",NID_setct_PCertReqData,4,
	&(lvalues[4051]),0},
{"setct-PCertResTBS","setct-PCertResTBS",NID_setct_PCertResTBS,4,
	&(lvalues[4055]),0},
{"setct-BatchAdminReqData","setct-BatchAdminReqData",
	NID_setct_BatchAdminReqData,4,&(lvalues[4059]),0},
{"setct-BatchAdminResData","setct-BatchAdminResData",
	NID_setct_BatchAdminResData,4,&(lvalues[4063]),0},
{"setct-CardCInitResTBS","setct-CardCInitResTBS",
	NID_setct_CardCInitResTBS,4,&(lvalues[4067]),0},
{"setct-MeAqCInitResTBS","setct-MeAqCInitResTBS",
	NID_setct_MeAqCInitResTBS,4,&(lvalues[4071]),0},
{"setct-RegFormResTBS","setct-RegFormResTBS",NID_setct_RegFormResTBS,
	4,&(lvalues[4075]),0},
{"setct-CertReqData","setct-CertReqData",NID_setct_CertReqData,4,
	&(lvalues[4079]),0},
{"setct-CertReqTBS","setct-CertReqTBS",NID_setct_CertReqTBS,4,
	&(lvalues[4083]),0},
{"setct-CertResData","setct-CertResData",NID_setct_CertResData,4,
	&(lvalues[4087]),0},
{"setct-CertInqReqTBS","setct-CertInqReqTBS",NID_setct_CertInqReqTBS,
	4,&(lvalues[4091]),0},
{"setct-ErrorTBS","setct-ErrorTBS",NID_setct_ErrorTBS,4,
	&(lvalues[4095]),0},
{"setct-PIDualSignedTBE","setct-PIDualSignedTBE",
	NID_setct_PIDualSignedTBE,4,&(lvalues[4099]),0},
{"setct-PIUnsignedTBE","setct-PIUnsignedTBE",NID_setct_PIUnsignedTBE,
	4,&(lvalues[4103]),0},
{"setct-AuthReqTBE","setct-AuthReqTBE",NID_setct_AuthReqTBE,4,
	&(lvalues[4107]),0},
{"setct-AuthResTBE","setct-AuthResTBE",NID_setct_AuthResTBE,4,
	&(lvalues[4111]),0},
{"setct-AuthResTBEX","setct-AuthResTBEX",NID_setct_AuthResTBEX,4,
	&(lvalues[4115]),0},
{"setct-AuthTokenTBE","setct-AuthTokenTBE",NID_setct_AuthTokenTBE,4,
	&(lvalues[4119]),0},
{"setct-CapTokenTBE","setct-CapTokenTBE",NID_setct_CapTokenTBE,4,
	&(lvalues[4123]),0},
{"setct-CapTokenTBEX","setct-CapTokenTBEX",NID_setct_CapTokenTBEX,4,
	&(lvalues[4127]),0},
{"setct-AcqCardCodeMsgTBE","setct-AcqCardCodeMsgTBE",
	NID_setct_AcqCardCodeMsgTBE,4,&(lvalues[4131]),0},
{"setct-AuthRevReqTBE","setct-AuthRevReqTBE",NID_setct_AuthRevReqTBE,
	4,&(lvalues[4135]),0},
{"setct-AuthRevResTBE","setct-AuthRevResTBE",NID_setct_AuthRevResTBE,
	4,&(lvalues[4139]),0},
{"setct-AuthRevResTBEB","setct-AuthRevResTBEB",
	NID_setct_AuthRevResTBEB,4,&(lvalues[4143]),0},
{"setct-CapReqTBE","setct-CapReqTBE",NID_setct_CapReqTBE,4,
	&(lvalues[4147]),0},
{"setct-CapReqTBEX","setct-CapReqTBEX",NID_setct_CapReqTBEX,4,
	&(lvalues[4151]),0},
{"setct-CapResTBE","setct-CapResTBE",NID_setct_CapResTBE,4,
	&(lvalues[4155]),0},
{"setct-CapRevReqTBE","setct-CapRevReqTBE",NID_setct_CapRevReqTBE,4,
	&(lvalues[4159]),0},
{"setct-CapRevReqTBEX","setct-CapRevReqTBEX",NID_setct_CapRevReqTBEX,
	4,&(lvalues[4163]),0},
{"setct-CapRevResTBE","setct-CapRevResTBE",NID_setct_CapRevResTBE,4,
	&(lvalues[4167]),0},
{"setct-CredReqTBE","setct-CredReqTBE",NID_setct_CredReqTBE,4,
	&(lvalues[4171]),0},
{"setct-CredReqTBEX","setct-CredReqTBEX",NID_setct_CredReqTBEX,4,
	&(lvalues[4175]),0},
{"setct-CredResTBE","setct-CredResTBE",NID_setct_CredResTBE,4,
	&(lvalues[4179]),0},
{"setct-CredRevReqTBE","setct-CredRevReqTBE",NID_setct_CredRevReqTBE,
	4,&(lvalues[4183]),0},
{"setct-CredRevReqTBEX","setct-CredRevReqTBEX",
	NID_setct_CredRevReqTBEX,4,&(lvalues[4187]),0},
{"setct-CredRevResTBE","setct-CredRevResTBE",NID_setct_CredRevResTBE,
	4,&(lvalues[4191]),0},
{"setct-BatchAdminReqTBE","setct-BatchAdminReqTBE",
	NID_setct_BatchAdminReqTBE,4,&(lvalues[4195]),0},
{"setct-BatchAdminResTBE","setct-BatchAdminResTBE",
	NID_setct_BatchAdminResTBE,4,&(lvalues[4199]),0},
{"setct-RegFormReqTBE","setct-RegFormReqTBE",NID_setct_RegFormReqTBE,
	4,&(lvalues[4203]),0},
{"setct-CertReqTBE","setct-CertReqTBE",NID_setct_CertReqTBE,4,
	&(lvalues[4207]),0},
{"setct-CertReqTBEX","setct-CertReqTBEX",NID_setct_CertReqTBEX,4,
	&(lvalues[4211]),0},
{"setct-CertResTBE","setct-CertResTBE",NID_setct_CertResTBE,4,
	&(lvalues[4215]),0},
{"setct-CRLNotificationTBS","setct-CRLNotificationTBS",
	NID_setct_CRLNotificationTBS,4,&(lvalues[4219]),0},
{"setct-CRLNotificationResTBS","setct-CRLNotificationResTBS",
	NID_setct_CRLNotificationResTBS,4,&(lvalues[4223]),0},
{"setct-BCIDistributionTBS","setct-BCIDistributionTBS",
	NID_setct_BCIDistributionTBS,4,&(lvalues[4227]),0},
{"setext-genCrypt","generic cryptogram",NID_setext_genCrypt,4,
	&(lvalues[4231]),0},
{"setext-miAuth","merchant initiated auth",NID_setext_miAuth,4,
	&(lvalues[4235]),0},
{"setext-pinSecure","setext-pinSecure",NID_setext_pinSecure,4,
	&(lvalues[4239]),0},
{"setext-pinAny","setext-pinAny",NID_setext_pinAny,4,&(lvalues[4243]),0},
{"setext-track2","setext-track2",NID_setext_track2,4,&(lvalues[4247]),0},
{"setext-cv","additional verification",NID_setext_cv,4,
	&(lvalues[4251]),0},
{"set-policy-root","set-policy-root",NID_set_policy_root,4,
	&(lvalues[4255]),0},
{"setCext-hashedRoot","setCext-hashedRoot",NID_setCext_hashedRoot,4,
	&(lvalues[4259]),0},
{"setCext-certType","setCext-certType",NID_setCext_certType,4,
	&(lvalues[4263]),0},
{"setCext-merchData","setCext-merchData",NID_setCext_merchData,4,
	&(lvalues[4267]),0},
{"setCext-cCertRequired","setCext-cCertRequired",
	NID_setCext_cCertRequired,4,&(lvalues[4271]),0},
{"setCext-tunneling","setCext-tunneling",NID_setCext_tunneling,4,
	&(lvalues[4275]),0},
{"setCext-setExt","setCext-setExt",NID_setCext_setExt,4,
	&(lvalues[4279]),0},
{"setCext-setQualf","setCext-setQualf",NID_setCext_setQualf,4,
	&(lvalues[4283]),0},
{"setCext-PGWYcapabilities","setCext-PGWYcapabilities",
	NID_setCext_PGWYcapabilities,4,&(lvalues[4287]),0},
{"setCext-TokenIdentifier","setCext-TokenIdentifier",
	NID_setCext_TokenIdentifier,4,&(lvalues[4291]),0},
{"setCext-Track2Data","setCext-Track2Data",NID_setCext_Track2Data,4,
	&(lvalues[4295]),0},
{"setCext-TokenType","setCext-TokenType",NID_setCext_TokenType,4,
	&(lvalues[4299]),0},
{"setCext-IssuerCapabilities","setCext-IssuerCapabilities",
	NID_setCext_IssuerCapabilities,4,&(lvalues[4303]),0},
{"setAttr-Cert","setAttr-Cert",NID_setAttr_Cert,4,&(lvalues[4307]),0},
{"setAttr-PGWYcap","payment gateway capabilities",NID_setAttr_PGWYcap,
	4,&(lvalues[4311]),0},
{"setAttr-TokenType","setAttr-TokenType",NID_setAttr_TokenType,4,
	&(lvalues[4315]),0},
{"setAttr-IssCap","issuer capabilities",NID_setAttr_IssCap,4,
	&(lvalues[4319]),0},
{"set-rootKeyThumb","set-rootKeyThumb",NID_set_rootKeyThumb,5,
	&(lvalues[4323]),0},
{"set-addPolicy","set-addPolicy",NID_set_addPolicy,5,&(lvalues[4328]),0},
{"setAttr-Token-EMV","setAttr-Token-EMV",NID_setAttr_Token_EMV,5,
	&(lvalues[4333]),0},
{"setAttr-Token-B0Prime","setAttr-Token-B0Prime",
	NID_setAttr_Token_B0Prime,5,&(lvalues[4338]),0},
{"setAttr-IssCap-CVM","setAttr-IssCap-CVM",NID_setAttr_IssCap_CVM,5,
	&(lvalues[4343]),0},
{"setAttr-IssCap-T2","setAttr-IssCap-T2",NID_setAttr_IssCap_T2,5,
	&(lvalues[4348]),0},
{"setAttr-IssCap-Sig","setAttr-IssCap-Sig",NID_setAttr_IssCap_Sig,5,
	&(lvalues[4353]),0},
{"setAttr-GenCryptgrm","generate cryptogram",NID_setAttr_GenCryptgrm,
	6,&(lvalues[4358]),0},
{"setAttr-T2Enc","encrypted track 2",NID_setAttr_T2Enc,6,
	&(lvalues[4364]),0},
{"setAttr-T2cleartxt","cleartext track 2",NID_setAttr_T2cleartxt,6,
	&(lvalues[4370]),0},
{"setAttr-TokICCsig","ICC or token signature",NID_setAttr_TokICCsig,6,
	&(lvalues[4376]),0},
{"setAttr-SecDevSig","secure device signature",NID_setAttr_SecDevSig,
	6,&(lvalues[4382]),0},
{"set-brand-IATA-ATA","set-brand-IATA-ATA",NID_set_brand_IATA_ATA,4,
	&(lvalues[4388]),0},
{"set-brand-Diners","set-brand-Diners",NID_set_brand_Diners,4,
	&(lvalues[4392]),0},
{"set-brand-AmericanExpress","set-brand-AmericanExpress",
	NID_set_brand_AmericanExpress,4,&(lvalues[4396]),0},
{"set-brand-JCB","set-brand-JCB",NID_set_brand_JCB,4,&(lvalues[4400]),0},
{"set-brand-Visa","set-brand-Visa",NID_set_brand_Visa,4,
	&(lvalues[4404]),0},
{"set-brand-MasterCard","set-brand-MasterCard",
	NID_set_brand_MasterCard,4,&(lvalues[4408]),0},
{"set-brand-Novus","set-brand-Novus",NID_set_brand_Novus,5,
	&(lvalues[4412]),0},
{"DES-CDMF","des-cdmf",NID_des_cdmf,8,&(lvalues[4417]),0},
{"rsaOAEPEncryptionSET","rsaOAEPEncryptionSET",
	NID_rsaOAEPEncryptionSET,9,&(lvalues[4425]),0},
{NULL,NULL,NID_undef,0,NULL},
{NULL,NULL,NID_undef,0,NULL},
{NULL,NULL,NID_undef,0,NULL},
{"msSmartcardLogin","Microsoft Smartcardlogin",NID_ms_smartcard_login,
	10,&(lvalues[4434]),0},
{"msUPN","Microsoft Universal Principal Name",NID_ms_upn,10,
	&(lvalues[4444]),0},
{"AES-128-CFB1","aes-128-cfb1",NID_aes_128_cfb1,0,NULL},
{"AES-192-CFB1","aes-192-cfb1",NID_aes_192_cfb1,0,NULL},
{"AES-256-CFB1","aes-256-cfb1",NID_aes_256_cfb1,0,NULL},
{"AES-128-CFB8","aes-128-cfb8",NID_aes_128_cfb8,0,NULL},
{"AES-192-CFB8","aes-192-cfb8",NID_aes_192_cfb8,0,NULL},
{"AES-256-CFB8","aes-256-cfb8",NID_aes_256_cfb8,0,NULL},
{"DES-CFB1","des-cfb1",NID_des_cfb1,0,NULL},
{"DES-CFB8","des-cfb8",NID_des_cfb8,0,NULL},
{"DES-EDE3-CFB1","des-ede3-cfb1",NID_des_ede3_cfb1,0,NULL},
{"DES-EDE3-CFB8","des-ede3-cfb8",NID_des_ede3_cfb8,0,NULL},
{"streetAddress","streetAddress",NID_streetAddress,3,&(lvalues[4454]),0},
{"postalCode","postalCode",NID_postalCode,3,&(lvalues[4457]),0},
};

static ASN1_OBJECT *sn_objs[NUM_SN]={
&(nid_objs[364]),/* "AD_DVCS" */
&(nid_objs[419]),/* "AES-128-CBC" */
&(nid_objs[421]),/* "AES-128-CFB" */
&(nid_objs[650]),/* "AES-128-CFB1" */
&(nid_objs[653]),/* "AES-128-CFB8" */
&(nid_objs[418]),/* "AES-128-ECB" */
&(nid_objs[420]),/* "AES-128-OFB" */
&(nid_objs[423]),/* "AES-192-CBC" */
&(nid_objs[425]),/* "AES-192-CFB" */
&(nid_objs[651]),/* "AES-192-CFB1" */
&(nid_objs[654]),/* "AES-192-CFB8" */
&(nid_objs[422]),/* "AES-192-ECB" */
&(nid_objs[424]),/* "AES-192-OFB" */
&(nid_objs[427]),/* "AES-256-CBC" */
&(nid_objs[429]),/* "AES-256-CFB" */
&(nid_objs[652]),/* "AES-256-CFB1" */
&(nid_objs[655]),/* "AES-256-CFB8" */
&(nid_objs[426]),/* "AES-256-ECB" */
&(nid_objs[428]),/* "AES-256-OFB" */
&(nid_objs[91]),/* "BF-CBC" */
&(nid_objs[93]),/* "BF-CFB" */
&(nid_objs[92]),/* "BF-ECB" */
&(nid_objs[94]),/* "BF-OFB" */
&(nid_objs[14]),/* "C" */
&(nid_objs[108]),/* "CAST5-CBC" */
&(nid_objs[110]),/* "CAST5-CFB" */
&(nid_objs[109]),/* "CAST5-ECB" */
&(nid_objs[111]),/* "CAST5-OFB" */
&(nid_objs[404]),/* "CCITT" */
&(nid_objs[13]),/* "CN" */
&(nid_objs[141]),/* "CRLReason" */
&(nid_objs[417]),/* "CSPName" */
&(nid_objs[367]),/* "CrlID" */
&(nid_objs[391]),/* "DC" */
&(nid_objs[31]),/* "DES-CBC" */
&(nid_objs[643]),/* "DES-CDMF" */
&(nid_objs[30]),/* "DES-CFB" */
&(nid_objs[656]),/* "DES-CFB1" */
&(nid_objs[657]),/* "DES-CFB8" */
&(nid_objs[29]),/* "DES-ECB" */
&(nid_objs[32]),/* "DES-EDE" */
&(nid_objs[43]),/* "DES-EDE-CBC" */
&(nid_objs[60]),/* "DES-EDE-CFB" */
&(nid_objs[62]),/* "DES-EDE-OFB" */
&(nid_objs[33]),/* "DES-EDE3" */
&(nid_objs[44]),/* "DES-EDE3-CBC" */
&(nid_objs[61]),/* "DES-EDE3-CFB" */
&(nid_objs[658]),/* "DES-EDE3-CFB1" */
&(nid_objs[659]),/* "DES-EDE3-CFB8" */
&(nid_objs[63]),/* "DES-EDE3-OFB" */
&(nid_objs[45]),/* "DES-OFB" */
&(nid_objs[80]),/* "DESX-CBC" */
&(nid_objs[380]),/* "DOD" */
&(nid_objs[116]),/* "DSA" */
&(nid_objs[66]),/* "DSA-SHA" */
&(nid_objs[113]),/* "DSA-SHA1" */
&(nid_objs[70]),/* "DSA-SHA1-old" */
&(nid_objs[67]),/* "DSA-old" */
&(nid_objs[297]),/* "DVCS" */
&(nid_objs[99]),/* "GN" */
&(nid_objs[381]),/* "IANA" */
&(nid_objs[34]),/* "IDEA-CBC" */
&(nid_objs[35]),/* "IDEA-CFB" */
&(nid_objs[36]),/* "IDEA-ECB" */
&(nid_objs[46]),/* "IDEA-OFB" */
&(nid_objs[181]),/* "ISO" */
&(nid_objs[183]),/* "ISO-US" */
&(nid_objs[393]),/* "JOINT-ISO-CCITT" */
&(nid_objs[15]),/* "L" */
&(nid_objs[ 3]),/* "MD2" */
&(nid_objs[257]),/* "MD4" */
&(nid_objs[ 4]),/* "MD5" */
&(nid_objs[114]),/* "MD5-SHA1" */
&(nid_objs[95]),/* "MDC2" */
&(nid_objs[388]),/* "Mail" */
&(nid_objs[57]),/* "Netscape" */
&(nid_objs[366]),/* "Nonce" */
&(nid_objs[17]),/* "O" */
&(nid_objs[178]),/* "OCSP" */
&(nid_objs[180]),/* "OCSPSigning" */
&(nid_objs[379]),/* "ORG" */
&(nid_objs[18]),/* "OU" */
&(nid_objs[ 9]),/* "PBE-MD2-DES" */
&(nid_objs[168]),/* "PBE-MD2-RC2-64" */
&(nid_objs[10]),/* "PBE-MD5-DES" */
&(nid_objs[169]),/* "PBE-MD5-RC2-64" */
&(nid_objs[147]),/* "PBE-SHA1-2DES" */
&(nid_objs[146]),/* "PBE-SHA1-3DES" */
&(nid_objs[170]),/* "PBE-SHA1-DES" */
&(nid_objs[148]),/* "PBE-SHA1-RC2-128" */
&(nid_objs[149]),/* "PBE-SHA1-RC2-40" */
&(nid_objs[68]),/* "PBE-SHA1-RC2-64" */
&(nid_objs[144]),/* "PBE-SHA1-RC4-128" */
&(nid_objs[145]),/* "PBE-SHA1-RC4-40" */
&(nid_objs[161]),/* "PBES2" */
&(nid_objs[69]),/* "PBKDF2" */
&(nid_objs[162]),/* "PBMAC1" */
&(nid_objs[127]),/* "PKIX" */
&(nid_objs[98]),/* "RC2-40-CBC" */
&(nid_objs[166]),/* "RC2-64-CBC" */
&(nid_objs[37]),/* "RC2-CBC" */
&(nid_objs[39]),/* "RC2-CFB" */
&(nid_objs[38]),/* "RC2-ECB" */
&(nid_objs[40]),/* "RC2-OFB" */
&(nid_objs[ 5]),/* "RC4" */
&(nid_objs[97]),/* "RC4-40" */
&(nid_objs[120]),/* "RC5-CBC" */
&(nid_objs[122]),/* "RC5-CFB" */
&(nid_objs[121]),/* "RC5-ECB" */
&(nid_objs[123]),/* "RC5-OFB" */
&(nid_objs[117]),/* "RIPEMD160" */
&(nid_objs[124]),/* "RLE" */
&(nid_objs[19]),/* "RSA" */
&(nid_objs[ 7]),/* "RSA-MD2" */
&(nid_objs[396]),/* "RSA-MD4" */
&(nid_objs[ 8]),/* "RSA-MD5" */
&(nid_objs[96]),/* "RSA-MDC2" */
&(nid_objs[104]),/* "RSA-NP-MD5" */
&(nid_objs[119]),/* "RSA-RIPEMD160" */
&(nid_objs[42]),/* "RSA-SHA" */
&(nid_objs[65]),/* "RSA-SHA1" */
&(nid_objs[115]),/* "RSA-SHA1-2" */
&(nid_objs[41]),/* "SHA" */
&(nid_objs[64]),/* "SHA1" */
&(nid_objs[188]),/* "SMIME" */
&(nid_objs[167]),/* "SMIME-CAPS" */
&(nid_objs[100]),/* "SN" */
&(nid_objs[16]),/* "ST" */
&(nid_objs[143]),/* "SXNetID" */
&(nid_objs[458]),/* "UID" */
&(nid_objs[ 0]),/* "UNDEF" */
&(nid_objs[11]),/* "X500" */
&(nid_objs[378]),/* "X500algorithms" */
&(nid_objs[12]),/* "X509" */
&(nid_objs[184]),/* "X9-57" */
&(nid_objs[185]),/* "X9cm" */
&(nid_objs[125]),/* "ZLIB" */
&(nid_objs[478]),/* "aRecord" */
&(nid_objs[289]),/* "aaControls" */
&(nid_objs[287]),/* "ac-auditEntity" */
&(nid_objs[397]),/* "ac-proxying" */
&(nid_objs[288]),/* "ac-targeting" */
&(nid_objs[368]),/* "acceptableResponses" */
&(nid_objs[446]),/* "account" */
&(nid_objs[363]),/* "ad_timestamping" */
&(nid_objs[376]),/* "algorithm" */
&(nid_objs[405]),/* "ansi-X9-62" */
&(nid_objs[370]),/* "archiveCutoff" */
&(nid_objs[484]),/* "associatedDomain" */
&(nid_objs[485]),/* "associatedName" */
&(nid_objs[501]),/* "audio" */
&(nid_objs[177]),/* "authorityInfoAccess" */
&(nid_objs[90]),/* "authorityKeyIdentifier" */
&(nid_objs[87]),/* "basicConstraints" */
&(nid_objs[365]),/* "basicOCSPResponse" */
&(nid_objs[285]),/* "biometricInfo" */
&(nid_objs[494]),/* "buildingName" */
&(nid_objs[483]),/* "cNAMERecord" */
&(nid_objs[179]),/* "caIssuers" */
&(nid_objs[443]),/* "caseIgnoreIA5StringSyntax" */
&(nid_objs[152]),/* "certBag" */
&(nid_objs[89]),/* "certificatePolicies" */
&(nid_objs[54]),/* "challengePassword" */
&(nid_objs[407]),/* "characteristic-two-field" */
&(nid_objs[395]),/* "clearance" */
&(nid_objs[130]),/* "clientAuth" */
&(nid_objs[131]),/* "codeSigning" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(nid_objs[153]),/* "crlBag" */
&(nid_objs[103]),/* "crlDistributionPoints" */
&(nid_objs[88]),/* "crlNumber" */
&(nid_objs[500]),/* "dITRedirect" */
&(nid_objs[451]),/* "dNSDomain" */
&(nid_objs[495]),/* "dSAQuality" */
&(nid_objs[434]),/* "data" */
&(nid_objs[390]),/* "dcobject" */
&(nid_objs[140]),/* "deltaCRL" */
&(nid_objs[107]),/* "description" */
&(nid_objs[28]),/* "dhKeyAgreement" */
&(nid_objs[382]),/* "directory" */
&(nid_objs[174]),/* "dnQualifier" */
&(nid_objs[447]),/* "document" */
&(nid_objs[471]),/* "documentAuthor" */
&(nid_objs[468]),/* "documentIdentifier" */
&(nid_objs[472]),/* "documentLocation" */
&(nid_objs[502]),/* "documentPublisher" */
&(nid_objs[449]),/* "documentSeries" */
&(nid_objs[469]),/* "documentTitle" */
&(nid_objs[470]),/* "documentVersion" */
&(nid_objs[392]),/* "domain" */
&(nid_objs[452]),/* "domainRelatedObject" */
&(nid_objs[416]),/* "ecdsa-with-SHA1" */
&(nid_objs[48]),/* "emailAddress" */
&(nid_objs[132]),/* "emailProtection" */
&(nid_objs[389]),/* "enterprises" */
&(nid_objs[384]),/* "experimental" */
&(nid_objs[172]),/* "extReq" */
&(nid_objs[56]),/* "extendedCertificateAttributes" */
&(nid_objs[126]),/* "extendedKeyUsage" */
&(nid_objs[372]),/* "extendedStatus" */
&(nid_objs[462]),/* "favouriteDrink" */
&(nid_objs[453]),/* "friendlyCountry" */
&(nid_objs[490]),/* "friendlyCountryName" */
&(nid_objs[156]),/* "friendlyName" */
&(nid_objs[509]),/* "generationQualifier" */
&(nid_objs[163]),/* "hmacWithSHA1" */
&(nid_objs[432]),/* "holdInstructionCallIssuer" */
&(nid_objs[430]),/* "holdInstructionCode" */
&(nid_objs[431]),/* "holdInstructionNone" */
&(nid_objs[433]),/* "holdInstructionReject" */
&(nid_objs[486]),/* "homePostalAddress" */
&(nid_objs[473]),/* "homeTelephoneNumber" */
&(nid_objs[466]),/* "host" */
&(nid_objs[442]),/* "iA5StringSyntax" */
&(nid_objs[266]),/* "id-aca" */
&(nid_objs[355]),/* "id-aca-accessIdentity" */
&(nid_objs[354]),/* "id-aca-authenticationInfo" */
&(nid_objs[356]),/* "id-aca-chargingIdentity" */
&(nid_objs[399]),/* "id-aca-encAttrs" */
&(nid_objs[357]),/* "id-aca-group" */
&(nid_objs[358]),/* "id-aca-role" */
&(nid_objs[176]),/* "id-ad" */
&(nid_objs[262]),/* "id-alg" */
&(nid_objs[323]),/* "id-alg-des40" */
&(nid_objs[326]),/* "id-alg-dh-pop" */
&(nid_objs[325]),/* "id-alg-dh-sig-hmac-sha1" */
&(nid_objs[324]),/* "id-alg-noSignature" */
&(nid_objs[268]),/* "id-cct" */
&(nid_objs[361]),/* "id-cct-PKIData" */
&(nid_objs[362]),/* "id-cct-PKIResponse" */
&(nid_objs[360]),/* "id-cct-crs" */
&(nid_objs[81]),/* "id-ce" */
&(nid_objs[263]),/* "id-cmc" */
&(nid_objs[334]),/* "id-cmc-addExtensions" */
&(nid_objs[346]),/* "id-cmc-confirmCertAcceptance" */
&(nid_objs[330]),/* "id-cmc-dataReturn" */
&(nid_objs[336]),/* "id-cmc-decryptedPOP" */
&(nid_objs[335]),/* "id-cmc-encryptedPOP" */
&(nid_objs[339]),/* "id-cmc-getCRL" */
&(nid_objs[338]),/* "id-cmc-getCert" */
&(nid_objs[328]),/* "id-cmc-identification" */
&(nid_objs[329]),/* "id-cmc-identityProof" */
&(nid_objs[337]),/* "id-cmc-lraPOPWitness" */
&(nid_objs[344]),/* "id-cmc-popLinkRandom" */
&(nid_objs[345]),/* "id-cmc-popLinkWitness" */
&(nid_objs[343]),/* "id-cmc-queryPending" */
&(nid_objs[333]),/* "id-cmc-recipientNonce" */
&(nid_objs[341]),/* "id-cmc-regInfo" */
&(nid_objs[342]),/* "id-cmc-responseInfo" */
&(nid_objs[340]),/* "id-cmc-revokeRequest" */
&(nid_objs[332]),/* "id-cmc-senderNonce" */
&(nid_objs[327]),/* "id-cmc-statusInfo" */
&(nid_objs[331]),/* "id-cmc-transactionId" */
&(nid_objs[408]),/* "id-ecPublicKey" */
&(nid_objs[508]),/* "id-hex-multipart-message" */
&(nid_objs[507]),/* "id-hex-partial-message" */
&(nid_objs[260]),/* "id-it" */
&(nid_objs[302]),/* "id-it-caKeyUpdateInfo" */
&(nid_objs[298]),/* "id-it-caProtEncCert" */
&(nid_objs[311]),/* "id-it-confirmWaitTime" */
&(nid_objs[303]),/* "id-it-currentCRL" */
&(nid_objs[300]),/* "id-it-encKeyPairTypes" */
&(nid_objs[310]),/* "id-it-implicitConfirm" */
&(nid_objs[308]),/* "id-it-keyPairParamRep" */
&(nid_objs[307]),/* "id-it-keyPairParamReq" */
&(nid_objs[312]),/* "id-it-origPKIMessage" */
&(nid_objs[301]),/* "id-it-preferredSymmAlg" */
&(nid_objs[309]),/* "id-it-revPassphrase" */
&(nid_objs[299]),/* "id-it-signKeyPairTypes" */
&(nid_objs[305]),/* "id-it-subscriptionRequest" */
&(nid_objs[306]),/* "id-it-subscriptionResponse" */
&(nid_objs[304]),/* "id-it-unsupportedOIDs" */
&(nid_objs[128]),/* "id-kp" */
&(nid_objs[280]),/* "id-mod-attribute-cert" */
&(nid_objs[274]),/* "id-mod-cmc" */
&(nid_objs[277]),/* "id-mod-cmp" */
&(nid_objs[284]),/* "id-mod-cmp2000" */
&(nid_objs[273]),/* "id-mod-crmf" */
&(nid_objs[283]),/* "id-mod-dvcs" */
&(nid_objs[275]),/* "id-mod-kea-profile-88" */
&(nid_objs[276]),/* "id-mod-kea-profile-93" */
&(nid_objs[282]),/* "id-mod-ocsp" */
&(nid_objs[278]),/* "id-mod-qualified-cert-88" */
&(nid_objs[279]),/* "id-mod-qualified-cert-93" */
&(nid_objs[281]),/* "id-mod-timestamp-protocol" */
&(nid_objs[264]),/* "id-on" */
&(nid_objs[347]),/* "id-on-personalData" */
&(nid_objs[265]),/* "id-pda" */
&(nid_objs[352]),/* "id-pda-countryOfCitizenship" */
&(nid_objs[353]),/* "id-pda-countryOfResidence" */
&(nid_objs[348]),/* "id-pda-dateOfBirth" */
&(nid_objs[351]),/* "id-pda-gender" */
&(nid_objs[349]),/* "id-pda-placeOfBirth" */
&(nid_objs[175]),/* "id-pe" */
&(nid_objs[261]),/* "id-pkip" */
&(nid_objs[258]),/* "id-pkix-mod" */
&(nid_objs[269]),/* "id-pkix1-explicit-88" */
&(nid_objs[271]),/* "id-pkix1-explicit-93" */
&(nid_objs[270]),/* "id-pkix1-implicit-88" */
&(nid_objs[272]),/* "id-pkix1-implicit-93" */
&(nid_objs[267]),/* "id-qcs" */
&(nid_objs[359]),/* "id-qcs-pkixQCSyntax-v1" */
&(nid_objs[259]),/* "id-qt" */
&(nid_objs[164]),/* "id-qt-cps" */
&(nid_objs[165]),/* "id-qt-unotice" */
&(nid_objs[313]),/* "id-regCtrl" */
&(nid_objs[316]),/* "id-regCtrl-authenticator" */
&(nid_objs[319]),/* "id-regCtrl-oldCertID" */
&(nid_objs[318]),/* "id-regCtrl-pkiArchiveOptions" */
&(nid_objs[317]),/* "id-regCtrl-pkiPublicationInfo" */
&(nid_objs[320]),/* "id-regCtrl-protocolEncrKey" */
&(nid_objs[315]),/* "id-regCtrl-regToken" */
&(nid_objs[314]),/* "id-regInfo" */
&(nid_objs[322]),/* "id-regInfo-certReq" */
&(nid_objs[321]),/* "id-regInfo-utf8Pairs" */
&(nid_objs[512]),/* "id-set" */
&(nid_objs[191]),/* "id-smime-aa" */
&(nid_objs[215]),/* "id-smime-aa-contentHint" */
&(nid_objs[218]),/* "id-smime-aa-contentIdentifier" */
&(nid_objs[221]),/* "id-smime-aa-contentReference" */
&(nid_objs[240]),/* "id-smime-aa-dvcs-dvc" */
&(nid_objs[217]),/* "id-smime-aa-encapContentType" */
&(nid_objs[222]),/* "id-smime-aa-encrypKeyPref" */
&(nid_objs[220]),/* "id-smime-aa-equivalentLabels" */
&(nid_objs[232]),/* "id-smime-aa-ets-CertificateRefs" */
&(nid_objs[233]),/* "id-smime-aa-ets-RevocationRefs" */
&(nid_objs[238]),/* "id-smime-aa-ets-archiveTimeStamp" */
&(nid_objs[237]),/* "id-smime-aa-ets-certCRLTimestamp" */
&(nid_objs[234]),/* "id-smime-aa-ets-certValues" */
&(nid_objs[227]),/* "id-smime-aa-ets-commitmentType" */
&(nid_objs[231]),/* "id-smime-aa-ets-contentTimestamp" */
&(nid_objs[236]),/* "id-smime-aa-ets-escTimeStamp" */
&(nid_objs[230]),/* "id-smime-aa-ets-otherSigCert" */
&(nid_objs[235]),/* "id-smime-aa-ets-revocationValues" */
&(nid_objs[226]),/* "id-smime-aa-ets-sigPolicyId" */
&(nid_objs[229]),/* "id-smime-aa-ets-signerAttr" */
&(nid_objs[228]),/* "id-smime-aa-ets-signerLocation" */
&(nid_objs[219]),/* "id-smime-aa-macValue" */
&(nid_objs[214]),/* "id-smime-aa-mlExpandHistory" */
&(nid_objs[216]),/* "id-smime-aa-msgSigDigest" */
&(nid_objs[212]),/* "id-smime-aa-receiptRequest" */
&(nid_objs[213]),/* "id-smime-aa-securityLabel" */
&(nid_objs[239]),/* "id-smime-aa-signatureType" */
&(nid_objs[223]),/* "id-smime-aa-signingCertificate" */
&(nid_objs[224]),/* "id-smime-aa-smimeEncryptCerts" */
&(nid_objs[225]),/* "id-smime-aa-timeStampToken" */
&(nid_objs[192]),/* "id-smime-alg" */
&(nid_objs[243]),/* "id-smime-alg-3DESwrap" */
&(nid_objs[246]),/* "id-smime-alg-CMS3DESwrap" */
&(nid_objs[247]),/* "id-smime-alg-CMSRC2wrap" */
&(nid_objs[245]),/* "id-smime-alg-ESDH" */
&(nid_objs[241]),/* "id-smime-alg-ESDHwith3DES" */
&(nid_objs[242]),/* "id-smime-alg-ESDHwithRC2" */
&(nid_objs[244]),/* "id-smime-alg-RC2wrap" */
&(nid_objs[193]),/* "id-smime-cd" */
&(nid_objs[248]),/* "id-smime-cd-ldap" */
&(nid_objs[190]),/* "id-smime-ct" */
&(nid_objs[210]),/* "id-smime-ct-DVCSRequestData" */
&(nid_objs[211]),/* "id-smime-ct-DVCSResponseData" */
&(nid_objs[208]),/* "id-smime-ct-TDTInfo" */
&(nid_objs[207]),/* "id-smime-ct-TSTInfo" */
&(nid_objs[205]),/* "id-smime-ct-authData" */
&(nid_objs[209]),/* "id-smime-ct-contentInfo" */
&(nid_objs[206]),/* "id-smime-ct-publishCert" */
&(nid_objs[204]),/* "id-smime-ct-receipt" */
&(nid_objs[195]),/* "id-smime-cti" */
&(nid_objs[255]),/* "id-smime-cti-ets-proofOfApproval" */
&(nid_objs[256]),/* "id-smime-cti-ets-proofOfCreation" */
&(nid_objs[253]),/* "id-smime-cti-ets-proofOfDelivery" */
&(nid_objs[251]),/* "id-smime-cti-ets-proofOfOrigin" */
&(nid_objs[252]),/* "id-smime-cti-ets-proofOfReceipt" */
&(nid_objs[254]),/* "id-smime-cti-ets-proofOfSender" */
&(nid_objs[189]),/* "id-smime-mod" */
&(nid_objs[196]),/* "id-smime-mod-cms" */
&(nid_objs[197]),/* "id-smime-mod-ess" */
&(nid_objs[202]),/* "id-smime-mod-ets-eSigPolicy-88" */
&(nid_objs[203]),/* "id-smime-mod-ets-eSigPolicy-97" */
&(nid_objs[200]),/* "id-smime-mod-ets-eSignature-88" */
&(nid_objs[201]),/* "id-smime-mod-ets-eSignature-97" */
&(nid_objs[199]),/* "id-smime-mod-msg-v3" */
&(nid_objs[198]),/* "id-smime-mod-oid" */
&(nid_objs[194]),/* "id-smime-spq" */
&(nid_objs[250]),/* "id-smime-spq-ets-sqt-unotice" */
&(nid_objs[249]),/* "id-smime-spq-ets-sqt-uri" */
&(nid_objs[461]),/* "info" */
&(nid_objs[101]),/* "initials" */
&(nid_objs[142]),/* "invalidityDate" */
&(nid_objs[294]),/* "ipsecEndSystem" */
&(nid_objs[295]),/* "ipsecTunnel" */
&(nid_objs[296]),/* "ipsecUser" */
&(nid_objs[86]),/* "issuerAltName" */
&(nid_objs[492]),/* "janetMailbox" */
&(nid_objs[150]),/* "keyBag" */
&(nid_objs[83]),/* "keyUsage" */
&(nid_objs[477]),/* "lastModifiedBy" */
&(nid_objs[476]),/* "lastModifiedTime" */
&(nid_objs[157]),/* "localKeyID" */
&(nid_objs[480]),/* "mXRecord" */
&(nid_objs[460]),/* "mail" */
&(nid_objs[493]),/* "mailPreferenceOption" */
&(nid_objs[467]),/* "manager" */
&(nid_objs[182]),/* "member-body" */
&(nid_objs[51]),/* "messageDigest" */
&(nid_objs[383]),/* "mgmt" */
&(nid_objs[504]),/* "mime-mhs" */
&(nid_objs[506]),/* "mime-mhs-bodies" */
&(nid_objs[505]),/* "mime-mhs-headings" */
&(nid_objs[488]),/* "mobileTelephoneNumber" */
&(nid_objs[136]),/* "msCTLSign" */
&(nid_objs[135]),/* "msCodeCom" */
&(nid_objs[134]),/* "msCodeInd" */
&(nid_objs[138]),/* "msEFS" */
&(nid_objs[171]),/* "msExtReq" */
&(nid_objs[137]),/* "msSGC" */
&(nid_objs[648]),/* "msSmartcardLogin" */
&(nid_objs[649]),/* "msUPN" */
&(nid_objs[481]),/* "nSRecord" */
&(nid_objs[173]),/* "name" */
&(nid_objs[369]),/* "noCheck" */
&(nid_objs[403]),/* "noRevAvail" */
&(nid_objs[72]),/* "nsBaseUrl" */
&(nid_objs[76]),/* "nsCaPolicyUrl" */
&(nid_objs[74]),/* "nsCaRevocationUrl" */
&(nid_objs[58]),/* "nsCertExt" */
&(nid_objs[79]),/* "nsCertSequence" */
&(nid_objs[71]),/* "nsCertType" */
&(nid_objs[78]),/* "nsComment" */
&(nid_objs[59]),/* "nsDataType" */
&(nid_objs[75]),/* "nsRenewalUrl" */
&(nid_objs[73]),/* "nsRevocationUrl" */
&(nid_objs[139]),/* "nsSGC" */
&(nid_objs[77]),/* "nsSslServerName" */
&(nid_objs[491]),/* "organizationalStatus" */
&(nid_objs[475]),/* "otherMailbox" */
&(nid_objs[489]),/* "pagerTelephoneNumber" */
&(nid_objs[374]),/* "path" */
&(nid_objs[112]),/* "pbeWithMD5AndCast5CBC" */
&(nid_objs[499]),/* "personalSignature" */
&(nid_objs[487]),/* "personalTitle" */
&(nid_objs[464]),/* "photo" */
&(nid_objs[437]),/* "pilot" */
&(nid_objs[439]),/* "pilotAttributeSyntax" */
&(nid_objs[438]),/* "pilotAttributeType" */
&(nid_objs[479]),/* "pilotAttributeType27" */
&(nid_objs[456]),/* "pilotDSA" */
&(nid_objs[441]),/* "pilotGroups" */
&(nid_objs[444]),/* "pilotObject" */
&(nid_objs[440]),/* "pilotObjectClass" */
&(nid_objs[455]),/* "pilotOrganization" */
&(nid_objs[445]),/* "pilotPerson" */
&(nid_objs[ 2]),/* "pkcs" */
&(nid_objs[186]),/* "pkcs1" */
&(nid_objs[27]),/* "pkcs3" */
&(nid_objs[187]),/* "pkcs5" */
&(nid_objs[20]),/* "pkcs7" */
&(nid_objs[21]),/* "pkcs7-data" */
&(nid_objs[25]),/* "pkcs7-digestData" */
&(nid_objs[26]),/* "pkcs7-encryptedData" */
&(nid_objs[23]),/* "pkcs7-envelopedData" */
&(nid_objs[24]),/* "pkcs7-signedAndEnvelopedData" */
&(nid_objs[22]),/* "pkcs7-signedData" */
&(nid_objs[151]),/* "pkcs8ShroudedKeyBag" */
&(nid_objs[47]),/* "pkcs9" */
&(nid_objs[401]),/* "policyConstraints" */
&(nid_objs[661]),/* "postalCode" */
&(nid_objs[406]),/* "prime-field" */
&(nid_objs[409]),/* "prime192v1" */
&(nid_objs[410]),/* "prime192v2" */
&(nid_objs[411]),/* "prime192v3" */
&(nid_objs[412]),/* "prime239v1" */
&(nid_objs[413]),/* "prime239v2" */
&(nid_objs[414]),/* "prime239v3" */
&(nid_objs[415]),/* "prime256v1" */
&(nid_objs[385]),/* "private" */
&(nid_objs[84]),/* "privateKeyUsagePeriod" */
&(nid_objs[510]),/* "pseudonym" */
&(nid_objs[435]),/* "pss" */
&(nid_objs[286]),/* "qcStatements" */
&(nid_objs[457]),/* "qualityLabelledData" */
&(nid_objs[450]),/* "rFC822localPart" */
&(nid_objs[400]),/* "role" */
&(nid_objs[448]),/* "room" */
&(nid_objs[463]),/* "roomNumber" */
&(nid_objs[ 6]),/* "rsaEncryption" */
&(nid_objs[644]),/* "rsaOAEPEncryptionSET" */
&(nid_objs[377]),/* "rsaSignature" */
&(nid_objs[ 1]),/* "rsadsi" */
&(nid_objs[482]),/* "sOARecord" */
&(nid_objs[155]),/* "safeContentsBag" */
&(nid_objs[291]),/* "sbqp-autonomousSysNum" */
&(nid_objs[290]),/* "sbqp-ipAddrBlock" */
&(nid_objs[292]),/* "sbqp-routerIdentifier" */
&(nid_objs[159]),/* "sdsiCertificate" */
&(nid_objs[154]),/* "secretBag" */
&(nid_objs[474]),/* "secretary" */
&(nid_objs[386]),/* "security" */
&(nid_objs[394]),/* "selected-attribute-types" */
&(nid_objs[105]),/* "serialNumber" */
&(nid_objs[129]),/* "serverAuth" */
&(nid_objs[371]),/* "serviceLocator" */
&(nid_objs[625]),/* "set-addPolicy" */
&(nid_objs[515]),/* "set-attr" */
&(nid_objs[518]),/* "set-brand" */
&(nid_objs[638]),/* "set-brand-AmericanExpress" */
&(nid_objs[637]),/* "set-brand-Diners" */
&(nid_objs[636]),/* "set-brand-IATA-ATA" */
&(nid_objs[639]),/* "set-brand-JCB" */
&(nid_objs[641]),/* "set-brand-MasterCard" */
&(nid_objs[642]),/* "set-brand-Novus" */
&(nid_objs[640]),/* "set-brand-Visa" */
&(nid_objs[517]),/* "set-certExt" */
&(nid_objs[513]),/* "set-ctype" */
&(nid_objs[514]),/* "set-msgExt" */
&(nid_objs[516]),/* "set-policy" */
&(nid_objs[607]),/* "set-policy-root" */
&(nid_objs[624]),/* "set-rootKeyThumb" */
&(nid_objs[620]),/* "setAttr-Cert" */
&(nid_objs[631]),/* "setAttr-GenCryptgrm" */
&(nid_objs[623]),/* "setAttr-IssCap" */
&(nid_objs[628]),/* "setAttr-IssCap-CVM" */
&(nid_objs[630]),/* "setAttr-IssCap-Sig" */
&(nid_objs[629]),/* "setAttr-IssCap-T2" */
&(nid_objs[621]),/* "setAttr-PGWYcap" */
&(nid_objs[635]),/* "setAttr-SecDevSig" */
&(nid_objs[632]),/* "setAttr-T2Enc" */
&(nid_objs[633]),/* "setAttr-T2cleartxt" */
&(nid_objs[634]),/* "setAttr-TokICCsig" */
&(nid_objs[627]),/* "setAttr-Token-B0Prime" */
&(nid_objs[626]),/* "setAttr-Token-EMV" */
&(nid_objs[622]),/* "setAttr-TokenType" */
&(nid_objs[619]),/* "setCext-IssuerCapabilities" */
&(nid_objs[615]),/* "setCext-PGWYcapabilities" */
&(nid_objs[616]),/* "setCext-TokenIdentifier" */
&(nid_objs[618]),/* "setCext-TokenType" */
&(nid_objs[617]),/* "setCext-Track2Data" */
&(nid_objs[611]),/* "setCext-cCertRequired" */
&(nid_objs[609]),/* "setCext-certType" */
&(nid_objs[608]),/* "setCext-hashedRoot" */
&(nid_objs[610]),/* "setCext-merchData" */
&(nid_objs[613]),/* "setCext-setExt" */
&(nid_objs[614]),/* "setCext-setQualf" */
&(nid_objs[612]),/* "setCext-tunneling" */
&(nid_objs[540]),/* "setct-AcqCardCodeMsg" */
&(nid_objs[576]),/* "setct-AcqCardCodeMsgTBE" */
&(nid_objs[570]),/* "setct-AuthReqTBE" */
&(nid_objs[534]),/* "setct-AuthReqTBS" */
&(nid_objs[527]),/* "setct-AuthResBaggage" */
&(nid_objs[571]),/* "setct-AuthResTBE" */
&(nid_objs[572]),/* "setct-AuthResTBEX" */
&(nid_objs[535]),/* "setct-AuthResTBS" */
&(nid_objs[536]),/* "setct-AuthResTBSX" */
&(nid_objs[528]),/* "setct-AuthRevReqBaggage" */
&(nid_objs[577]),/* "setct-AuthRevReqTBE" */
&(nid_objs[541]),/* "setct-AuthRevReqTBS" */
&(nid_objs[529]),/* "setct-AuthRevResBaggage" */
&(nid_objs[542]),/* "setct-AuthRevResData" */
&(nid_objs[578]),/* "setct-AuthRevResTBE" */
&(nid_objs[579]),/* "setct-AuthRevResTBEB" */
&(nid_objs[543]),/* "setct-AuthRevResTBS" */
&(nid_objs[573]),/* "setct-AuthTokenTBE" */
&(nid_objs[537]),/* "setct-AuthTokenTBS" */
&(nid_objs[600]),/* "setct-BCIDistributionTBS" */
&(nid_objs[558]),/* "setct-BatchAdminReqData" */
&(nid_objs[592]),/* "setct-BatchAdminReqTBE" */
&(nid_objs[559]),/* "setct-BatchAdminResData" */
&(nid_objs[593]),/* "setct-BatchAdminResTBE" */
&(nid_objs[599]),/* "setct-CRLNotificationResTBS" */
&(nid_objs[598]),/* "setct-CRLNotificationTBS" */
&(nid_objs[580]),/* "setct-CapReqTBE" */
&(nid_objs[581]),/* "setct-CapReqTBEX" */
&(nid_objs[544]),/* "setct-CapReqTBS" */
&(nid_objs[545]),/* "setct-CapReqTBSX" */
&(nid_objs[546]),/* "setct-CapResData" */
&(nid_objs[582]),/* "setct-CapResTBE" */
&(nid_objs[583]),/* "setct-CapRevReqTBE" */
&(nid_objs[584]),/* "setct-CapRevReqTBEX" */
&(nid_objs[547]),/* "setct-CapRevReqTBS" */
&(nid_objs[548]),/* "setct-CapRevReqTBSX" */
&(nid_objs[549]),/* "setct-CapRevResData" */
&(nid_objs[585]),/* "setct-CapRevResTBE" */
&(nid_objs[538]),/* "setct-CapTokenData" */
&(nid_objs[530]),/* "setct-CapTokenSeq" */
&(nid_objs[574]),/* "setct-CapTokenTBE" */
&(nid_objs[575]),/* "setct-CapTokenTBEX" */
&(nid_objs[539]),/* "setct-CapTokenTBS" */
&(nid_objs[560]),/* "setct-CardCInitResTBS" */
&(nid_objs[566]),/* "setct-CertInqReqTBS" */
&(nid_objs[563]),/* "setct-CertReqData" */
&(nid_objs[595]),/* "setct-CertReqTBE" */
&(nid_objs[596]),/* "setct-CertReqTBEX" */
&(nid_objs[564]),/* "setct-CertReqTBS" */
&(nid_objs[565]),/* "setct-CertResData" */
&(nid_objs[597]),/* "setct-CertResTBE" */
&(nid_objs[586]),/* "setct-CredReqTBE" */
&(nid_objs[587]),/* "setct-CredReqTBEX" */
&(nid_objs[550]),/* "setct-CredReqTBS" */
&(nid_objs[551]),/* "setct-CredReqTBSX" */
&(nid_objs[552]),/* "setct-CredResData" */
&(nid_objs[588]),/* "setct-CredResTBE" */
&(nid_objs[589]),/* "setct-CredRevReqTBE" */
&(nid_objs[590]),/* "setct-CredRevReqTBEX" */
&(nid_objs[553]),/* "setct-CredRevReqTBS" */
&(nid_objs[554]),/* "setct-CredRevReqTBSX" */
&(nid_objs[555]),/* "setct-CredRevResData" */
&(nid_objs[591]),/* "setct-CredRevResTBE" */
&(nid_objs[567]),/* "setct-ErrorTBS" */
&(nid_objs[526]),/* "setct-HODInput" */
&(nid_objs[561]),/* "setct-MeAqCInitResTBS" */
&(nid_objs[522]),/* "setct-OIData" */
&(nid_objs[519]),/* "setct-PANData" */
&(nid_objs[521]),/* "setct-PANOnly" */
&(nid_objs[520]),/* "setct-PANToken" */
&(nid_objs[556]),/* "setct-PCertReqData" */
&(nid_objs[557]),/* "setct-PCertResTBS" */
&(nid_objs[523]),/* "setct-PI" */
&(nid_objs[532]),/* "setct-PI-TBS" */
&(nid_objs[524]),/* "setct-PIData" */
&(nid_objs[525]),/* "setct-PIDataUnsigned" */
&(nid_objs[568]),/* "setct-PIDualSignedTBE" */
&(nid_objs[569]),/* "setct-PIUnsignedTBE" */
&(nid_objs[531]),/* "setct-PInitResData" */
&(nid_objs[533]),/* "setct-PResData" */
&(nid_objs[594]),/* "setct-RegFormReqTBE" */
&(nid_objs[562]),/* "setct-RegFormResTBS" */
&(nid_objs[606]),/* "setext-cv" */
&(nid_objs[601]),/* "setext-genCrypt" */
&(nid_objs[602]),/* "setext-miAuth" */
&(nid_objs[604]),/* "setext-pinAny" */
&(nid_objs[603]),/* "setext-pinSecure" */
&(nid_objs[605]),/* "setext-track2" */
&(nid_objs[52]),/* "signingTime" */
&(nid_objs[454]),/* "simpleSecurityObject" */
&(nid_objs[496]),/* "singleLevelQuality" */
&(nid_objs[387]),/* "snmpv2" */
&(nid_objs[660]),/* "streetAddress" */
&(nid_objs[85]),/* "subjectAltName" */
&(nid_objs[398]),/* "subjectInfoAccess" */
&(nid_objs[82]),/* "subjectKeyIdentifier" */
&(nid_objs[498]),/* "subtreeMaximumQuality" */
&(nid_objs[497]),/* "subtreeMinimumQuality" */
&(nid_objs[402]),/* "targetInformation" */
&(nid_objs[459]),/* "textEncodedORAddress" */
&(nid_objs[293]),/* "textNotice" */
&(nid_objs[133]),/* "timeStamping" */
&(nid_objs[106]),/* "title" */
&(nid_objs[375]),/* "trustRoot" */
&(nid_objs[436]),/* "ucl" */
&(nid_objs[55]),/* "unstructuredAddress" */
&(nid_objs[49]),/* "unstructuredName" */
&(nid_objs[465]),/* "userClass" */
&(nid_objs[373]),/* "valid" */
&(nid_objs[503]),/* "x500UniqueIdentifier" */
&(nid_objs[158]),/* "x509Certificate" */
&(nid_objs[160]),/* "x509Crl" */
};

static ASN1_OBJECT *ln_objs[NUM_LN]={
&(nid_objs[363]),/* "AD Time Stamping" */
&(nid_objs[405]),/* "ANSI X9.62" */
&(nid_objs[368]),/* "Acceptable OCSP Responses" */
&(nid_objs[177]),/* "Authority Information Access" */
&(nid_objs[365]),/* "Basic OCSP Response" */
&(nid_objs[285]),/* "Biometric Info" */
&(nid_objs[179]),/* "CA Issuers" */
&(nid_objs[131]),/* "Code Signing" */
&(nid_objs[382]),/* "Directory" */
&(nid_objs[392]),/* "Domain" */
&(nid_objs[132]),/* "E-mail Protection" */
&(nid_objs[389]),/* "Enterprises" */
&(nid_objs[384]),/* "Experimental" */
&(nid_objs[372]),/* "Extended OCSP Status" */
&(nid_objs[172]),/* "Extension Request" */
&(nid_objs[432]),/* "Hold Instruction Call Issuer" */
&(nid_objs[430]),/* "Hold Instruction Code" */
&(nid_objs[431]),/* "Hold Instruction None" */
&(nid_objs[433]),/* "Hold Instruction Reject" */
&(nid_objs[634]),/* "ICC or token signature" */
&(nid_objs[294]),/* "IPSec End System" */
&(nid_objs[295]),/* "IPSec Tunnel" */
&(nid_objs[296]),/* "IPSec User" */
&(nid_objs[182]),/* "ISO Member Body" */
&(nid_objs[183]),/* "ISO US Member Body" */
&(nid_objs[142]),/* "Invalidity Date" */
&(nid_objs[504]),/* "MIME MHS" */
&(nid_objs[388]),/* "Mail" */
&(nid_objs[383]),/* "Management" */
&(nid_objs[417]),/* "Microsoft CSP Name" */
&(nid_objs[135]),/* "Microsoft Commercial Code Signing" */
&(nid_objs[138]),/* "Microsoft Encrypted File System" */
&(nid_objs[171]),/* "Microsoft Extension Request" */
&(nid_objs[134]),/* "Microsoft Individual Code Signing" */
&(nid_objs[137]),/* "Microsoft Server Gated Crypto" */
&(nid_objs[648]),/* "Microsoft Smartcardlogin" */
&(nid_objs[136]),/* "Microsoft Trust List Signing" */
&(nid_objs[649]),/* "Microsoft Universal Principal Name" */
&(nid_objs[72]),/* "Netscape Base Url" */
&(nid_objs[76]),/* "Netscape CA Policy Url" */
&(nid_objs[74]),/* "Netscape CA Revocation Url" */
&(nid_objs[71]),/* "Netscape Cert Type" */
&(nid_objs[58]),/* "Netscape Certificate Extension" */
&(nid_objs[79]),/* "Netscape Certificate Sequence" */
&(nid_objs[78]),/* "Netscape Comment" */
&(nid_objs[57]),/* "Netscape Communications Corp." */
&(nid_objs[59]),/* "Netscape Data Type" */
&(nid_objs[75]),/* "Netscape Renewal Url" */
&(nid_objs[73]),/* "Netscape Revocation Url" */
&(nid_objs[77]),/* "Netscape SSL Server Name" */
&(nid_objs[139]),/* "Netscape Server Gated Crypto" */
&(nid_objs[178]),/* "OCSP" */
&(nid_objs[370]),/* "OCSP Archive Cutoff" */
&(nid_objs[367]),/* "OCSP CRL ID" */
&(nid_objs[369]),/* "OCSP No Check" */
&(nid_objs[366]),/* "OCSP Nonce" */
&(nid_objs[371]),/* "OCSP Service Locator" */
&(nid_objs[180]),/* "OCSP Signing" */
&(nid_objs[161]),/* "PBES2" */
&(nid_objs[69]),/* "PBKDF2" */
&(nid_objs[162]),/* "PBMAC1" */
&(nid_objs[127]),/* "PKIX" */
&(nid_objs[164]),/* "Policy Qualifier CPS" */
&(nid_objs[165]),/* "Policy Qualifier User Notice" */
&(nid_objs[385]),/* "Private" */
&(nid_objs[ 1]),/* "RSA Data Security, Inc." */
&(nid_objs[ 2]),/* "RSA Data Security, Inc. PKCS" */
&(nid_objs[188]),/* "S/MIME" */
&(nid_objs[167]),/* "S/MIME Capabilities" */
&(nid_objs[387]),/* "SNMPv2" */
&(nid_objs[512]),/* "Secure Electronic Transactions" */
&(nid_objs[386]),/* "Security" */
&(nid_objs[394]),/* "Selected Attribute Types" */
&(nid_objs[143]),/* "Strong Extranet ID" */
&(nid_objs[398]),/* "Subject Information Access" */
&(nid_objs[130]),/* "TLS Web Client Authentication" */
&(nid_objs[129]),/* "TLS Web Server Authentication" */
&(nid_objs[133]),/* "Time Stamping" */
&(nid_objs[375]),/* "Trust Root" */
&(nid_objs[12]),/* "X509" */
&(nid_objs[402]),/* "X509v3 AC Targeting" */
&(nid_objs[90]),/* "X509v3 Authority Key Identifier" */
&(nid_objs[87]),/* "X509v3 Basic Constraints" */
&(nid_objs[103]),/* "X509v3 CRL Distribution Points" */
&(nid_objs[88]),/* "X509v3 CRL Number" */
&(nid_objs[141]),/* "X509v3 CRL Reason Code" */
&(nid_objs[89]),/* "X509v3 Certificate Policies" */
&(nid_objs[140]),/* "X509v3 Delta CRL Indicator" */
&(nid_objs[126]),/* "X509v3 Extended Key Usage" */
&(nid_objs[86]),/* "X509v3 Issuer Alternative Name" */
&(nid_objs[83]),/* "X509v3 Key Usage" */
&(nid_objs[403]),/* "X509v3 No Revocation Available" */
&(nid_objs[401]),/* "X509v3 Policy Constraints" */
&(nid_objs[84]),/* "X509v3 Private Key Usage Period" */
&(nid_objs[85]),/* "X509v3 Subject Alternative Name" */
&(nid_objs[82]),/* "X509v3 Subject Key Identifier" */
&(nid_objs[184]),/* "X9.57" */
&(nid_objs[185]),/* "X9.57 CM ?" */
&(nid_objs[478]),/* "aRecord" */
&(nid_objs[289]),/* "aaControls" */
&(nid_objs[287]),/* "ac-auditEntity" */
&(nid_objs[397]),/* "ac-proxying" */
&(nid_objs[288]),/* "ac-targeting" */
&(nid_objs[446]),/* "account" */
&(nid_objs[364]),/* "ad dvcs" */
&(nid_objs[606]),/* "additional verification" */
&(nid_objs[419]),/* "aes-128-cbc" */
&(nid_objs[421]),/* "aes-128-cfb" */
&(nid_objs[650]),/* "aes-128-cfb1" */
&(nid_objs[653]),/* "aes-128-cfb8" */
&(nid_objs[418]),/* "aes-128-ecb" */
&(nid_objs[420]),/* "aes-128-ofb" */
&(nid_objs[423]),/* "aes-192-cbc" */
&(nid_objs[425]),/* "aes-192-cfb" */
&(nid_objs[651]),/* "aes-192-cfb1" */
&(nid_objs[654]),/* "aes-192-cfb8" */
&(nid_objs[422]),/* "aes-192-ecb" */
&(nid_objs[424]),/* "aes-192-ofb" */
&(nid_objs[427]),/* "aes-256-cbc" */
&(nid_objs[429]),/* "aes-256-cfb" */
&(nid_objs[652]),/* "aes-256-cfb1" */
&(nid_objs[655]),/* "aes-256-cfb8" */
&(nid_objs[426]),/* "aes-256-ecb" */
&(nid_objs[428]),/* "aes-256-ofb" */
&(nid_objs[376]),/* "algorithm" */
&(nid_objs[484]),/* "associatedDomain" */
&(nid_objs[485]),/* "associatedName" */
&(nid_objs[501]),/* "audio" */
&(nid_objs[91]),/* "bf-cbc" */
&(nid_objs[93]),/* "bf-cfb" */
&(nid_objs[92]),/* "bf-ecb" */
&(nid_objs[94]),/* "bf-ofb" */
&(nid_objs[494]),/* "buildingName" */
&(nid_objs[483]),/* "cNAMERecord" */
&(nid_objs[443]),/* "caseIgnoreIA5StringSyntax" */
&(nid_objs[108]),/* "cast5-cbc" */
&(nid_objs[110]),/* "cast5-cfb" */
&(nid_objs[109]),/* "cast5-ecb" */
&(nid_objs[111]),/* "cast5-ofb" */
&(nid_objs[404]),/* "ccitt" */
&(nid_objs[152]),/* "certBag" */
&(nid_objs[517]),/* "certificate extensions" */
&(nid_objs[54]),/* "challengePassword" */
&(nid_objs[407]),/* "characteristic-two-field" */
&(nid_objs[395]),/* "clearance" */
&(nid_objs[633]),/* "cleartext track 2" */
&(nid_objs[13]),/* "commonName" */
&(nid_objs[513]),/* "content types" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(nid_objs[14]),/* "countryName" */
&(nid_objs[153]),/* "crlBag" */
&(nid_objs[500]),/* "dITRedirect" */
&(nid_objs[451]),/* "dNSDomain" */
&(nid_objs[495]),/* "dSAQuality" */
&(nid_objs[434]),/* "data" */
&(nid_objs[390]),/* "dcObject" */
&(nid_objs[31]),/* "des-cbc" */
&(nid_objs[643]),/* "des-cdmf" */
&(nid_objs[30]),/* "des-cfb" */
&(nid_objs[656]),/* "des-cfb1" */
&(nid_objs[657]),/* "des-cfb8" */
&(nid_objs[29]),/* "des-ecb" */
&(nid_objs[32]),/* "des-ede" */
&(nid_objs[43]),/* "des-ede-cbc" */
&(nid_objs[60]),/* "des-ede-cfb" */
&(nid_objs[62]),/* "des-ede-ofb" */
&(nid_objs[33]),/* "des-ede3" */
&(nid_objs[44]),/* "des-ede3-cbc" */
&(nid_objs[61]),/* "des-ede3-cfb" */
&(nid_objs[658]),/* "des-ede3-cfb1" */
&(nid_objs[659]),/* "des-ede3-cfb8" */
&(nid_objs[63]),/* "des-ede3-ofb" */
&(nid_objs[45]),/* "des-ofb" */
&(nid_objs[107]),/* "description" */
&(nid_objs[80]),/* "desx-cbc" */
&(nid_objs[28]),/* "dhKeyAgreement" */
&(nid_objs[11]),/* "directory services (X.500)" */
&(nid_objs[378]),/* "directory services - algorithms" */
&(nid_objs[174]),/* "dnQualifier" */
&(nid_objs[447]),/* "document" */
&(nid_objs[471]),/* "documentAuthor" */
&(nid_objs[468]),/* "documentIdentifier" */
&(nid_objs[472]),/* "documentLocation" */
&(nid_objs[502]),/* "documentPublisher" */
&(nid_objs[449]),/* "documentSeries" */
&(nid_objs[469]),/* "documentTitle" */
&(nid_objs[470]),/* "documentVersion" */
&(nid_objs[380]),/* "dod" */
&(nid_objs[391]),/* "domainComponent" */
&(nid_objs[452]),/* "domainRelatedObject" */
&(nid_objs[116]),/* "dsaEncryption" */
&(nid_objs[67]),/* "dsaEncryption-old" */
&(nid_objs[6ocation" */wordlifier" */
&(aes-192-cbc" */
&(nid_objs[425]),/* "aes-192-cfb" C_objs[422]),/* "aes-19cation" */woruworuwo2]),/* "cbc9ive Namdde Namdde Namdde a6])ve N/* "(nid_obe "docucgrabjs[422]),/* "aes services (X.500)" */
&(nid_objs[378]),/* "d3r0udjs[116ic4])`" */
&(nid4tM6 ucgrabjs[422]L"aes-19s4,/* "doccccccccccccccccc "d3r0_ob4gnatntry" */
8-cfb83]),/* "nsCertType" *d_objs[248]),/* "id-omainCompone */
&(nid_objs[59]),/* "nsDataType" */
&(nid_objs[75]),/* "nsRenewalUrl" */
&(nid_objs[73]),/* "nsRe */
&(nid_objs[177])Y&(nid_oid_objs[177])Y&(ni3js[73]),/* "nsRRRRRRR(nid_objs[177]) "des-edue3]),/* "1,
g	7[75]),/* }$wo-field" *objs[41,/* "cou/
&(nid_objs[407]),/* "characteristic-two-field" */
&(nid_objs[395]),/* "clearance" */
&(nid_objs[130]),/* "clientAuth" */
&(nid_objs[131]),/* "codeSigning" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(nid_objs[153]),/* "*/
&(nid_objs[131]),/* "codeSigning" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(nid_objs[153]),/* "*/
&(nid_objs[131]),/* "codeSigning" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(n95 * "contentType"ountersit-88" */
&(nid_obj$s[73]),/* "nsRRRRRRR(nid500]),/* "dITRedir
tbjs[49]),/* "uns71]),/* "do/* "*/
&(nid_objs[131]),/*I42])kb" */
&(nid_objs[32]s[3&(nid_objs[131]),2" */
&(nid_objs[[50&(nid_objs[265]),/* "id-pda" */
ted Attjs[contentT" */
&(nid_objs[3ountepnteron" */s1=sformation" */
&(nid_objs[459]),/* "textEncodedORAddress" */
&(nid_objs[293]),/* "textNotice" */
&(nid_objs[133]),/* "timeStamping" */
&(nid_objs[106]),/* "title" */
&(nid_objs[375]),/* "trustRoot" */
&(nid_objs[436]),/* "ucl" */
&(nid_objs[55]),/* "unstructu95]),/* "clearance" */
Sttjs	h,mH Web */
&(nis	h,mH We.Re */
&([438]),/* * "set-brand-Novus_objs[75]),/* "nitextEncod/objs[342]),/* "id-bc" */
&(nid_objs* "set-brand-Novus_objntbc" *S" */
&(nid_objs* "set-brand-Novus_objntbc" *S" */
&(nid_objs* "set-brand-Novus5D "s2um" 9md-smime-aa-encrid_obj87brand-Novus5D "s2um" 9aa-encrid_obj87br72]),/* "Extension Request" */
&(nid_objs[432]),/* "Hold Instruction Call Issuer" */
&(nid_objs[430]),/* "Hold Instruction Code" */
&(nid_objs[431]),/* "Hold Instruction None" */
&(nid_objs[433]),/* "Hold Instruction Reject" */
&(nid_objs[634]),/* "ICC or to3N,/* "set-brand-Novu "aes-128-cfband-Novu "aes-128-cfb "(nid_obe "docuc
aa-c/
&(2]),/* "id-sLalg" */
&(nid_d Ins9]),/* "Netscape Dsion None" */
&(nidlifier" */
&(aes-192-cbctersignature" */
& */
&(nid_sLalmm2aaracteristic-two */
&(nit-smime-alg-ESDH" *r72]tctASN1_OBJECTo3N,/* "set-brc-two */
&(nit-smimbmrprises" */
&(nid 11s"3"id%*/
&(suer" */g0,EAWo
&(nid_objs[527]),7.* "cbc9ive Na" */
& */
 Call Issuer" */
&(nid_objs[430]),/* "Hold Sa "cbc9ive),/* "/* "Hold Sa c */
&(niu
t
&(nisid_ob,/* suer" 1sX,0D* c */
&(n(nisida c */
&(niu
t
4nmmmmalmm2aaracteristic-two95] */
&(nidmcn-old" */
&(niX,0D-brc-two *eris1sX,0D* c aK(nid_sLalmm2aaractimumQuality" */
&(nid),/* "ICC or ,&(nid),/* "I4t-DVCSRequestData"c9ive),/*ion
&(lrc-two */
&(nit-smimba*/
&(nid_objs[419]),/* "aes-128-cbc" */
&(nid_objs[421]),/* "aes-128-cfb" */
&(nid_objs[650]),/* "aes-128-cfb1" */
&(nid_objs[653]),/* "aes-128-cfb8" */
&(nid_objs[418]),/* "aes-128-ecb" */
&(nid_objs[420]),/* "aes-128-ofb" */
&(nid_objs[423]),/* "aes-192-cbjs[RU5])objs[423]),/* "aes */XV]),/* "al6brand	dC/XV])])objs[42$	dC/UtNotice" *jntbc" *S" */
&" */
&(n2mimbmole" */
&etsn6n2mimbmole" */
DSA" */
&(nid_ob),/* "AD Time Stampinavouric-two */
&(nit-smime"cliet-brc-two */
&(n95] */
&(nidmcn-old" */
98,/* "aity, Inc..Nc&(nid=(T61ingName" */
&(nid]),/* "d_sLalmtio6d_objs[539]),/* "setc]),/* "Aciaes 4t138]),/* "msEFS" */
&(as[527])Ds[527])Ds[52n[471]),/* "doetc])Lied&(nid_dD5n[471]),/*/
&(nid_objs* "s9),/* "d_sL4-nid_objs[132]),/* 122n[471]),/]),/* "setct-CapTokenT0D-brc-tw,/]),23]),/* "setct-PI" 9ive Na" ,/])
&(nid_objs[539]),/*" 1sX,0D*,/])52]),/* "domainRelate2n[471]),fct-snid_objs[56]),/* "extend" */
&(nibjsemd16id_objs[132]),/* 1/* "assocbjsemd16inid_objs[130]),/* "clieod-attribute-cert" */
&(nid_objs[274]),/* "id-mod-cmc" */
&(nid_objs[277]),/* "id-mod-cmp" */
&(/* "assocb/* "id-qcs-pkixQCSnid_objs[284]),/* "id-mod-cmp2000" */
&(nid_objs[273]),/* "id-mod-crmf" */
&(nid_objs[283]),/* "id-mod-dvcs" */
&(nid_objs1malmm2aarrun &(nith com),/* _sLalmm2aaracteristi" */
&(nid_objs[276]),/* "id-mod-kea-profile-93" */
&(nid_objs[282]),/* "id-mod-ocsp" */
&(nid_objs[278]),/* "id-mod-qualified-cert-88" */
&(nid_objs[279]),/* "id-mod-qualified-cert-93" */
&(nid_objs[281]),/* "id-mod-timestamp-protocol" */
&(nid_objs[264]),/times-on" */
&(nid_objs[347]),/* "id-on-personalData" */
&(nid_oo-certReq" *p-T2"dejs[64edReqTBEX" */
&(nid_objs[5bjs[353]),/* "id-pda-countryOfResidenda-gender" */
&(nid_objs[349]),/* "id-pda-placeOfBirth" */
&(nid_objs[175]),/* "id-pe" */
&(nid_objs[261]),/* "id-pkip" */
&(nid_objs[258]),/* "id-pkix-mod" */
&(nid_objs[269]),/* "id-pkix1-explicit-88" */
&(nid_objs[271]),/* "id-pkix1-explicit-93" */
&(nid_objs[270]),/* "id-pkix1-implicit-88" */
&(nid_objs[272]),/* "id-pkix1-implicit-93" */
&(nid_objs[267]),/* "id-qcs" */
&(nid_objs[359]),/* "id-qcs-pkixQCSynice" */
&(nid_objs[313]),/* "id-regCtrl" */
&(nid_objs[316]),/* "id-regCtrl-authenticator" */
&(nid_objs[319]),/* "id-regCtrl-oldCertID" */
&(nid_objs[318])nfo" */
&(nid_objs[320]),/* "id-regCtrl-protocolEncrKey" */
&(nid_objs[315]),/* "id-regCtrl-regToken" */
&(nid_objs[314]),/* "id-regnt" */
&(nid_objs[218]),/* "id-smime-aa-contentIdentifier" */
&(nid_objs[221]),/* "id-smime-aa-contentReference" */
&(nid_objs[240]),/* "id-smime-aa-dvcs-dvc" */
&(nid_objs[217]),/* "id-smime-aa-encapContentType" */
&(nid_objs[222]),/* "id-smime-aa-encrypKeyPref" */
&(nid_objs[220]),/* "id-smime-aa-equivalentLabels" */
&(nid_objs[232]),/* "id-smime-aa-ets-CertificateRefs" */
&(nid_objs[233]),/* "id-smime-aa-ets-RevocationRefs" */
&(nid_objs[238]),/* "id-smime-aa-ets-archiveTimeStamp" */
&(nid_objs[237]),/* "id-smime-aa-ets-certCRLTimestamp" */
&(nid_objs[234]),/* "id-smime-aa-ets-certValues" */
&(nid_objs[227]),/* "id-smime-aa-ets-commitmentType" */
&(nid_objs[231]),/* "id-smime-aa-ets-contentTimestamp" */
&(nid_objs[236]),/* "id-smime-aa-ets-escTimeStamp" */
&(nid_objs[230]),/* "id-smime-aa-ets-otherSigCert" */
&(nid_objs[235]),/* "id-smime-aa-ets-revocationValues" */
&(nid_objs[226]),/* "id-smime-aa-ets-sigPolicyId" */
&(nid_objs[229]),/* "id-smime-aa-ets-signerAttr" */
&(nid_objs[228]),/* "id-smime-aa-ets-signerLocation" */
&(nid_objs[219]),/* "id-smime-aa-macValue" */
&(nid_objs[214]),/* "id-smime-aa-mlExpandHistory" */
&(nid_objs[216]),/* "id-smime-aa-msgSigDigest" */
&(nid_objs[212]),/* "id-smime-aa-receiptRequest" */
&(nid_objs[213]),/* "id-smime-aa-securityLabel,/* "id-smiobjs[239]),/* "id-smime-aa-signatureType" */
&(nid_objs[223]),/* "id-smime-aa-signingCertificate" */
&(nid_objs[224]),/* "id-smime-aa-smimeEncryptCerts" */
&(nid_objs[225]),/* "id-smime-aa-timeStampToken" */
&(nid_objs[192]),/* "id-smime-alg" */
&(nid_objs[2js[225]),/* "idme-alg-3DESwrap" */
&(nid_objs[246]),/* "id-smime-alg-CMS3DESwrap" */
&(nid_objs[247]),/* "id-smime-alg-CMSRC2wrap" */
&(nid_objs[245]),/* "id-smime-alg-ESDH" */
&(nid_objs[241]),/* "id-smime-alg-ESDHwith3DES" */
&(nid_objs[242]),/* "id-smime-alg-ESDHwithRC2" */
&(nid_objs[244]),/* "id-smime-alg-RC2wrap" */
&(nid_objs[193]),/* "id-smime-cd" */
&(nid_objs[248]),/* "id-smime-cd-ldap" */
&(nid_objs[190]),/* "id-smime-ct" */
&(nid_objs[210]),/* "id-smime-ct-DVCSRequestData" */
&(nid_objs[211]),/* "id-smime-ct-DVCSResponseData" */
&(nid_objs[208]),/* "id-smime-ct-TDTInfo" */
&(nid_objs[207]),/* "id-smime-ct-TSTInfo" */
&(nid_objs[205]),/* "id-smime-ct-authData" */
&(nid_objs[209]),/* "id-smime-ct-contentInfo" */
&(nid_objs[206]),/* "id-smime-ct-publishCert" */
&(nid_ob06]),/* "id-smime-cme-ct-receipt" */
&(nid_objs[195]),/* "id-smime-cti" */
&(nid_objs[255]),/* "id-smime-cti-ets-proofOfApproval" */
&(nid_objs[256]),/* "id-smime-cti-ets-proofOfCreation" */
&(nid_objs[253]),/* "id-smime-cti-ets-proofOfDelivery" */
&(nid_objs[251]),/* "id-smime-cti-ets-proofOfOrigin" */
&(nid_objs[252]),/* "id-smime-cti-ets-proofOfReceipt" */
&(nid_objs[254]),/* "id-smime-cti-ets-proofOfSender" */
&(nid_objs[189]),/* "id-smime-mod" */
&(nid_objs[196]),/* "id-smime-mod-cms" */
&(nid_objs[197]),/* "id-smime-mod-ess" */
&(nid_objs[202]),/* "id-smime-mod-ets-eSigPolicy-88" */
&(nid_objs[203]),/* "id-smime-mod-ets-eSigPolicy-97" */
&(nid_objs[200]),/* "id-smime-mod-ets-eSignature-88" */
&(nid_objs[201]),/* "id-smime-mod-ets-eSignature-97" */
&(nid_objs[199]),/* "id-smime-mod-msg-v3" */
&(nid_objs[198]),/* "id-smime-mod-oid" */
&(nid_objs[194]),/* "id-smime-spq" */
&(nid_objs[250]),/* "id-smime-spq-ets-sqt-unotice" */
&(nid_objs[249]),/* "id-smime-spq-ets-sqt-uri" */
&(nid_objs[461]),/* "info" */
&(nid_objs[101]),/* "initials" */
&(nid_objs[142]),/* "invalidityDate" */
&(nid_objs[294]),/* "ipsecEndSystem" */
&(nid_objs[295]),/* "ipsecTunnel" */
&(nid_objs[296]),/* "ipsecUser" */
&(nid_objs[86]),/* "issuerAltName" */
&(nid_objs[492]),/* "janetMailbox" */
&(nid_objs[150]),/* "keyBag" */
&(nid_objs[83]),/* "keyUsage" */
&(nid_objs[477]),/* "lastModifiedBy" */
&(nid_objs[476]),/* "lastModifiedTime" */
&(nid_objs[157]),/* "localKeyID" */
&(nid_objs[480]),/* "mXRecord" */
&(nid_objs[460]),/* "mail" */
&(nid_objs[493]),/* "mailPreferencerd" */
 */
&(nid_objs[467]),/* "manager" */
&(nid_objs[182]),/* "member-body" */
&(nid_objs[51]),/* "messageDigest" */
&(nid_objs[383]),/* "mgmt" */
&(nid_objs[504]),/* "mime-mhs" */
&(nid_objs[506]),/* "mime-mhs-bodies" */
&(nid_objs[505]),/* "mime-mhs-headings" */
&(nid_objs[488]),/* "mobileTelephoneNumber" */
&(nid_objs[136]),/* "msCTLSign" */
&(nid_obsExtReq" */
&(nid_objs[137]),/* "msSGC" */
&(nid_objs[648]),/* "msSmartcardLogin" */
&(nid_objs[649]),/* "msUPN" */
&(* "id-smimh-certCRLTimestamp"4"id-smimh-3]),/* "1,
g	7[75]d-smime-aah-3nid_objs[130]),/* "clien-smime-aah-3nid_obj]),/* "id-mod-cmp2000" */
[213]),/* hanid_obj]),/* "id-mod-cmp2000" */
nid_objs[481]),/* "nSRecord" */
&(nid_objs[173]),/* "name" */
&(nid_objs[369]),/* "noCheck" */
&(nid_objs[403]),/* "noRevAvail* "id-smime" *OrProvince" */
&(nid_objs[375])l" */
&(nid_objs[76]),/* "nsCaPolicyUrobjs[71]),/* "nsCertType" */
&(nid_objs[78]),/* "nsComment" */
&(nid_objs[59]),/* "nsDataType"1),/* "id-sur "codeSigning" */
&(nid_objs[73]),/* "nsRevocationUrl" */
&(nid_objs[139]),/* "nsSGC" */
&(nid_objs[77]91]),/* "organizationalStatus"ox" */
&(nid_objs[489]),/* "p ,/* "id-undefir-body" */
&(nid_objgerTelephoneNumber" */
&(nid_objs[374]),/* "path" */
&(nid_objs[112]),/* "pbeWithMD5AndCast5CBC" */
&(nid_objs[499]),/*4me-alg-3DC" *
&(nid_objs[426]), "personalSignature" */
&(nid_objs[487]),/* "personalTitle" */
&(nid_objs[464]),/* "photo" */
&(nid_objs[437]),/* "pilot" */
&(nid_objs[439]7]),/* "pilo&(nid_objzlib com),/* _sLalmm2),/* "pilotAttributeSynt "p* "pil(nidbutbjs[438]),/* "p ,/* "idbut_undef                        0d_objs[499]),/*4bsExtReqbut_),/*                         0d_objs[499]),/*43sExtReqbut_/
 C                         0d9439]7]),/* "pilo-cd" */
but_iso                          1439]7]),/* "pilo-2d" */
but_m1" */_body                  142nid_objs[426]), "9d" */
but_org                          143nid_objs[426]), s[139]),but__objs_iso_),/*               2nid_objs[426]),1cd" */
but_X* "                         2 5nid_objs[426]), 8,/* "idbut_dod                          143n6439]7]),/* "pilo&d" */
but_X* 9                         2 5n4nid_objs[426]), "8d" */
but_X* "* "setct-P               2 5n8nid_objs[426]),-cd" */
but_id_ce                        2 5n29439]7]),/* "pil5o&d" */
but_,/*d_o                       2 23 42nid_objs[426]),UtNotice"but_psP                          0d942342nid_objs[426]),12]),/* "but_ISO_US                       142 840d_objs[499]),/*3-cd" */
but_ianC                         143n641439]7]),/* "pil-SecDevSibut_s */
&(n_bjs[161])_/
&(n     2 5n1 5nid_objs[426]),1]),/* "but_ */
&(nid_                   2 5n443nid_objs[426]),1),/* "idbut_sur "co                      2 5n444nid_objs[426]),5bjs[353]but_s * "id-pda-                 2 5n445nid_objs[426]),1sExtReqbut_)"timeStamp                  2 5n446439]7]),/* "pilojs[353]but_/
&(nid4tM6                  2 5n447,/* "noRevAvail* "id-smbut_se" *OrProvince" */          2 5n448nid_objs[426]),)l" */
&(but_se_objs[76]),                2 5n449439]7]),/* "pilo7d" */
but_orgbjs[53]),/* "             2 5n4410d_objs[499]),/*18d" */
but_orgbjs[53]),RRRRRR(nid       2 5n4411439]7]),/* "pilo0 "id-smbut_organ                        2 5n4412nid_objs[426]),107d" */
but_objs[532]),                  2 5n4413nid_objs[426]),e),/*ion
but_plrc-two *                   2 5n4417,/* "noRevAvail*7]),/* "but_ "co                         2 5n4441439]7]),/* "pil99d" */
but_s[465]),/                    2 5n4442nid_objs[426]),10cd" */
but_iryption                     2 5n4443nid_objs[426]), */
&(nidbut_sbjs[55]),/* "unstr          2 5n4444nid_objs[426]),bjs[487])but_/* "personalTitle" *         2 5n4445nid_objs[426]),17sExtReqbut_/,/* "unstr                  2 5n4446439]7]),/* "pil,/* "al6bbut_psd	dC/XV                    2 5n4465nid_objs[426]),4),/* "idbut_te-c                         2 5n4472nid_objs[426]),-2d" */
but_s[79]),_key_ilTitle" *       2 5n29414nid_objs[426]),2]),/* "but_key_u),/*                    2 5n29415nid_objs[426]),8sExtReqbut_pge" */_key_u),/*_p571])     2 5n29416439]7]),/* "pil85d" */
but_s[79]),_alt_ "co             2 5n29417,/* "noRevAvail8 "id-smbut_js[6oc_alt_ "co              2 5n29418nid_objs[426]),-7d" */
but_b[617_)"*/
&(nid_            2 5n29419439]7]),/* "pil88d" */
but_crl_n-pda-                   2 5n29420d_objs[499]),/*141d" */
but_crl_rhashed                  2 5n29421439]7]),/* "pild_objs[22but_hold_ir
&(nid_ob_co *        2 5n29423nid_objs[426]),14&d" */
but_," */
&(ni_/
 o              2 5n29424nid_objs[426]),54,/* "idbut_d/
&(_crl                    2 5n29427,/* "noRevAvail*js[487])but_crl_d */
&(nid_o_plnid_      2 5n29431439]7]),/* "pil8/
&(nidbut_TBS" */
&(n_p*/
&(ni         2 5n29432nid_objs[426]),9,/* "idbut_a*/
&(nid_key_ilTitle" *     2 5n29435nid_objs[426]),4),/*ion
but_plobjs_)"*/
&(nid_           2 5n29436439]7]),/* "pilo& "id-smbut_ "n_key_u),/*                2 5n29437,/* "noRevAvailapabilitibut_o542])_i),/* "setAt          2 5n29455nid_objs[426]),4)]),/* "but_ o_rhv_aReqT                 2 5n29456439]7]),/* "pil,/]),/* "but_d_o_c/
&(                    2 23 42n0d_objs[499]),/*514),/* "but_d_o_msgExo                   2 23 42n1439]7]),/* "pil515),/* "but_d_o_bjs[                     2 23 42n3nid_objs[426]), * "id-smbut_s_o_plobjs                   2 23 42n5nid_objs[426]),5o7d" */
but_d_o_cBS"Exo                  2 23 42n7,/* "noRevAvail518d" */
but_d_o_s[359                    2 23 42n8nid_objs[426]),3-2d" */
but_1" */
&(n                    143n64141439]7]),/* "pil-2]),/* "but_e" */
&(ni                   143n64142nid_objs[426]), 8sExtReqbut_,/* "pkcs7-d                 143n64143nid_objs[426]), 85d" */
but_age" */





















143n64144nid_objs[426]), 8 "id-smbut_"name" *




















143n64145nid_objs[426]), 87d" */
but_&(nid_






















143n64146439]7]),/* "pil388d" */
but_MeqT                 







143n64147,/* "noRevAvail*/
&(nid_but_a "setct-            







143n1443n2nid_objs[426]), 95d" */
but_d_objs[56            







2 5n1 5n55nid_objs[426]),1/
&(nidbut_rsC                          2 5n8n141439]7]),/* "pil9
&(nid_but_/
&(nid_obj                  2 5n8n3n100d_objs[499]),/*95d" */
but_/
&(                         2 5n8n3n101439]7]),/* "pil519d" */
but_d_o),_g" */
&                2 23 42n0d0d_objs[499]),/*520d" */
but_d_o),_g" nid_o               2 23 42n0d1439]7]),/* "pil521d" */
but_d_o),_g" id_o                2 23 42n0d2nid_objs[426]),[492]),/*but_d_o),_Mailbo                 2 23 42n0d3nid_objs[426]), 23d" */
but_d_o),_gI                     2 23 42n0d4nid_objs[426]),b24d" */
but_d_o),_gIilbo                 2 23 42n0d5nid_objs[426]),525d" */
but_d_o),_gIilbo_objs[50         2 23 42n0d6439]7]),/* "pil,26d" */
but_d_o),_96]),/*                2 23 42n0d7,/* "noRevAvail527d" */
but_d_o),_cationValues"          2 23 42n0d8nid_objs[426]),d-smime-abut_d_o),_cation/
&(nid_obj      2 23 42n0d9439]7]),/* "pil529d" */
but_d_o),_e-aa-receiptReque      2 23 42n0d10d_objs[499]),/*530d" */
but_d_o),_-smime-cti-            2 23 42n0d11439]7]),/* "pil531d" */
but_d_o),_g),/* "mime-           2 23 42n0d12nid_objs[426]),[392]),/*but_d_o),_PI_TBS                 2 23 42n0d13nid_objs[426]), 33d" */
but_d_o),_g "mime-               2 23 42n0d14nid_objs[426]),b34d" */
but_d_o),_
&(nid_obj             2 23 42n0d16439]7]),/* "pil,35d" */
but_d_o),_" */
&(nid             2 23 42n0d17,/* "noRevAvail536d" */
but_d_o),_" */
&(nid_            2 23 42n0d18nid_objs[426]),d37d" */
but_d_o),_catioofOfDel           2 23 42n0d19439]7]),/* "pil53smime-abut_d_o),_/* "id-smime           2 23 42n0d20d_objs[499]),/*id-smime-but_d_o),_/* "id-snid            2 23 42n0d21439]7]),/* "pil540d" */
but_d_o),_,/* "id-smime-         2 23 42n0d22nid_objs[426]),[41d" */
but_d_o),_msgSigDigest"          2 23 42n0d23nid_objs[426]), 492]),/*but_d_o),_mime-aa-securi         2 23 42n0d24nid_objs[426]),b43d" */
but_d_o),_d_objs[224]),          2 23 42n0d25nid_objs[426]),544d" */
but_d_o),_210]),/*               2 23 42n0d26439]7]),/* "pil,45d" */
but_d_o),_210]),/* "             2 23 42n0d27,/* "noRevAvail546d" */
but_d_o),_&(nid_objs             2 23 42n0d28nid_objs[426]),d47d" */
but_d_o),_ime-ct-conte           2 23 42n0d29439]7]),/* "pil54smime-abut_d_o),_/* "info" */
          2 23 42n0d30d_objs[499]),/*i4-smime-but_d_o),_/* -aa-securi          2 23 42n0d31439]7]),/* "pil550d" */
but_d_o),_-eSignatur             2 23 42n0d32nid_objs[426]),id-smime-but_d_o),_-eSignatur_            2 23 42n0d33nid_objs[426]), 592]),/*but_d_o),_smime-mod-m            2 23 42n0d34nid_objs[426]),b53d" */
but_d_o),_,/* "info" */          2 23 42n0d35nid_objs[426]),554d" */
but_d_o),_2/* "info" */
         2 23 42n0d36439]7]),/* "pil,55d" */
but_d_o),_2
&(nid_objs[1         2 23 42n0d37,/* "noRevAvail556d" */
but_d_o),_*/
&(nid_obj           2 23 42n0d38nid_objs[426]),d57d" */
but_d_o),__objs[480])            2 23 42n0d39439]7]),/* "pil55smime-abut_d_o),_" */
&(nid_objs[2      2 23 42n0d40d_objs[499]),/*ime-alg-Cbut_d_o),_" */
&(nid_osjs[2      2 23 42n0d41439]7]),/* "pil560d" */
but_d_o),_-ssmime-cti-ets        2 23 42n0d42nid_objs[426]),56-smime-but_d_o),_* "issuerAltNam        2 23 42n0d43nid_objs[426]), 692]),/*but_d_o),_36]),/* "msCT          2 23 42n0d44nid_objs[426]),b63d" */
but_d_o),_,
&(nid_obj            2 23 42n0d45nid_objs[426]),564d" */
but_d_o),_2s" */
&(n             2 23 42n0d46439]7]),/* "pil,65d" */
but_d_o),_2s" */
&(ni            2 23 42n0d47,/* "noRevAvail566d" */
but_d_o),_&]),/* "id-sm          2 23 42n0d48nid_objs[426]),d67d" */
but_d_o),_s[295]),               2 23 42n0d49439]7]),/* "pil56smime-abut_d_o),_ageDigest" */
&        2 23 42n0d50d_objs[499]),/*i69d" */
but_d_o),_gd_objs[504])          2 23 42n0d51439]7]),/* "pil570d" */
but_d_o),_,30]),/* "             2 23 42n0d52nid_objs[426]),571d" */
but_d_o),_msgSigs* "             2 23 42n0d53nid_objs[426]), 792]),/*but_d_o),_mime-asmime            2 23 42n0d54nid_objs[426]),b73d" */
but_d_o),_d_ob */
&(ni           2 23 42n0d55nid_objs[426]),574d" */
but_d_o),_210 */
&(ni            2 23 42n0d56439]7]),/* "pil,75d" */
but_d_o),_210 */
&(nid           2 23 42n0d57,/* "noRevAvail576d" */
but_d_o),_"/* "id-smime-aa-      2 23 42n0d58nid_objs[426]),d77d" */
but_d_o),_cationv),/* "          2 23 42n0d59439]7]),/* "pil57smime-abut_d_o),_cation/
&s* "          2 23 42n0d60d_objs[499]),/*i79d" */
but_d_o),_e-aa-receismim         2 23 42n0d61439]7]),/* "pil580d" */
but_d_o),_-sm),/* "              2 23 42n0d62nid_objs[426]),58-smime-but_d_o),_-js[248]),             2 23 42n0d63nid_objs[426]), 892]),/*but_d_o),_sseData"               2 23 42n0d64nid_objs[426]),b83d" */
but_d_o),_,-ct-TSTInfo           2 23 42n0d65nid_objs[426]),584d" */
but_d_o),_210])v[248]),          2 23 42n0d66439]7]),/* "pil,85d" */
but_d_o),_210])/
&s* "           2 23 42n0d67,/* "noRevAvail586d" */
but_d_o),_&s[200]),/             2 23 42n0d68nid_objs[426]),d87d" */
but_d_o),_is[200]),/*            2 23 42n0d69439]7]),/* "pil58smime-abut_d_o),_/-smime-mo             2 23 42n0d70d_objs[499]),/*i8-smime-but_d_o),_/spq-ets-sqt-          2 23 42n0d71439]7]),/* "pil590d" */
but_d_o),_-eSignv[248]),         2 23 42n0d72nid_objs[426]),59-smime-but_d_o),_-eSign/
&s* "          2 23 42n0d73nid_objs[426]), 992]),/*but_d_o),_p" */
&(nid_objs       2 23 42n0d74nid_objs[426]),b93d" */
but_d_o),_
&(nid_objs[241]       2 23 42n0d75nid_objs[426]),594d" */
but_d_o),_]),/* "mobile          2 23 42n0d76439]7]),/* "pil,95d" */
but_d_o),_2s" */]),/             2 23 42n0d77,/* "noRevAvail596d" */
but_d_o),_&]),00]),/*            2 23 42n0d78nid_objs[426]),d97d" */
but_d_o),_i-eSigPoli             2 23 42n0d79439]7]),/* "pil59smime-abut_d_o),_/&(nid_objs[244]),     2 23 42n0d80d_objs[499]),/*i9-smime-but_d_o),_/*/
&(nid_objs[242]),  2 23 42n0d81439]7]),/* "pil600d" */
but_d_o),_alg" */
&(nid_objs     2 23 42n0d82nid_objs[426]),60-smime-but_d_o "n_genC/* "              2 23 42n141439]7]),/* "pil602smime-but_d_o "n_mie-aa                2 23 42n143nid_objs[426]),e03smime-but_d_o "n_648]),/*              2 23 42n144nid_objs[426]),604smime-but_d_o "n_648Ano                2 23 42n145nid_objs[426]),6bjs[353]but_s o "n_649]),                2 23 42n147,/* "noRevAvail606s[353]but_s o "n_cv                    2 23 42n148nid_objs[426]),)20d" */
but_d_otRef_i-eS                 2 23 42n3d0d_objs[499]),/*621d" */
but_d_otRef_ontentT              2 23 42n3d1439]7]),/* "pil6492]),/*but_d_otRef_equivalen            2 23 42n3d2nid_objs[426]),623d" */
but_d_otRef_&(nid_               2 23 42n3d3nid_objs[426]),e07d" */
but_d_o_plobjs_" */              2 23 42n5d0d_objs[499]),/*60smime-abut_d_oommi_veTimeStam           2 23 42n7d0d_objs[499]),/*609mime-abut_d_oommi_&(nid_ob             2 23 42n7d1439]7]),/* "pil610mime-abut_d_oommi_e-aa-ets-            2 23 42n7d2nid_objs[426]),611mime-abut_d_oommi_&[233]),/* "i        2 23 42n7d3nid_objs[426]),e12mime-abut_d_oommi_mentType"            2 23 42n7d4nid_objs[426]),6/]),/* "but_d_oommi_se"Exo               2 23 42n7d5nid_objs[426]),614),/* "but_d_oommi_se"d_obj             2 23 42n7d6439]7]),/* "pil615),/* "but_d_oommi_ontentType" */
&     2 23 42n7d7,/* "noRevAvail6* "id-smbut_s_oommi_crypKeyPref" */      2 23 42n7d8nid_objs[426]),)o7d" */
but_d_oommi_c-smime-aa           2 23 42n7d9439]7]),/* "pil61smime-abut_d_oommi_equivalen            2 23 42n7d10d_objs[499]),/*619mime-abut_d_oommi_dvcs-dvc" */
&(nid   2 23 42n7d11439]7]),/* "pil636d" */
but_d_o_s[359_),/*_,/*           2 23 42n8d1439]7]),/* "pil640d" */
but_d_o_s[359_),/*               2 23 42n8d4nid_objs[426]),641d" */
but_d_o_s[359_objs[272])         2 23 42n8d5nid_objs[426]),637d" */
but_d_o_s[359_ "id-p             2 23 42n8d30d_objs[499]),/*638d" */
but_d_o_s[359__objs[258]),/*     2 23 42n8d34nid_objs[426]),6d-smime-but_d_o_s[359_JCB                2 23 42n8d35nid_objs[426]),184d" */
but_X9_57,,,,,,,,,,,,,,,,,,,,,,,,142 840d10040d_objs[499]),/*4bjs[353]but_ansi_X9_6(                   142 840d10045nid_objs[426]), 8-smime-but_Ens[2prisen                  143n64144n1439]7]),/* "pil504smime-but_ */
_mhn                     143n64147,1439]7]),/* "pilo04smime-but_ [407]),/*                   143n1443n2n3nid_objs[426]),29d" */
but_des_ecb,,,,,,,,,,,,,,,,,,,,,,143n1443n2n6439]7]),/* "pil31d" */
but_des_cbc,,,,,,,,,,,,,,,,,,,,,,143n1443n2n7,/* "noRevAvaila5d" */
but_des_ofb64n,,,,,,,,,,,,,,,,,,,143n1443n2n8nid_objs[426]),30d" */
but_des_cfb64n,,,,,,,,,,,,,,,,,,,143n1443n2n9439]7]),/* "pil377d" */
but_ "id-mod-dvc,,,,,,,,,,,,,,,,,143n1443n2n11439]7]),/* "pil67d" */
but_osa_(                        143n1443n2n12nid_objs[426]),66d" */
but_osas5D "s2                   143n1443n2n13nid_objs[426]),492]),/*but_dhanid_obj]),/* "id-         143n1443n2n15nid_objs[426]), 2d" */
but_des_ede_ecb,,,,,,,,,,,,,,,,,,143n1443n2n17,/* "noRevAvaila12]),/*but_dha                        ,,143n1443n2n18nid_objs[426]),)42]),/*but_dha1                       ,,143n1443n2n26439]7]),/* "pil70d" */
but_osas5D "s21_(                143n1443n2n27,/* "noRevAvail*15),/* "but_dh-3nid_obj                ,,143n1443n2n29439]7]),/* "piloo7d" */
but_bjsemd16i                  ,,143n3643n2n1439]7]),/* "pilo43d" */
but_dxn_o                       ,143n1014144n1439]7]),/* "pil624d" */
but_d_o_" */
&(nid_o            ,2 23 42n3d0d0d_objs[499]),/*625),/* "but_d_o_b(nid_obj               ,2 23 42n3d0d1439]7]),/* "pil626d" */
but_d_otRef_equiv_EMV           ,2 23 42n3d2n1439]7]),/* "pil627d" */
but_d_otRef_equiv_),/* "i       ,2 23 42n3d2n2nid_objs[426]),628d" */
but_d_otRef_&(nid__CVM          ,2 23 42n3d3d3nid_objs[426]),e29d" */
but_d_otRef_&(nid__T2           ,2 23 42n3d3d4nid_objs[426]),630d" */
but_d_otRef_&(nid__d-m          ,2 23 42n3d3d5nid_objs[426]),6492]),/*but_d_o_s[359_objs[             ,2 23 42n8 60-1439]7]),/* "pilo24d" */
but_rle_com),/* _sL             ,1414141466641439]7]),/* "pil125),/* "but_zlib_com),/* _sL             1414141466642nid_objs[426]), 1d" */
but_ "idsi                      ,142 840d113549439]7]),/* "pil185d" */
but_X9c-            







    ,142 840d10040d4nid_objs[426]),527d" */
but_s[41]),         







    ,143n64145n5d7,/* "noRevAvail5bjs[353]but_ */
_mhn__objs[50






    ,143n64147n141439]7]),/* "pil506s[353]but_ */
_mhn_(nid_o 







    ,143n641474142nid_objs[426]),11/
&(nidbut_rjsemd16inid_obj







    ,143n3643n34142nid_objs[426]),631d" */
but_d_otRef_GenC/* "gr-          2 23 42n3d3d3n1439]7]),/* "pil6392]),/*but_d_otRef_e2]),   







    ,2 23 42n3d3d4n1439]7]),/* "pil633d" */
but_d_otRef_T2d_objtxm           2 23 42n3d3d4n2nid_objs[426]),634d" */
but_d_otRef_equICCsi"            2 23 42n3d3d5n1439]7]),/* "pil635d" */
but_d_otRef_SecDevSi"            2 23 42n3d3d5n2nid_objs[426]),Ut6s[353]but_ucT                 







 0d942342n19200300d_objs[499]),/* 92]),/*but_-DVC                







 142 840d11354941439]7]),/* "pild_1d" */
but_hold_ir
&(nid_ob_none






 142 840d10040d2n1439]7]),/* "pil4392]),/*but_hold_ir
&(nid_ob_call_js[6oc 142 840d10040d2n2nid_objs[426]),Ut32]),/*but_hold_ir
&(nid_ob_re9]),




 142 840d10040d2n3nid_objs[426]),116d" */
but_osa                 







 142 840d10040d4n1439]7]),/* "pil1/]),/* "but_osas5D "s21         







 142 840d10040d4n3nid_objs[426]),406s[353]but_X9_6(_)objs_),/*    







 142 840d10045n141439]7]),/* "pil407d" */
but_X9_6(_cha-sms[2istic_two_),/*  142 840d10045n142nid_objs[426]),U0smime-abut_X9_6(_s[4ecKey Us
&(







 142 840d10045n2n1439]7]),/* "pil416d" */
but_ecosa_nid__"s21         




142 840d10045n4n1439]7]),/* "pil25smime-abut_s[41]),_mod                  143n64145n5d7,0d_objs[499]),/*175d" */
but_s[41c                        143n64145n5d7,1439]7]),/* "pil259d" */
but_s[4qo                       ,143n64145n5d7,2nid_objs[426]),12smime-abut_s[4k_                       ,143n64145n5d7,3nid_objs[426]),260d" */
but_s[4io                       ,143n64145n5d7,4nid_objs[426]),261mime-abut_s[41])_                      143n64145n5d7,5nid_objs[426]),26&d" */
but_,/*alg                       143n64145n5d7,6439]7]),/* "pil263d" */
but_,/*cmc,,,,,,,,,,,,,,,,,,,,,, 143n64145n5d7,7,/* "noRevAvail2)42]),/*but_RevAed                  ,,,, 143n64145n5d7,8nid_objs[426]),265d" */
but_s[41da                 





143n64145n5d7,9439]7]),/* "pil266d" */
but_,/*aca                 





143n64145n5d7,10d_objs[499]),/*267d" */
but_s[4qVC                






143n64145n5d7,11439]7]),/* "pil26smime-abut_s[4cco                       143n64145n5d7,12nid_objs[426]),176d" */
but_,/*ad                        143n64145n5d7,48nid_objs[426]),d07d" */
but_s[4hex_pbjtial_50]),/*       143n641474141414id_objs[426]),d08d" */
but_s[4hex_multipbjt_50]),/*     143n64147414142nid_objs[426]),57d" */
but_n_osca1c                     2d164840d1d113730d_objs[499]),/*437d" */
but_&(nit                        0d942342n19200300d100d_objs[499]),/*186d" */
but_JECTo                        142 840d1135494141439]7]),/* "pil27d" */
but_JECT3                        142 840d1135494143nid_objs[426]),187d" */
but_JECT5                        142 840d1135494145nid_objs[426]),20d" */
but_JECT7,,,,,,,,,,,,,,,,,,,,,,,,142 840d1135494147,/* "noRevAvaila7d" */
but_JECT9                        142 840d1135494149439]7]),/* "pil 3d" */
but_md(                          142 840d11354942n2nid_objs[426]),257d" */
but_md4n,,,,,,,,,,,,,,,,,,,      142 840d11354942n4nid_objs[426]), 4smime-but_ [4n,,,,,,,,,,,,,,,,,,,      142 840d11354942n5nid_objs[426]),163d" */
but_hmacs5D "s21         







142 840d11354942n7,/* "noRevAvail*/
&(nidbut_rc2_cbc,,,,,,,,,,,,,,,,,,,,,,142 840d11354943d2nid_objs[426]), 5
&(nidbut_rc4n,,,,,,,,,,,,,,,,,,,      142 840d11354943d4nid_objs[426]),44d" */
but_des_ede3_cbc,,,,,,,,,,,,,,,,,142 840d11354943d7,/* "noRevAvail*20d" */
but_rc5_cbc,,,,,,,,,,,,,,,,,,,,,,142 840d11354943d8nid_objs[426]),)43d" */
but_des_cdmf                     142 840d11354943d10d_objs[499]),/*409mime-abut_X9_6(_)objs]),/*             142 840d10045n3n141439]7]),/* "pil410mime-abut_X9_6(_)objs]),/2             142 840d10045n3n142nid_objs[426]),U1cd" */
but_X9_6(_)objs]),/3             142 840d10045n3n143nid_objs[426]),4o&d" */
but_X9_6(_)objss[418             142 840d10045n3n144nid_objs[426]),4/]),/* "but_X9_6(_)objss[412             142 840d10045n3n145nid_objs[426]),414),/* "but_X9_6(_)objss[413             142 840d10045n3n146439]7]),/* "pil415),/* "but_X9_6(_)objss423]             142 840d10045n3n147,/* "noRevAvail2)9d" */
but_s[41]),1_exp/
&(t_88         143n64145n5d7,0d1439]7]),/* "pil270d" */
but_s[41]),1_),/*
&(t_88         143n64145n5d7,0d2nid_objs[426]),271mime-abut_s[41]),1_exp/
&(t_93         143n64145n5d7,0d3nid_objs[426]),272d" */
but_s[41]),1_),/*
&(t_93         143n64145n5d7,0d4nid_objs[426]),273d" */
but_,/*mod_crmf                  143n64145n5d7,0d5nid_objs[426]),274d" */
but_,/*mod_cmc,,,,,,,,,,,,,,,,,,,143n64145n5d7,0d6439]7]),/* "pil275d" */
but_s[4mod_kea_)oofile_88        143n64145n5d7,0d7,/* "noRevAvail276d" */
but_,/*mod_kea_)oofile_93        143n64145n5d7,0d8nid_objs[426]),277d" */
but_,/*mod_cm_                   143n64145n5d7,0d9439]7]),/* "pil278d" */
but_,/*mod_q* "unstd_&(ni_88     143n64145n5d7,0d10d_objs[499]),/*279d" */
but_,/*mod_q* "unstd_&(ni_93     143n64145n5d7,0d11439]7]),/* "pil280d" */
but_,/*mod_bjs[161])_c-eS        143n64145n5d7,0d12nid_objs[426]),2-cd" */
but_id_mod_tbjsstamp_)ootocol    143n64145n5d7,0d13nid_objs[426]),282d" */
but_id_mod_ocs_                  143n64145n5d7,0d14nid_objs[426]),283d" */
but_,/*mod_dvVC                

143n64145n5d7,0d15nid_objs[426]),284d" */
but_,/*mod_cmp200i               143n64145n5d7,0d16439]7]),/* "pilo77d" */
but_,nfo*acc]),                  143n64145n5d7,141439]7]),/* "pil285d" */
but_biomes[1cnid_                143n64145n5d7,142nid_objs[426]),2-6d" */
but_mole" */
&et                 143n64145n5d7,143nid_objs[426]),287d" */
but_ac_auditEnt" *














143n64145n5d7,144nid_objs[426]),288d" */
but_ac_o542])pe"            




143n64145n5d7,145nid_objs[426]),289d" */
but_aa */
roon                   143n64145n5d7,146439]7]),/* "pil290d" */
but_dbqp_/
&(nid_obj             143n64145n5d7,147,/* "noRevAvail29-smime-but_dbqp_(nid_objs[278]),        143n64145n5d7,148nid_objs[426]),2992]),/*but_dbqp_rt-93" */
&(nid_        143n64145n5d7,149439]7]),/* "pil397d" */
but_ac_)ooxype"            




 143n64145n5d7,1410d_objs[499]),/*39smime-abut_d,nfo*acc]),                 143n64145n5d7,1411439]7]),/* "pil1)42]),/*but_Revqt_cpC                



143n64145n5d7,2n1439]7]),/* "pil1)52]),/*but_Revqt_,/* "do            



143n64145n5d7,2n2nid_objs[426]),293d" */
but_* "nsSGC"                



143n64145n5d7,2n3nid_objs[426]),129d" */
but_d_rvoc_a-aa                 ,143n64145n5d7,3n1439]7]),/* "pil130d" */
but_cli/
&_a-aa                 ,143n64145n5d7,3n2nid_objs[426]),1_1d" */
but_co *_bjs[                



143n64145n5d7,3d3nid_objs[426]),1392]),/*but_etntr_)ooteco                143n64145n5d7,3d4nid_objs[426]),294d" */
but_ipsecEnd278 */               143n64145n5d7,3d5nid_objs[426]),295d" */
but_ipsecTentTy              



143n64145n5d7,3d6439]7]),/* "pil296d" */
but_ipsecUsa-                   
143n64145n5d7,3d7,/* "noRevAvail*t32]),/*but_tbjs_stamp                  
143n64145n5d7,3d8nid_objs[426]),180d" */
but_OCSP_bjs[                



143n64145n5d7,3d9439]7]),/* "pil297d" */
but_dvVC                

   



143n64145n5d7,3d10d_objs[499]),/*298d" */
but_,/*(t_caPootEnci-eS          143n64145n5d7,4n1439]7]),/* "pil299d" */
but_,/*(t_bjs[KeyPairT
&(n       143n64145n5d7,4n2nid_objs[426]), 00d" */
but_s[4io_encKeyPairT
&(n        143n64145n5d7,4n3nid_objs[426]), 01d" */
but_s[4io_preferred27mmAlg       143n64145n5d7,4n4nid_objs[426]), 02d" */
but_,/*(t_caKeyUp/
 onid_        143n64145n5d7,4n5nid_objs[426]), 03d" */
but_,/*(t_currentCRL    

   



143n64145n5d7,446439]7]),/* "pil304d" */
but_,/*(t_unsupportedOIDn        143n64145n5d7,4n7,/* "noRevAvail*05d" */
but_,/*(t_bubjs[532]),]),/sst    143n64145n5d7,4n8nid_objs[426]),306d" */
but_,/*(t_bubjs[532]),])sponse   143n64145n5d7,4n9439]7]),/* "pil307d" */
but_s[4in_keyPairPara"mob        143n64145n5d7,4n10d_objs[499]),/*308d" */
but_,/*(t_keyPairPara"mop        143n64145n5d7,4n11439]7]),/* "pil-09d" */
but_,/*(t_revPassphrase 

   



143n64145n5d7,4412nid_objs[426]),310d" */
but_s[4io_),/*
&(t */fir,        143n64145n5d7,4413nid_objs[426]),311d" */
but_s[4io_c*/fir,WaitT "i       ,143n64145n5d7,4414nid_objs[426]), 12d" */
but_,/*(t_origPKIM0]),/*        ,143n64145n5d7,4415nid_objs[426]), 13d" */
but_,/*regCtrl                   143n64145n5d7,5n1439]7]),/* "pil-14d" */
but_,/*regnid_                   143n64145n5d7,5n2nid_objs[426]),323d" */
but_,/*alg_des4i                 143n64145n5d7,641439]7]),/* "pil-24d" */
but_,/*alg_nod-mod-dvc,,,,,,,,,,,143n64145n5d7,642nid_objs[426]),325d" */
but_,/*alg_dh_bjs_hmac_dha1      143n64145n5d7,643nid_objs[426]),326d" */
but_,/*alg_dh_pop                143n64145n5d7,644nid_objs[426]), 27d" */
but_s[4cmc_se" usnid_            143n64145n5d7,7,1439]7]),/* "pil-28d" */
but_s[4cmc_ilTitle"c"setAt       143n64145n5d7,7,2nid_objs[426]),329d" */
but_s[4cmc_ilTitltyPooof         143n64145n5d7,7,3nid_objs[426]),330d" */
but_s[4cmc_/
 CRe-dvn            143n64145n5d7,7,4nid_objs[426]), 31d" */
but_s[4cmc_transaid_obId         143n64145n5d7,7,5nid_objs[426]), 32d" */
but_s[4cmc_senderNo[56           143n64145n5d7,7,6439]7]),/* "pil333d" */
but_,/*cmc*recipi/
&No[56        143n64145n5d7,7,7,/* "noRevAvail*34d" */
but_,/*cmc*addExten _sLs         143n64145n5d7,7,8nid_objs[426]),335d" */
but_,/*cmc**/
&(niu
POP          143n64145n5d7,7,9439]7]),/* "pil336d" */
but_s[4cmc_/e
&(niu
POP          143n64145n5d7,7,10d_objs[499]),/*337d" */
but_s[4cmc_lraPOPWitn]),         143n64145n5d7,7,11439]7]),/* "pil-38d" */
but_s[4cmc_g_oomeS               143n64145n5d7,7,15nid_objs[426]), 39d" */
but_s[4cmc_g_ooRL    

   



   143n64145n5d7,7,16439]7]),/* "pil340d" */
but_s[4cmc_revoke]),/sst    

   143n64145n5d7,7,17,/* "noRevAvail*41d" */
but_s[4cmc_regnid_               143n64145n5d7,7,18nid_objs[426]),342d" */
but_s[4cmc_r)sponsenid_          143n64145n5d7,7,19439]7]),/* "pil343d" */
but_,/*cmc*,/sryPendpe"          143n64145n5d7,7,21439]7]),/* "pil-44d" */
but_,/*cmc*popLinkRandom         143n64145n5d7,7,22nid_objs[426]),345d" */
but_,/*cmc*popLinkWitn]),        143n64145n5d7,7,23nid_objs[426]),346d" */
but_s[4cmc_c*/fir,omeSAcc]pts[56 143n64145n5d7,7,24nid_objs[426]), 47d" */
but_s[4_o_pers),RRe-aa           143n64145n5d7,8n1439]7]),/* "pil-4smime-abut_s[41da_/
 oOfBiraa           143n64145n5d7,941439]7]),/* "pil-49mime-abut_s[41da_placoOfBiraa          143n64145n5d7,942nid_objs[426]),351mime-abut_s[41da_gender    

   



   143n64145n5d7,9,3nid_objs[426]),352mime-abut_s[41da_)"timeSPv8"pil1/]),/* 4145n5d7]7,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nid_8       r,WaitT,9,3nP  r,WaitT,9,3nid_
n(ff]7]),/* "pil3c143n64145n5d7,7,2rs]),35 "pi7]),uGBc0inid_objs[426]), 39d7id_8       r,Wait553n64145n5d7,7,2rs]SGC" IsenderN  r,WaitT,9,3nid_8    1,0d5nid_objs[426])35" */
but_,/*ad   41]),gr,oIsenderN  r,WaT,9,3nid_8    1,0 r,WaitT,9,3nid_8 7 */
but_,/*ad   4grouaPootEnci-eS      T,9,3nid_8    1,0itT,9,3nid_8      8 */
but_,/*ad   4  2 5n29416439]7]),/* T,9,3nid_8    1,0(ff]7]),/* "pil3c 02d" */
but_,/   49,3r
&(

    ,2 23 42n3d3d4n14_8    1,0,7,19439]7]),/* "e-abut_s[41])_  cs[4modQCSyntax_p/
&(t_933n641474141414id_id_8       r,Wait*/
but_,/*cmc,,cc/*r(

    ,2 23 42n(t_933n641474141414i,3n1439]7]),/* "pi3,/*but_RevAed  cc/*es4     2 23 42n0d18ni3n641474141414i,3d5nid_objs[426])3*/
but_s[41da  cc/*es4rase 

   
2n0d18ni3n641474141414i,3d6439]7]),/* "pil]),2-cd" */
adut_,/
    ,2 23 42n(t_938ni3n6414741414144,9,3nid_objs[426])1]),282d" */
adu  4







    ,2 23 42n(t3n6414741414144,9d5nid_objs[426])3*3,282d" */
adut_,/St_ca_,/* "do         3n6414741414144,9 r,WaitT,9,3nid_8129d" */
butaomes[1cnid_                 3n6414741414144,9il586d" */
but_d_opil27d" */
but_JEC      eaPOPWitn           142 840d11354),b93d" */
but_d_opil27d" */
but_JEC *rec_ 2 23 42n5nid_o     142 840d11354n3nid_objs[426]),4opil27d" *//
butAod_dvVC  2 23 42n8d4nid      142 840d11354941n1439]7]),/* "pil19pil27d" *//
butAod_dvVC Syntax42n8d4nid      142 840d1135494145n3n146439]7]),/pil343d" */
/
butO 2 5nm),/*                   142 840d1135494143d10d_objs[499]),1l343d" */
/
butGroua1cnid_                   142 840d11354941n4145nid_objs[426]]),311d" */
castbut_X9_6(_)objs]),/2            142 83,3d1bjs[4145nid_objs[426],323d" */
bupbe    Nd_o0*bwlA_(,3nP  r,WaitT,9,O




                 sa1                  be    Nd_o0*bwlA_(,,,,,,,,     142 840d113 54942n7,/* "n2but_dha1                    o0*bwlA_(,,,,,,,,d_objs[499]),/*95d*520d" */
but4but_dha1                    o0*bwlA_(,,,,,,,,     142 840d113 8520d" */
but5but_dha1                    o0*bwlA_(,,,,,,,,414141466641439]7/* "pil624d" */
but_d_1                   o0*bwlA_(,,,,,,,,414141466642nid_ob4           saOAEP1         SET           o0*bwlA_(,,,,,,,,  



143n64145n58520d" */
bdhKeyAgre*


















                        142 840d113 9s[4145nid_objs[426]2323DES
bupbe    N                     43n2n7,/* "noRevAvs[4145nid_objs[426],323DES
bupbe    N                     18ni3n64147414141414id_objs[4objs[426]2323RC2
bupbe    N                     3n641474142nid_ob69s[4145nid_objs[426]5323RC2
bupbe    N                           143n64145n5dvs[4145nid_objs[42),44323DES
bupbe    N                    423 42n3d2n2nid_ob14id_objs[4objs[42),44323RC2
bupbe    N                    4

 142 840d113549,3nid_8       rbkdfjs[426]),163d" */
but                   4      143n64145n5/
but_iryptiobesut_des_ede_ecb,,,,,,,,,,,,,                 418ni3n641474141414js[4145nid_obmac[426]),20d" */
but_JECT7,,                 4     
143n64145n5
but_iryptiojs[4        143nid_objs[426],,,,,,,,,,,,,,,,,        143n64145n52but_iryptiojs[4 on/
&(nid_obj  bjs[426],,,,,,,,,,,,,,,,,       ,143n64145n53but_iryptiojs[4 envelop&(nid_obj  bjs[4,,,,,,,,,,,,,,,,,        143n64145n54but_iryptiojs[4 on/
&(323Envelop&(nid_o,,,,,,,,,,,,,,,,,       
143n64145n55but_iryptiojs[4  ig */
but_,/*cj  bjs[4,,,,,,,,,,,,,,,,,  , 143n64145n5d7,8nbut_iryptiojs[4 en]), 39dt_,/*cj  bjs[4,,,,,,,,,,,,,,,,,          143n641458but_iryptiojs[9]),/*                2 5,,,,,,,,,,,,,,,,,       142 840d11359but_iryptiojs[9]bjs[437]),/* "pi    2 5,,,,,,,,,,,,,,,,,           142 840d0but_iryptiojs[9]pild" _mentType"       ,,,,,,,,,,,,,,,,,  id_objs[426]),3-2dbut_iryptiojs[9]/
but_JDig */
but_,/*cj,,,,,,,,,,,,,,,,,  2n0d7,/* "noRevAvabut_iryptiojs[9]objs[71]),/Type"       ,,,,,,,,,,,,,,,,,   42n0d78nid_objs[3but_iryptiojs[9]piuut_ds27d" */
but_s[4,,,,,,,,,,,,,,,,,   42n0d29439]7]),/*but_iryptiojs[9]phallenge]), woB       ,,,,,,,,,,,,,,,,,   42n0d40d_objs[499but_iryptiojs[9]bjs[437]),/*           ,,,,,,,,,,,,,,,,,   42n0d51439]7]),/*but_iryptiojs[9])xail*4"pil19pils      ,,,,,,,,,,,,,,,,,  js[426]),107d" */
7,3d6439]7])xs[42mime-               2 5,,,,,,,,,,,,,,,,,   3n641474142nid_ob6d" */
but_d_MIMECquivalen            2 5,,,,,,,,,,,,,,,,,   3n64144n1439]7]),/8" */
but_d_MIMEime-               2 5 5,,,,,,,,,,,,,,,,,   * "pilo7d" */
but_*but_iryptifriendl            2 5n4410d_,,,,,,,,,,,,,,,,,          142 83,3d1 1,0 r,WaitT),/* KeyID              2 5 5,,,,,,,,,,,,,,,,,  ,/* "noRevAvail*js499]),/*625)ms_csp55]),/* "unstr         nid_    g   3
&(t        143n64145n5d7,149439]7]dc]),/pi-               2 5 5,,d_    g   14r,W33 42n0d47,/* "noRd7,1410d_objbf7]),/* "pil410mime-abut_X9 nid_    g   3023ni,d_objs[499]),/*9519d7id_8       * "pil- * "_gI            nod-mod-dvc,,,,,,,,,,,,,143n64145n5d6d7id_8       * "pil- 3c143n64145or     nod-mod-dvc,,,,,,,d_objs[499]),/*9517d7id_8       * "pil- pki" */
b45n5d7,7,2nod-mod-dvc,,,,,,,        143n64145n8d7id_8       * "pil- pkiArchiveO     s2nod-mod-dvc,,,,,,,       143n64145n59d7id_8       * "pil- old_d_o)D         nod-mod-dvc,,,,,,,443n2n26439]7]),/*0d7id_8       * "pil- p*/
but_1   ut_s[4nod-mod-dvc,,,,,,, 42n3d3d4n14_8   21d7id_8       * "7,7,_utf8]),3/
but_s[4cmc_revoke]),/s        143n64145n5d322d7id_8       * "7,7,_ci_se"dme-abut_X9 nid_    e]),/s    2n(t3n6414741414141439]7]),/* "pi2smi]),/*d_ir
me-abut_X9 nid_    e]),/s4 42n0d0d_objs[499]),3,12nid_objs[426i2smi]),/*" */
but_,/*cmc**/
&(niu
POP  4 42n2n(t3n641474141414s[426]),11/
&(nidbi]),/*CrlID           */
&(niu
POP  4 42n    3n641474141414id_objs[426]),12smi]),/*abut_s[ble/
but_s[s2nod-mod-dvc,,,4 42n       143n64145nd7,0d3nid_objs[426]i]),/*noChe */
but_ac_nod-mod-dvc,,,4 42n443n2n26439]7]),/d7,0d4nid_objs[426]i]),/*archive8n    3n64147414141wse mon
but_plrc-tlseu,7,_utf8]),3/
bn
but_6ephoneNumber" */
43n64145n5d322d7id_8       * "7,7,_ci_se"dme-abut_X9 nid_    e]),/s    2n(t3n6414741414d322d7id_8       * "7,7,_ci_se"943d8nid_objs[426]l276d" */
but_,/*m641474ec_ 2dedSc_tra       * "7,7,_ci_se"5d7,7,23nid_objs[),277d" */
but_,/*m64147429435od-mod-dvc,,,4 42n       143n6 2d" */
but_des_ed4277d" */
but_,/*m641474paentTy         42n2n(t3n641474141415d7,7,17,/* "noRee-abut_s[41])_  /*m641474   st2n7d4nid_ob42n2n(t3n641474141415d7,149439]7]dc]),)1]),282d" *es_128    ,,143n1443n2n294394nid      1401 00d_ob5d7,149439]7]dc]),91]),282d" *es_128           nod-mod-dvc4nid      1401 00d_ob11354941n1439]7])"7,7,_utf8])*es_128 ofb128    nod-mod-dvc4nid      1401 00d_ob0d" */
but_osas5D 11]),282d" *es_128  fb128    nod-mod-dvc4nid      1401 00d_ob11354941n4145nid_smi]),/*d_ir*es_192    ,,143n1443n2n294394nid      1401 00d_obn5d7,149439]7]dc]) on/
&(323En*es_192           nod-mod-dvc4nid      1401 00d_ob111354941n1439]7])"4n/
&(323En*es_192 ofb128    nod-mod-dvc4nid      1401 00d_obd7,942nid_objs[424 en]), 39dt_*es_192  fb128    nod-mod-dvc4nid      1401 00d_obd11354941n4145nid_s6n]), 39dt_*es_256    ,,143n1443n2n294394nid      1401 00d_ob564d" */
but_d_o)4), 31d" */
b*es_256           nod-mod-dvc4nid      1401 00d_ob,65d" */
but_d_o)428 31d" */
b*es_256 ofb128    nod-mod-dvc4nid      1401 00d_ob566d" */
but_d_o)429 31d" */
b*es_256  fb128    nod-mod-dvc4nid      1401 00d_ob511354941n4145nid   e]),/s    */
but_JEC *rvVC  2 23 42n8d4nid      142 840dob5d7,149439]7]dc]]l276d" */
b */
but_J*/
e_ug_dh_bjs_hmac_4nid      142 840dob65d" */
but_d_o)       2 5n44*/
but_J,/*cd-dvc,_ug_dh_bjs4nid      142 840dob66d" */
but_d_o)d4277d" */
b */
but_JEaJ,/*cd-dvc,_ug_dh_4nid      142 840dob11354941n4145nid 5     2 5n44*/
but_J,/newal_ug_dh_bjs_hm4nid      142 840dob943d8nid_objs[42"pil280d" */ */
but_JEaJ    2 2ug_dh_bjs_4nid      142 840dob5d7,7,23nid_objs7426]),187d" */
but__sslbut_ipse 2 5 5,,d4nid      142 840dob565d" */
but_d_o) _d_opil27d" */
but_JEom                 4nid      142 840dob566d" */
but_d_o)d]),4opil27d" *//
butEC *rspopL
&(niu
POP4nid      142 840d11                  ]),4opil27d"s_sg        nod-mod-dvc,,,,,4nid      142 840dd7,4n5nid_objs[4264t_d_opil27d"ust_,/       nod-mod-dvc,,,,,2n8d4nid      142 840d11,4n5nid_objs[4264t]),4opil27dut_eke]odedOR5,,,,,,,,,,,,,,,2n8d4nid      142 840d1165d" */
but_d_o)4pi3,/*but_Rerfc8222 5nbo-          2 23 42n8d4nid      142 840d1166d" */
but_d_o)4])3*/
but_s[4lg_dh_pop             2 23 42n8d4nid      142 840d1111354941n4145nid_4        143favo5n1 eDrink         2 23 42n8d4nid      142 840d11n5d7,0d2nid_objs[d_8129d" */
room "pilo7d" */
but_orgbjs 42n8d4nid      142 840d119but_iryptiojs[9]_d_opil27d" phc_rh_pop             2 23 42n8d4nid      142 840d11942n5nid_objs[4262smi]),/*" *ust_utGroua1cnid_      2 23 42n8d4nid      142 840d115d7,7,23nid_objs4idbi]),/*Crlho[4,,,,,,,,,,,,,,,,,  2 23 42n8d4nid      142 840d11 2d" */
but_des_42smi]),/*abum43n6441439]7]),/* "pil-2]),,2n8d4nid      142 840d11,d10045n3n144nid_ojs[426]i]),/docu    js[426]),2]),/* "bu,,2n8d4nid      142 840d11,,4n5nid_objs[426426]i]),/*arcdocu    T42nid_objs[426]),10c2n8d4nid      142 840d11,65d" */
but_d_o)4o_" */
&(nid_ocu    V ,,,   o0*bwlA_(,,,,2n8d4nid      142 840d11,66d" */
but_d_o)4   e]),/s   _ocu    A 5n29_objs[426]),10c2n8d4nid      142 840d11,11354941n4145nid_]l276d" */
b_ocu    Locobjs[426]), * "i0c2n8d4nid      142 840d11,n5d7,0d2nid_objs[7l407d" */
butmeTelephcne "pilo7d" */
but2n8d4nid      142 840d116d10045n3n144nid_o_cation/
&s* "creta45nid_objs[426]), 87d"2n8d4nid      142 840d116,4n5nid_objs[4264 5     2 5n4other2 5nbo-          2 23 4"2n8d4nid      142 840d11665d" */
but_d_o)4odbi]),/*CrltGrtModod_dv,,,,,,,,,,,,,,,,"2n8d4nid      142 840d11666d" */
but_d_o)4 7bi]),/*CrltGrtModod_dvB5nid_objs[426]),2n8d4nid      142 840d116/d7,0d4nid_objs[49  e]),/s   _omainComvc,                 2n8d4nid      142 840d116n5d7,0d2nid_objs[78 31d" */
b*Recor/       nod-mod-dvc,,,,2n8d4nid      142 840d1169but_iryptiojs[9]79]7]),/pil343d" */
/
butO,,,,27d-dvc,,,,2n8d4nid      142 840d116942n5nid_objs[426]), 00d" */
mXRecor/       nod-mod-dvc,,,2n8d4nid      142 840d1165d7,7,23nid_objs4* "pilo77d" nSRecor/       nod-mod-dvc,,,2n8d4nid      142 840d116 2d" */
but_des_4_&s[200]),/  OARecor/       nod-mod-dvc,,2n8d4nid      142 840d116d10045n3n144nid_o6]),2-6d" */cNAMERecor/       nod-mod-dvc2n8d4nid      142 840d116,4n5nid_objs[4264]),287d" */
GroociatedDomain  nod-mod-dvc2n8d4nid      142 840d116942n5nid_objs[426]5,287d" */
Groociated 2 5 5,,,,,,,,,,,,,2n8d4nid      142 840d1165d7,7,23nid_objs4*6407d" */
butmePo[4a 5,,,,,,,,,,,,,,,,,,2n8d4nid      142 840d116 2d" */
but_des_4_]),163d" */
da_)"tiT42nid_objs[426]),10c2n8d4nid      142 840d119d" */
but_des_ecbendl        mobileTelephcne "pilo7d" */
b2n8d4nid      142 840d119,4n5nid_objs[4264]9]7]),/pil34n644Telephcne "pilo7d" */
bu2n8d4nid      142 840d11965d" */
but_d_o)4,/* "pil410m        Cs]),35 2 5 5,,,,,,,,2n8d4nid      142 840d11966d" */
but_d_o)49  e]),/s   organizobjs[alSc_tra  ,,,,,,,2n8d4nid      142 840d119n5d7,0d2nid_objs["pil1)52]),/ja" *2 5nbo-          2 23 4"2n8d4nid      142 840d11i69d" */
but_d_o)4),1392]),/*b  2 Pt_bubL
&(O0*bwlA_(,,,,,,2n8d4nid      142 840d11i942n5nid_objs[426),180d" */
bbuilrs), 2 5 5,,,,,,,,,,,,,,,2n8d4nid      142 840d11i5d7,7,23nid_objs4il297d" */
bdSA3 421 5n55nid_objs[426]),12n8d4nid      142 840d11i 2d" */
but_des_4_alg" */
&(nis),leLevel3 421 5n55nid_objs2n8d4nid      142 840d11nd" */
but_des_ecbn_genC/* "   SA3 421 5n55nid_objs[426]),12n8d4nid      142 840d11i 2d" */
but_des_4_alg" */
&(nis),leLevel3 421 5n55nid_objs2n8d4nid      142 840d11nd" */
but_des_ecbn_genC/* "   SA3 421 5n55nid_objs[426]),12n8d4nid      142 840d11i 2d" */
but_des_4_alg" */
&(nis),leLeve5nid_objs[426),180d" 	 r,W),277d" 0d6439]7])
&(nis) i0d2nid_objs[d_8129 */
bupbeeve5nid_objs[426),180d" 	 r,W),277d" 0d6439]7])
&(nis) i0d2n_o)4),1392]),/*b  9     Cs]),35 2 5 5id_obj               " 0d6439]7])
&(nis) i0d2n      ,,,,,,,,,,,    143n6414dITRedir 143n64145n8d7id_8   " 0d6439]7])
&(nis) i0d2n      ,,,,,,,,,,,     143n6415d7,pil-2]),,2n8d4nid      142 840d11,d10045n3n144nidid_objs[426]), 8920her2 5nbo-         22d7ish*bwlA_(,,,,2n82 840d11,d10045n3n144nidies_4_alg" */
&(ni         143nA5SmodngaitT,9,O




  ,,2n82 840d11,d10045n3n144n"but_X9_6(_)objss[41mePo[4a 5,,,aseIgnoreIA5SmodngaitT,9,O

2 840d11,d10045n3n144n"bbjs4il297d" */
bd          3nA_(,,,,,,,,,,2n8d4nid      142 840d11,d10045n3n144n                  ,    r,WaitT,A_(,,P5 2 5,,2n8d4nid      142 840d11,d10045n3n144n  ut_X9_6(_)objss[41128    nod-mc4142n-2]),,2n8d4nid      142 840d11,d10045n3n144nio_),/*
&(t */fir,49,3nid_8            2]),,2n8d4nid      142 840d11,d10045n3n144nioes_4_alg" */
&(ni bupbeeve5ni,,,,il-2]),,2n8d4nid      1442 840d11,d10045n3n144nio_ecbn_genC/* "   4cu    Locobjs[426])Ser,/*but_-DVC      42 840d11,d10045n3n144niojs[                       143]),10c2n8d4nid     DVC      42 840d11,d10045n3n144nionid_o_cation/
&s* ,,,,,,,   42=[NPo[4a 5,,,aseIgnoreIA5I8d4nid      142 84_-D      143f,426]), 4IA5I8d4nid    2 84_VC  &6]), 4IA5I8d4nid  9]7]  14C  &7eo_ecbn_genC/* "   4cu    Locobjs[ 4IA23nPooof     ,,,,   42=[NPo[4a14C  &7eo_ecbn_objs[42_se,ooof    6]),b93d" */
bmc4141,,,aseIgnoreIt
_ob4           saaseIgnoreIt
_ou,4141,,,aC  &7eo_ecbn_getipi/
&Nof     ,,,,,,,,,,,,     143n6415d7,pil-2]),,2n8d4nid      142 840d11,d10045n3n144nidid_objs[426]), 8920=d10045n3n,9,O

,,2n8d4nid      142 840d1il67  " _ecb8d4nid      1442>1]),/*  9439od-4l67  " _ecb8d4niIt
_ou,4141,,,aC  (e,ooof  o4n  u8ps        143n64145n5d7,643t        143n64145n5d7,1410d_objbf7]),/90oof  o4n  u8ps     [41mePo[4a 5,,,aseIgt        143n64145n5d7[4145nid_objs[42)91oof  o4n  u8ps     a,,,,,,,,,,,,,,,    t        143n64145n5d7_ou,4141,,,aC  (e92oof  o4n  u8ps     a         143n64145nt        143n64145n5d7t_iryptiojs[4 env93oof  o4n  u8ps     [ 143n64145n5d7,6439]7       143n64145n5d71 1,0 r,WaitT),/*94oof  o4n  u8ps     spn4410d_,,,,,,,,,,,]7       143n64145n5d7d11,4n5nid_objs[495oof  o4n  u8ps     [423 42n3d3d3n1439]7]7       143n64145n5d7d7,149439]7]dc]),/44nio_),/*
x509 e])Ls    e2n3d3d3n1439]7]7       143n64145n2_objs[426]),294d" *     2 23 42ndsi e])Ls    e2n3d3d3n1439]7]7       143n64145n2_obut_iryptiojs[4 on04nio_),/*
x509 id_            143n649]7]7       143n64145n2 "noRevAvail*t32]),144n"but_X9_6be_but_JECT7,,128BitRC4649]7]7       143n64141ntentT              1144n"bbjs4il2be_but_JECT7,,40BitRC4649]77]7       143n64141ntenbut_iryptiojs[4 o144n        2be_but_JECT7,,3_Key_Trid"         ]7       143n64141ntent_iryptiojs[4 env(nidbut_rc4n,be_but_JECT7,,2_Key_Trid"         ]7       143n64141nten1 1,0 r,WaitT),/*484n"but_X9_6be_but_JECT7,,128BitRC2     ]7       143n64141ntend11,4n5nid_objs[4494n"bbjs4il2be_but_JECT7,,40BitRC       ]7       143n64141nten
but_iryptiobesut_1oof  o4n  ms    2 5n4410d_,,,,,,,,,,,,,,,,,143n64145n5d2  142 840d116d10045n1d" */
but_s[    s[  in 143n64145n5d7,6439]7]),/* 64145n5d2  1d4nid      142 8411d" */
but_s    s[  ct */fir,49,3nid_8   ]7]),/* 64145n5d2  1dbjs[426]),180d" */6" */
but_s    tleyUp/
 onid_        143,,,,143n64145n5d609s[4145nid_objs[42613- * "_gI      ut_eke]odedOR5,,,,,,,,,,,,,,,,143n64145n5d609s[]),/* "pil297d" */8oof  o4n  ms  f          0d942342n19200300d100d64145n5d609s[risen             8oof  o4n  ms sm   card_logs* ,,,,,,,   ]7]),/* 64145n5d21439]7]),/* "pil416d6494n"bbjs4ilms up* "   4cu    Locobjs[426]7]),/* 64145n5d21439t_iryptiojs[4 env96oof  o4n  u8ps        _cms  Locobjs[426]7       143n64145n5d7,1[4145nid_objs[42)97oof  o4n  u8ps        _           



1]7       143n64145n5d7,1_ou,4141,,,aC  (e98oof  o4n  u8ps        _oid        



1]7       143n64145n5d7,1t_iryptiojs[4 env9ooof  o4n  u8ps        lmsg_            ]7       143n64145n5d7,1iryptiojs[9]bjs[400oof  o4n  u8ps        _ ts  */
bupbee    ]7       143n64145n5d7,1 "noRevAvail*/
&(n1oof  o4n  u8ps        _ ts  */
bupbee 97 ]7       143n64145n5d7,1_objs[4objs[426]202oof  o4n  u8ps        _ ts  */
8 60-1    ]7       143n64145n5d7,1_objs[426]),293d"03oof  o4n  u8ps        _ ts  */
8 60-1 97 ]7       143n64145n5d7,1_objs[426]),129d"04oof  o4n  u8ps     c 2 5ceip,,,,,,   42n0d40d_objs[499but_5d7[4iryptiojs[4  ig *05oof  o4n  u8ps     [4d-mod442>1]),/*  9n0d40d_objs[499but_5d7[4iryptiojs[4 en]),06oof  o4n  u8ps     [4dp,     LinkRandomn0d40d_objs[499but_5d7[4iryptiojs[9]),/* 07oof  o4n  u8ps     [4dTSTaa           143d40d_objs[499but_5d7[4iryptiojs[9]bjs[408oof  o4n  u8ps     [4dTDTaa           143d40d_objs[499but_5d7[4 "noRevAvail*/
&(nooof  o4n  u8ps     ct[4,,,,,,aa        43d40d_objs[499but_5d7[4_objs[4objs[426]210oof  o4n  u8ps     [4_DVCS,omeSAc442>1]43d40d_objs[499but_5d7[4_objs[426]),293d"11oof  o4n  u8ps     [4_DVCS,od_8   442>143d40d_objs[499but_5d7[4_objs[426]),129d"12oof  o4n  u8ps     aa2 5ceip,,omeSAcc]pt        143n64145n5d7_oiryptiojs[4  ig *13oof  o4n  u8ps     aa2s/
bmc41d        43d40d_objs[499but_5d7_objs[426]),295d" *14oof  o4n  u8ps     aa2mlExpandHistoIA2343d40d_objs[499but_5d7_oiryptiojs[9]),/* 15oof  o4n  u8ps     aa[4,,,,,,HinkRandomn0d40d_objs[499but_5d7id_objs[426]),)43d216oof  o4n  u8ps     aa2msg*/
,,,,,,,,,,,n0d40d_objs[499but_5d7id "noRevAvail*/
&(17oof  o4n  u8ps     a4    apC,,,,,,,,,,,n0d40d_objs[499but_5d7id_objs[4objs[426]218oof  o4n  u8ps     aa[4,,,,,,d_ocu    V n0d40d_objs[499but_5d7id_objs[426]),293d"1ooof  o4n  u8ps     aa2macValue        143d40d_objs[499but_5d7                  220oof  o4n  u8ps     a4  quival
&s*    s143d40d_objs[499but_5d7  objs[426]), 03d" 21oof  o4n  u8ps     a,[4,,,,,,R/
bdSA3 pt        143n64145n5d7_oi]),/* "pil304d" *22oof  o4n  u8ps     aa2 ,,,,,]),]ref   143d40d_objs[499but_5d7  1439]7]),/* "pil2823oof  o4n  u8ps     aa2s,,,,,, e])Ls    e243d40d_objs[499but_5d7  1bjs[426]),295d" *24oof  o4n  u8ps     aa2s            e])s143d40d_objs[499but_5d7  id_objs[426]),287d25oof  o4n  u8ps     aa[ *rec_ 2 d-dvc,,,43d40d_objs[499but_5d7  i_objs[426]),)43d226oof  o4n  u8ps     aa2 ts s/
8 60-1_Rer43d40d_objs[499but_5d7  i "noRevAvail*/
&(27oof  o4n  u8ps     a4  ts    nitm,,,,,,,,n0d40d_objs[499but_5d7id5d7,149439]7]dc])228oof  o4n  u8ps     aa[ ts s/
ner* "creta4n0d40d_objs[499but_5d7id5_objs[426]),293d"2ooof  o4n  u8ps     aa2 ts s/
ner7d" ,,,43d40d_objs[499but_5d7  i                230oof  o4n  u8ps     a4  ts i]),/*/
LinkR43d40d_objs[499but_5d7  iobjs[426]), 03d" 31oof  o4n  u8ps     a,[ ts   ,,,,,,et       43d40d_objs[499but_5d7_ob]),/* "pil304d" *32oof  o4n  u8ps     aa2 ts  e])Ls    eR f  43d40d_objs[499but_5d7_ob439]7]),/* "pil2833oof  o4n  u8ps     aa2 ts R2 2ug_dh_R f  43d40d_objs[499but_5d7_obiryptiojs[4 en]), 4oof  o4n  u8ps     aa2 ts  e])Values   43d40d_objs[499but_5d7_obd_objs[426]),287d35oof  o4n  u8ps     aa[ ts  2 2ug_dh_Values 43d40d_objs[499but_5d7_ob_objs[426]),)43d236oof  o4n  u8ps     aa2 ts escT*rec_ 2  43d40d_objs[499but_5d7_ob "noRevAvail*/
&(37oof  o4n  u8ps     a4  ts  e])CRL,et       43d40d_objs[499but_5d7_obd7,149439]7]dc])238oof  o4n  u8ps     aa[ ts  2dedScT*rec_ 2  43d40d_objs[499but_5d7_ob_objs[426]),293d"3ooof  o4n  u8ps     aa2,,,,,,,,,,,,,,,,,43d40d_objs[499but_5d7_ob                240oof  o4n  u8ps     a4 d_dv d_d        143d40d_objs[499but_5d7  42 840d116,4n5nid241oof  o4n  u8ps     alg_ESDH    3DES   143d40d_objs[499but_5d7s[4145nid_objs[426242oof  o4n  u8ps     a  _ESDH    RC2    143d40d_objs[499but_5d7_objs[426]),180d" 243oof  o4n  u8ps     a  _3DESwrap       143d40d_objs[499but_5d7s[]),/* "pil297d" 244oof  o4n  u8ps     a  _RC2wrap       1143d40d_objs[499but_5d7s[_objs[426]),)43d245oof  o4n  u8ps     a  _ESDH       



1]7       143n64145n5d79]7]),/* "pil299d" 46oof  o4n  u8ps     a  _CMS3DESwrap     ]7       143n64145n5d79]d7,149439]7]dc])247oof  o4n  u8ps     a  _CMSRC2wrap      ]7       143n64145n5d79]_objs[426]),293d"48oof  o4n  u8ps     [d_ldantax_p/
&(t_93]7       143n64145n5d71 4145nid_objs[42624ooof  o4n  u8ps     spq2 ts s78 *ri(t_93]7       143n64145n5d7vs[4145nid_objs[42250oof  o4n  u8ps     spq2 ts s78 */      ]7       143n64145n5d7vs "noRevAvail*20d" 1oof  o4n  u8ps     [4i2 ts p    OfOrigs* ]7       143n64145n5d7d7[4145nid_objs[42252oof  o4n  u8ps     [4i2 ts p    OfR5ceip,,]7       143n64145n5d7d7 "noRevAvail*20d" 3oof  o4n  u8ps     [4i2 ts p    OfDeldScIA2]7       143n64145n5d7d7]),/* "pil297d" 254oof  o4n  u8ps     c i2 ts p    OfSi7]),u]7       143n64145n5d7d7iryptiojs[9]bjs[435oof  o4n  u8ps     [422 ts p    OfApp  valu]7       143n64145n5d7d77]),/* "pil299d" 56oof  o4n  u8ps     [422 ts p    OfCrecreta4n0d40d_objs[499but_5d7d7d7,149439]7]dc]),/0oof  o4n  keyBa        143n64145n5d7,12ni       143n64141nte07[4iryptiojs[4  ig 1lenge]), woB    8ShroudedKeyBa        143ni       143n64141nte07[4_ou,4141,,,aC  (e52oof  o4n   e])Ba        143n64145n5d7,1ni       143n64141nte07[4t_iryptiojs[4 env 3oof  o4n  crlBa        143n64145n5d7,12ni       143n64141nte07[42 840d116d10045n15ut_d_o)4odbi]),/*Ba        143n64145n5d7ni       143n64141nte07[4d11,4n5nid_objs[435oof  o4n  safeC,,,,,,sBa        143n641ni       143n64141nte07[43nid_objs[426]),34oof  o4n  u8ea5d7,7,2nod-mod-dvc,,,,,,,bjs[499]),/*988 494147,/* "};

                                                                                                                                                                                                                                                                                                       Belkin_F5D9630v5.00.13_src/),/*apps/opensource/openssl/     o/o1,,,as/o1,2mac.num                   0100644 0000765 0000765 00000033465 10746105663 026321  0                                                                                                    u    ,, alex                            alex                                                                                                                                                                                                                   u7])f		0
   2 2		1
    		2
md2		3
md5		4
rc4		5
          o0*		6
          o0*bwlA_(,		7








            		8
be    N             		9
upbe    N           		10
X500		11
X509		12
   nonnis)		13
cja" *2 5nb		14
     it2 5nb		15
/
&NeOrP  vince 5nb		16
392]),/*b  2 5nb		17
392]),/*b  2 PUnit 5nb		18
   		19
    7		20
&(nid_o,,,		21
    2 5,,,,,		22
  bjs[4,,,,,,,,		23
    2 5,,,,,,,,,,,,,,,,,		24
    2 5,,,,,		25
       ,,,,,,,,		26
    3		27
e    N        		28
but_Xcb		29
but_cfb64		30
but_cbc		31
but_X9__Xcb		32
but_X9_6(Xcb		33
u8ea5d7,		34
u8ea5dfb64		35
u8ea5Xcb		36
X9_6(_)		37
X9_6Xcb		38
X9_6(fb64		39
X9_6ofb64		40
sh,		41
sh,




            		42
but_X9_6(_)		43
but_X9_6(_)o		44
but_ofb64		45
u8ea5ofb64		46
    9		47
t_,/*cj,,,,,,,,,,,		48
       ,,,,,,,,,,,,,,,		49
but_s[4,,,,,,,,,,		50
       ,,,,,,,,,,,,		51
       ,,,,,,,,,,		52
s      ,,,,,,,,,,,,,,,		53
     2 5,,,,,,,,,,,,,,,		54
       ,,,,,,,,,,,,,,,,,,		55
       2 5 5,,,,,,,,,,,		56
st_,/   		57
*//
butAod_dvVC Syntax4		58
3d" */
/
butO 2 5n		59
but_X9_6(fb64		60
but_X9_6(_fb64		61
but_X9__ofb64		62
but_X9_6(ofb64		63
sh,1		64
e    N               		65
          		66
   _2		67
*/
but_JECT7,,       		68
u8_objs[4		69
          1_2		70

but_J,/*cd-dvc,_u		71

but_JEaJ,/*cd-dv		72

but_J,/newal_ug_dh_bjs		73

but_JEaJ    2 2ug_dh_bjs_		74

but__sslbut_ipse 2 		75
/
but_JEom            		76
st_,/   EC *rspopL
&(niu		77
*//
butAod  nod-		78
st_,/       nod-mod-dv		79
butx(_)o		80
u8_dv		81
su1,,,a keyten _sLs er		82
keytu,,,,		83
 riv&Ne_keytu,,,,s[d_io,		84
su1,,,a alt&(niu		85
u  eaP alt&(niu		86
2nod-[4,,,,,ai,,s		87
crl_nzobjs		88
ce])Ls    e      i,,		89
autmeTit2 keyten _sLs er		90
5n5d7,		91
5n5Xcb		92
5n5dfb64		93
5n5ofb64		94


c2		95


c2 N     		96
X94_40		97
X9_6405d7,		98
gdSc2 5nb		99
sur(niu		100
initials		101
unimodIn _sLs er		102
crl_dis,,,,,,dh_bpoi,,s		103








  		104
sd_ialNzobjs		105
t4n64		106
butKIM0]),/		107
c        		108
c     Xcb		109
c      fb64		110
c     ofb64		111
            o0*bwlA_(,		112
          1		113



_sh,1		114
e    N     		115
   		116
Xipemd160		117
Xipemd160 N     		119
X9     		120
X9  Xcb		121
X9   fb64		122
X9  ofb64		123
rlAod  p,,,,),/		124
zlibod  p,,,,),/		125
   2keytu,,,,		126
ies_128		127
ieskp		128
sa-        		129
camp       		130
cs[      		131
             		132
_preferred		133

   s[  in 		134
    s[  ct 		135
    tleyUp/		136
   ut_		137
ms  f 		138
s  ut_		139
bultO c  		140
cnod-mas,/		141
in st2nit2     		142
sxst_		143
6be_but_JECT7,,128BitRC4		144
6be_but_JECT7,,40BitRC4		145
6be_but_JECT7,,3_Key_Trid"        		146
6be_but_JECT7,,2_Key_Trid"        		147
6be_but_JECT7,,128BitRC2    		148
6be_but_JECT7,,40BitRC2    		149
keyBa 		150
    8ShroudedKeyBa 		151
 e])Ba 		152
crlBa 		153
s]),/*Ba 		154
eafeC,,,,,,sBa 		155
       2 5 5		156
e-abut_X9 		157
x509 e])Ls    e		158
sdsi e])Ls    e		159
x509 id		160
  bjs		161
   bjs		162
_6(_)objs]),		163
u8oteco  		164
u8otec*/     		165
X9_664    		166
        2 5 5,,,,		167
upbe    N           		168
3d" */
but          		169
,,,,,,,,,,,,,        		170
ms    2 5n		171
   2 5n		172

5nb		173
bnQ]),    s		174
u8opb		175
u8_a 		176
js[        		177
s[1cnid		178
JEC      eaPO		179
_caKeyUp/		180
iso		181
meobjs_body		182
ISO_US		183
X9_57		184
X9c 		185
    ,		186
    5		187
     		188
u8_s        		189
u8ps     [4		190
u8ps     a 		191
u8ps     al 		192
u8ps     [d		193
u8ps     spn		194
u8ps     [42		195
u8_s        _cms		196
u8_s        _   		197
u8_s        _oid		198
u8_s        lmsg_  		199
u8_s        _ ts  */
bupbee   		200
u8_s        _ ts  */
bupbee 97		201
u8_s        _ ts  */
8 60-1   		202
u8_s        _ ts  */
8 60-1 97		203
u8ps     [42 5ceip,		204
u8ps     [4d-mod442>		205
u8ps     [4dp,     Link		206
u8ps     [4dTSTaa  		207
u8ps     [4dTDTaa  		208
u8ps     [4d4,,,,,,aa  		209
u8ps     [4_DVCS,omeSAc442>		210
u8ps     [4_DVCS,od_8   442>		211
u8ps     aa2 5ceip,,omeSAc		212
u8ps     aa2s/
bmc41d    		213
u8ps     aa2mlExpandHistoIA		214
u8ps     aa24,,,,,,Hink		215
u8ps     aa2msg*/
,,,,,,		216
u8ps     aa2   apC,,,,,,,,,,		217
u8ps     aa24,,,,,,In _sLs er		218
u8ps     aa2macValue		219
u8ps     aa2 quival
&s*    s		220
u8ps     aa24,,,,,,R/
bdSA3 		221
u8ps     aa2   ,,,]),]ref		222
u8ps     aa2s,,,,,, e])Ls    e		223
u8ps     aa2s            e])s		224
u8ps     aa2 *rec_ 2 d-dvc		225
u8ps     aa2 ts s/
8 60-1_R		226
u8ps     aa2 ts    nitm,,,,,,,		227
u8ps     aa2 ts s/
ner* "creta		228
u8ps     aa2 ts s/
ner,,,,		229
u8ps     aa2 ts i]),/*/
Link		230
u8ps     aa2 ts   ,,,,,,et      		231
u8ps     aa2 ts  e])Ls    eR f 		232
u8ps     aa2 ts R2 2ug_dh_R f 		233
u8ps     aa2 ts  e])Values		234
u8ps     aa2 ts  2 2ug_dh_Values		235
u8ps     aa2 ts escT*rec_ 2 		236
u8ps     aa2 ts  e])CRL,et      		237
u8ps     aa2 ts  2dedScT*rec_ 2 		238
u8ps     aa2s,,,,,,,,,,,,		239
u8ps     aa2d_dv d_d		240
u8ps     alg_ESDH    3DES		241
u8ps     alg_ESDH       		242
u8ps     alg_3DESwrap		243
u8ps     alg_RC2wrap		244
u8ps     alg_ESDH		245
u8ps     alg_CMS3DESwrap		246
u8ps     alg_CMSRC2wrap		247
u8ps     [d_ldan		248
u8ps     spq2 ts s78 *ri		249
u8ps     spq2 ts s78 */     		250
u8ps     [4i2 ts p    OfOrigs*		251
u8ps     [4i2 ts p    OfR5ceip,		252
u8ps     [4i2 ts p    OfDeldScIA		253
u8ps     [4i2 ts p    OfSi7]),		254
u8ps     [4i2 ts p    OfApp  val		255
u8ps     [4i2 ts p    OfCrecreta		256
  4		257
ies_128    		258
u8ote		259
u8pie		260
ies_12n		261
u8pal 		262
u8pcmd		263
u8ota		264
u8opd>		265
u8_ac>		266
u8pq  		267
iescce		268
ies_1281   mod-dv   		269
ies_1281 d-mod-dv   		270
ies_1281   mod-dv 93		271
ies_1281 d-mod-dv 93		272
u8p   _crmf		273
u8p   _cmd		274
u8o   _kea p  file   		275
u8_   _kea p  file 93		276
u8p   _cmn		277
u8p   _q]),    d    no  		278
u8p   _q]),    d    no93		279
u8p   _a,,,,,,,,    n		280
u8p   _tet      _    e]),		281
u8p   _ocsn		282
u8p   _d_dv		283
u8p   _cmp2000		284
biome,,,caa  		285
t-93" */
&(n		286
xype"         		287
*acc]),     		288
J_cpC     		289
t_,/* "do       		290
sSGC"                		291
oc_a-aa              		292
_ntTy     		293
ucaPootEnci-eS		294
_bjs[KeyPai		295
_encKeyPa		296
d_dv		297
u8_upportedOIDn    		298
u8_upp532]),]),/sst   		299
u8pie[532]),])sponse 		300
u8pie[rPara"mob       		301
u8_upporPara"mop     		302
u8_uppossphrase 		303
u8_upp*
&(t */fir,   		304
u8_upp5fir,WaitT "i      		305
u8_upp5fir,WaitT "i d_8   		306
u8_uppCtrl           		307
u8_uppCtrl          p		308
u8_uppes4i         		309
u8pie[d-mod-dvc,,,,,,		310
u8pie[bjs_hmac_dha1  		311
u8_uppop            		312
u8__X9 nid		313
u8__X9    		314
u8p   s2nod-mod-dvc		315
u8p   s2nod-mod-dvc,,,,,		316
u8p   s2nod-mod-dvc,,,,,,, 42		317
u8p   s2nod-moke]),/s       		318
u8p   s2nod    e]),/		319
u8p   s2nod-   e]),/s4 42n		320
u8__X9    
&(niu
POP		321
u8__X9    

&(niu
		322
u8pal ltyPoo		323
u8pal l-dvn       		324
u8pal ltd_obId         		325
u8pal ltd_pop		326
u8pcipi/
&No[56  		327
u8pcipien _sLs       		328
u8pcipien _sL       		329
u8pcipiiu
POP    		330
u8pcipiPWitn]),     		331
u8pcipi/eS        		332
u8pcmdooRL    

   

		333
u8pcmdovoke]),/sst  		334
u8pcmdoegnid_      		335
u8pcipiienid_      		336
u8pcipi,/sryPendpe" 		337
u8pcipipopLink		338
u8pcipipopLe 		339
u8pcmdooR/fir,omeSAc		340
u8pcmdooR9    		341
u8pcmdooRoOfBiraa  		342
u8pcmdoacoOfBiraa  		343
u8pcmdoder    

   
		344
u8pcmdoder    endpe" 		345
u8pcipi9,3nid_8       r,Wait		346
u8otaid_8       r,		347
u8opd>     r,WaitT		348
u8opd> ,WaitT,9,3nP		349
u8opd> ,seudony
		350
u8p35 "pi7]),		351
u8p35 "IsenderN  r,Wait