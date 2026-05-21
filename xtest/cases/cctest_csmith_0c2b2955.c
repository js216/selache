// SPDX-License-Identifier: MIT
// cctest_csmith_0c2b2955.c --- cctest case csmith_0c2b2955 (csmith seed 204155221)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x24fd7a91 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 204155221 -o /tmp/csmith_gen_sskh__8k/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint16_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t  f0;
};
#pragma pack(pop)

struct S3 {
   uint32_t  f0;
   uint32_t  f1;
   struct S2  f2;
   const uint64_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   uint32_t  f0;
   const uint32_t  f1;
};
#pragma pack(pop)

union U5 {
   const int32_t  f0;
   uint32_t  f1;
   const int8_t  f2;
};

union U6 {
   uint16_t  f0;
   struct S0  f1;
   int16_t  f2;
   uint16_t  f3;
};

union U7 {
   uint16_t  f0;
};


static uint64_t g_18[4][2] = {{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL}};
static struct S4 g_28 = {1UL,1UL};
static union U7 g_30 = {0x51FEL};
static struct S3 g_34 = {4294967293UL,18446744073709551612UL,{65535UL},18446744073709551615UL};
static union U6 g_35 = {0x925BL};
static uint32_t g_39 = 0x2954F618L;
static int64_t g_43 = 1L;
static int64_t g_55 = 0x837911FBFE3ACA47LL;
static int64_t g_59 = 0x332C3216FBB12200LL;
static int32_t g_61 = 0x9EC2B408L;
static uint8_t g_62 = 0xC6L;
static int16_t g_72 = 0x2B51L;
static int32_t g_75 = (-1L);
static int64_t g_76[4] = {0x0F98E72CC6491A58LL,0x0F98E72CC6491A58LL,0x0F98E72CC6491A58LL,0x0F98E72CC6491A58LL};
static int32_t g_78[4][3][2] = {{{0L,7L},{(-1L),(-1L)},{(-1L),7L}},{{0L,0x613AB5F7L},{7L,0x613AB5F7L},{0L,7L}},{{(-1L),(-1L)},{(-1L),7L},{0L,0x613AB5F7L}},{{7L,0x613AB5F7L},{0L,7L},{(-1L),(-1L)}}};
static struct S2 g_91 = {0x8FB8L};
static union U5 g_95 = {6L};
static uint32_t g_99 = 4294967293UL;
static int16_t g_128 = 0L;
static int64_t g_143 = 0x4898853A53F0CD3ALL;



static const int32_t  func_1(void);
static uint8_t  func_9(uint64_t  p_10, uint32_t  p_11);
static const int32_t  func_14(uint8_t  p_15, uint32_t  p_16, union U5  p_17);
static struct S4  func_23(uint32_t  p_24, uint16_t  p_25, uint64_t  p_26, union U7  p_27);




static const int32_t  func_1(void)
{ 
    uint32_t l_4 = 7UL;
    struct S0 l_29[3][1][1] = {{{{-6L,0x1B07L}}},{{{-6L,0x1B07L}}},{{{-6L,0x1B07L}}}};
    union U5 l_106[2][5][2] = {{{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}},{{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}}};
    int32_t l_227 = 1L;
    int i, j, k;
    l_227 |= (l_4 ^ (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((((func_9((safe_lshift_func_uint8_t_u_s((func_14((g_18[2][0]++), (safe_mul_func_uint16_t_u_u(l_4, (func_23((g_28 , ((l_29[2][0][0] , 4294967287UL) , g_28.f1)), l_29[2][0][0].f0, g_28.f0, g_30) , 65530UL))), l_106[1][0][0]) ^ 0x4AF7E4E2L), l_29[2][0][0].f1)), g_61) , g_95.f1) != 4UL) || 249UL), (-1L))), l_4)));
    return l_29[2][0][0].f0;
}



static uint8_t  func_9(uint64_t  p_10, uint32_t  p_11)
{ 
    struct S2 l_111 = {0xCB6AL};
    union U5 l_114 = {0xE76C9008L};
    union U6 l_123 = {0xA31EL};
    int32_t l_131 = (-8L);
    struct S2 l_190 = {65532UL};
    int32_t l_208 = (-1L);
    int32_t l_214 = 0xF23012FAL;
    int32_t l_216 = 0x11A4E4E5L;
    uint16_t l_218 = 0UL;
    uint16_t l_226 = 2UL;
    g_91 = l_111;
    if (((g_59 = (safe_mul_func_int16_t_s_s((((l_114 , (g_76[0] &= (((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_114.f2 && ((safe_div_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((l_123 , 65535UL), p_11)) ^ p_11) <= 0xAD613349F12889EALL), p_10)) | 2UL)), p_11)) || g_34.f3), 255UL)) ^ g_78[2][1][0]) , g_55))) || p_10) >= l_114.f1), p_11))) | p_10))
    { 
        const int32_t l_130[4] = {0x4CBD725CL,0x4CBD725CL,0x4CBD725CL,0x4CBD725CL};
        union U6 l_132 = {0xC31AL};
        int i;
        g_78[1][0][1] |= ((((((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(g_128, p_10)) && (g_76[3] = (!(l_131 |= (((1L < g_34.f2.f0) && g_55) & l_130[3]))))) && g_34.f2.f0), 15)) ^ 0x6267L) > 65535UL) == p_11) || p_10) || 0xC7L);
        l_131 = 0xFE067558L;
        if ((l_132 , p_11))
        { 
            int16_t l_133 = (-7L);
            l_133 |= (p_11 | (p_11 <= p_10));
        }
        else
        { 
            int32_t l_142[2];
            int i;
            for (i = 0; i < 2; i++)
                l_142[i] = 0xFD258EC0L;
            for (g_128 = 1; (g_128 >= 0); g_128 -= 1)
            { 
                uint16_t l_148 = 65535UL;
                int32_t l_162 = 4L;
                g_78[1][0][1] = (((safe_mod_func_uint32_t_u_u(0x9CEE28C9L, (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((((g_143 = (safe_lshift_func_int16_t_s_u(l_142[0], 9))) <= (((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_142[0] ^ 0xD496A5D4L), l_148)), p_11)) >= 1UL) , p_10)) != l_130[3]), l_142[1])), (-8L))))) >= p_11) < l_142[0]);
                l_162 = (g_78[2][1][1] = (safe_sub_func_int8_t_s_s((+((+(safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s(p_11, 0x890AL)), (safe_sub_func_int16_t_s_s((g_43 && (!(p_10 ^ 65535UL))), g_34.f0)))), p_10))) ^ p_10)), l_111.f0)));
                if (g_28.f1)
                    continue;
            }
        }
    }
    else
    { 
        uint32_t l_183[5] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
        struct S2 l_189 = {0x5B0BL};
        uint64_t l_206 = 7UL;
        int32_t l_209 = 9L;
        int i;
        for (l_123.f1.f1 = (-2); (l_123.f1.f1 < 20); l_123.f1.f1 = safe_add_func_uint8_t_u_u(l_123.f1.f1, 7))
        { 
            uint16_t l_172 = 0x117AL;
            const int32_t l_182 = 0xC1646822L;
            uint16_t l_184 = 65531UL;
            int32_t l_185 = (-1L);
            struct S2 l_186 = {0x67C1L};
            for (g_99 = 10; (g_99 > 29); g_99 = safe_add_func_int8_t_s_s(g_99, 3))
            { 
                uint64_t l_171 = 18446744073709551610UL;
                if (g_18[0][1])
                    break;
                g_78[1][0][1] = ((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_172 &= l_171), (safe_rshift_func_int16_t_s_s(p_10, 8)))), (((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_s((((g_35.f3 ^= g_59) > ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(0x7008L, p_10)), g_78[1][0][1])) < p_10)) > l_182), 8)))) ^ l_183[4]) & l_184) > l_123.f0) && p_11))) , p_10);
                l_185 = g_99;
            }
            g_91 = (l_186 = l_111);
            for (l_111.f0 = 12; (l_111.f0 == 2); --l_111.f0)
            { 
                if (g_35.f3)
                    break;
                l_131 = (l_114.f1 >= 0x5CD9L);
            }
        }
        for (l_111.f0 = 0; (l_111.f0 <= 3); l_111.f0 += 1)
        { 
            uint32_t l_201[1][4][4];
            int32_t l_207 = 0xADCFF9AFL;
            int32_t l_213 = 0x74BCF860L;
            int32_t l_215 = (-6L);
            int32_t l_217 = 0x0159466BL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_201[i][j][k] = 6UL;
                }
            }
            for (g_35.f3 = 0; (g_35.f3 <= 3); g_35.f3 += 1)
            { 
                l_190 = l_189;
                l_189 = l_189;
            }
            l_131 = (g_28.f1 | ((!(l_206 &= (safe_mod_func_int64_t_s_s((((((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(2L, ((+(safe_lshift_func_uint16_t_u_s((l_201[0][1][1] || (safe_add_func_uint64_t_u_u((p_10 = (safe_mod_func_uint8_t_u_u((p_10 == 3UL), 0x66L))), 0x09FB56803DAA861DLL))), 3))) , g_34.f3))), g_28.f0)) != 0x29BC1B99L) | 0L) <= p_11) ^ l_190.f0), g_18[0][1])))) || 1UL));
            for (g_59 = 0; (g_59 <= 3); g_59 += 1)
            { 
                return g_43;
            }
            for (g_34.f2.f0 = 0; (g_34.f2.f0 <= 3); g_34.f2.f0 += 1)
            { 
                int64_t l_210[2][2][4];
                int32_t l_211 = 0xCEFAA527L;
                int32_t l_212[5];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_210[i][j][k] = 2L;
                    }
                }
                for (i = 0; i < 5; i++)
                    l_212[i] = 0x68031B64L;
                --l_218;
                if (l_210[1][1][3])
                    continue;
            }
        }
    }
    l_208 |= ((l_216 = g_143) == (!(safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_11, ((l_226 = 0xE6F06CA2L) > (l_214 <= 0UL)))), 0))));
    return p_11;
}



static const int32_t  func_14(uint8_t  p_15, uint32_t  p_16, union U5  p_17)
{ 
    struct S2 l_107 = {0x56A0L};
    for (p_15 = 0; (p_15 <= 3); p_15 += 1)
    { 
        uint32_t l_108[4];
        int i;
        for (i = 0; i < 4; i++)
            l_108[i] = 0xEAA45E95L;
        g_34.f2 = l_107;
        --l_108[2];
        if (g_76[p_15])
            continue;
    }
    l_107 = g_34.f2;
    return l_107.f0;
}



static struct S4  func_23(uint32_t  p_24, uint16_t  p_25, uint64_t  p_26, union U7  p_27)
{ 
    uint32_t l_31[5][1][2];
    int32_t l_40 = 0xBE3335A0L;
    struct S2 l_41 = {0xFC22L};
    const uint32_t l_52[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int8_t l_71 = 1L;
    uint16_t l_80 = 0x8589L;
    int32_t l_101[5][4] = {{0x90C4FCC0L,0x2DEA9B0BL,0x2DEA9B0BL,0x90C4FCC0L},{0x471C4402L,0x2DEA9B0BL,(-3L),0x2DEA9B0BL},{0x2DEA9B0BL,0x491E1CB0L,(-3L),(-3L)},{0x471C4402L,0x471C4402L,0x2DEA9B0BL,(-3L)},{0x90C4FCC0L,0x491E1CB0L,0x90C4FCC0L,0x2DEA9B0BL}};
    int8_t l_102 = 0x8EL;
    uint32_t l_103 = 0x6EB9DFCDL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_31[i][j][k] = 0x86F80366L;
        }
    }
    for (p_25 = 0; (p_25 <= 0); p_25 += 1)
    { 
        struct S4 l_44 = {0x9405A9ADL,0xDC2CBFFAL};
        int32_t l_74 = 0x9C75CA1DL;
        for (p_27.f0 = 0; (p_27.f0 <= 0); p_27.f0 += 1)
        { 
            int8_t l_38[3];
            struct S2 l_42 = {0xA690L};
            int i;
            for (i = 0; i < 3; i++)
                l_38[i] = (-8L);
            l_40 &= (safe_div_func_int8_t_s_s((g_34 , (((((g_34.f1 >= (g_35 , (safe_div_func_int64_t_s_s((g_39 ^= ((l_38[0] ^ (-1L)) | 0x1B460D54BA4FDAF0LL)), p_24)))) | 0x09E6L) || p_27.f0) < p_24) >= 0x592EL)), g_34.f0));
            l_42 = l_41;
            for (l_42.f0 = 0; (l_42.f0 <= 0); l_42.f0 += 1)
            { 
                int i, j, k;
                l_40 = (g_43 ^= ((l_31[p_27.f0][p_27.f0][p_25] > g_35.f0) | g_34.f3));
                return l_44;
            }
        }
        for (g_35.f2 = 0; (g_35.f2 <= 0); g_35.f2 += 1)
        { 
            int8_t l_56 = 0x94L;
            int32_t l_60 = 1L;
            int16_t l_73 = 0x668EL;
            int32_t l_96 = 0xA0A8E6C6L;
            if ((l_56 = (~(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(1UL, (((safe_sub_func_uint8_t_u_u(l_52[1], (g_55 = ((((2UL ^ (safe_add_func_uint8_t_u_u(((1UL == g_39) ^ l_44.f1), 250UL))) , g_34.f2.f0) >= g_34.f3) || p_25)))) == l_52[1]) <= 8L))), g_34.f3)) == (-7L)) | p_26))))
            { 
                g_59 &= (safe_mod_func_uint16_t_u_u((0x57L | 0x76L), p_27.f0));
                if (p_24)
                    break;
            }
            else
            { 
                if (g_39)
                    break;
                --g_62;
                l_60 &= 0xD72DEFE8L;
            }
            l_60 = (((((safe_mod_func_int16_t_s_s((((l_44.f1 || (l_56 == (g_72 = (0xA38A5BFF831C21D0LL != (l_44.f1 && l_71))))) < l_56) , p_25), g_28.f1)) , l_44.f0) , 0x247AL) < l_73) , p_24);
            for (l_73 = 0; (l_73 >= 0); l_73 -= 1)
            { 
                int16_t l_77 = 0xA3E4L;
                int32_t l_79[3];
                struct S4 l_92 = {4UL,1UL};
                int i;
                for (i = 0; i < 3; i++)
                    l_79[i] = 0x4848B2A4L;
                ++l_80;
                l_96 = (((safe_lshift_func_uint16_t_u_u((g_34.f2.f0++), 14)) ^ (safe_add_func_uint64_t_u_u(18446744073709551606UL, ((((l_60 = (safe_div_func_uint64_t_u_u(((g_91 , l_92) , (safe_lshift_func_uint16_t_u_s(((p_27.f0 != p_26) >= p_26), 3))), g_34.f0))) , g_95) , l_44.f1) & 1L)))) | p_24);
            }
            for (l_44.f0 = 0; (l_44.f0 <= 0); l_44.f0 += 1)
            { 
                uint64_t l_100 = 0UL;
                l_60 = p_25;
                l_74 = (safe_rshift_func_int8_t_s_u(((g_99 ^= 0x04L) != l_100), 1));
                l_74 = p_27.f0;
            }
        }
    }
    g_75 = (l_52[3] >= 0x17113E0DL);
    l_103++;
    return g_28;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2.f0, "g_34.f2.f0", print_hash_value);
    transparent_crc(g_34.f3, "g_34.f3", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_95.f2, "g_95.f2", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
