// SPDX-License-Identifier: MIT
// cctest_csmith_707f3ad9.c --- cctest case csmith_707f3ad9 (csmith seed 1887386329)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc4b59428 */

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

// Options:   -s 1887386329 -o /tmp/csmith_gen_clp8k9xt/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint8_t  f1;
   int64_t  f2;
   int32_t  f3;
   const uint32_t  f4;
   int8_t  f5;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint32_t  f1;
   const uint64_t  f2;
};

union U2 {
   uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
   uint64_t  f3;
};

union U3 {
   int8_t  f0;
};


static int64_t g_2 = 0xA07E4FC2285FAAFELL;
static int32_t g_22 = 9L;
static union U3 g_34 = {-2L};
static uint64_t g_35 = 0xC6A3F0BDE8AFF65CLL;
static int64_t g_36 = 0L;
static struct S1 g_41[5][5] = {{{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL}},{{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL}},{{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL}},{{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL},{-1L,0x93497140L,0UL}},{{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL},{6L,0UL,18446744073709551615UL}}};
static uint32_t g_43 = 0x5688AFC0L;
static struct S0 g_88 = {9L,0UL,1L,0x22B5D766L,18446744073709551615UL,1L};
static uint32_t g_99 = 0UL;
static uint64_t g_104 = 0xB9428C401F3C7B64LL;
static uint8_t g_154 = 0x93L;
static int8_t g_170[2][1] = {{0xBAL},{0xBAL}};
static uint32_t g_172[4][3][4] = {{{1UL,0x80F3EF49L,3UL,0x63B49003L},{0xC2D4355FL,0xD4EF8352L,0xD4EF8352L,0xC2D4355FL},{1UL,8UL,0xC2D4355FL,0x41F84FDCL}},{{0x8D16BFC4L,0x63B49003L,0UL,0x22E70253L},{0xFA73DA2BL,1UL,5UL,0x41F84FDCL},{3UL,1UL,0x8D16BFC4L,1UL}},{{1UL,3UL,1UL,0x80F3EF49L},{0xFA73DA2BL,5UL,0xC2D4355FL,1UL},{0x41F84FDCL,1UL,1UL,5UL}},{{0xD4EF8352L,0x22E70253L,1UL,0UL},{0x41F84FDCL,1UL,0xC2D4355FL,0xC2D4355FL},{0xFA73DA2BL,0xFA73DA2BL,1UL,0xD4EF8352L}}};
static int64_t g_194 = 0x06FF82CCD7554994LL;
static uint64_t g_197[2] = {5UL,5UL};
static uint32_t g_216 = 0x9F5654A6L;



static uint32_t  func_1(void);
static uint16_t  func_6(int64_t  p_7, int8_t  p_8, struct S0  p_9, struct S0  p_10);
static int64_t  func_11(const uint32_t  p_12, uint16_t  p_13);
static uint16_t  func_16(const int32_t  p_17, uint16_t  p_18);




static uint32_t  func_1(void)
{ 
    int64_t l_3 = 0x2D9EE1C97412DF3DLL;
    struct S0 l_110[1][3] = {{{0L,9UL,0x86A86B27BD0F6225LL,1L,0xA846250CL,0x0EL},{0L,9UL,0x86A86B27BD0F6225LL,1L,0xA846250CL,0x0EL},{0L,9UL,0x86A86B27BD0F6225LL,1L,0xA846250CL,0x0EL}}};
    uint64_t l_219 = 0x469179340F3676A4LL;
    int i, j;
    l_3 = g_2;
    if ((((((safe_add_func_int8_t_s_s((func_6(func_11(g_2, (safe_sub_func_int64_t_s_s((func_16(g_2, l_3) > 0UL), l_3))), l_3, l_110[0][1], g_88) == 0x8AA3L), g_170[0][0])) | 18446744073709551611UL) , g_88.f3) <= 255UL) , l_110[0][1].f2))
    { 
        return g_88.f2;
    }
    else
    { 
        return l_219;
    }
}



static uint16_t  func_6(int64_t  p_7, int8_t  p_8, struct S0  p_9, struct S0  p_10)
{ 
    uint32_t l_116 = 0x56CCD6F8L;
    int32_t l_117 = 0x6F037352L;
    int32_t l_123 = 0x41C190B4L;
    int64_t l_181 = 8L;
    int32_t l_214 = (-3L);
    int32_t l_215 = (-6L);
    for (p_9.f2 = (-22); (p_9.f2 != 13); p_9.f2 = safe_add_func_uint16_t_u_u(p_9.f2, 5))
    { 
        uint32_t l_113 = 18446744073709551615UL;
        l_117 = (l_113 > (((0xA37561D2L || 0xF170005BL) >= ((((safe_add_func_int16_t_s_s(0xD083L, g_41[1][0].f2)) > p_9.f3) || l_116) | l_113)) < g_104));
    }
    l_123 = (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((g_34.f0 = ((p_9.f0 , (0xA3F8L ^ ((((+(l_117 |= ((p_9.f1 &= (g_43 && 0xEC79C0CFL)) , p_8))) <= 1UL) , l_117) | g_88.f5))) & g_88.f5)), l_116)), 18446744073709551612UL));
    if ((safe_rshift_func_int16_t_s_u(p_9.f2, 11)))
    { 
        uint32_t l_135 = 0x9A602268L;
        int32_t l_151[1][2][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_151[i][j][k] = 0x3A4A2723L;
            }
        }
        for (l_123 = 0; (l_123 <= 0); l_123 = safe_add_func_uint32_t_u_u(l_123, 3))
        { 
            for (p_10.f0 = 0; (p_10.f0 < 9); p_10.f0 = safe_add_func_uint32_t_u_u(p_10.f0, 6))
            { 
                uint32_t l_130 = 0xF7CD7C78L;
                --l_130;
            }
            for (p_10.f3 = (-5); (p_10.f3 < (-23)); p_10.f3 = safe_sub_func_int32_t_s_s(p_10.f3, 6))
            { 
                return l_135;
            }
        }
        if ((((safe_rshift_func_int8_t_s_s((g_34.f0 = l_116), (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((((0x2A1AL && (((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((0x788E8F36L > ((g_104 = 5UL) != g_41[1][0].f2)), 4)))) < g_35) , 0x6F3BL)) | 0xDD1E6761L) | 0x414D135FL), p_9.f5)) ^ (-1L)), 1UL)), l_135)))) <= l_135) && l_116))
        { 
            int8_t l_150 = (-1L);
            int32_t l_152 = 0L;
            int32_t l_153[1];
            int i;
            for (i = 0; i < 1; i++)
                l_153[i] = 0xE1E43403L;
            g_41[1][0].f0 = ((l_123 ^ (+((0UL >= (p_8 = (p_7 < ((safe_mul_func_uint8_t_u_u(l_135, g_35)) , 0x08CFL)))) > g_88.f2))) >= l_135);
            ++g_154;
        }
        else
        { 
            uint32_t l_178[3];
            int i;
            for (i = 0; i < 3; i++)
                l_178[i] = 4294967295UL;
            l_117 = (g_41[1][0].f0 |= (safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(p_10.f0, (g_43 ^= (g_99 = (l_123 = (g_41[1][0].f1++)))))) >= 0x0BAC48D8FEB0CFFELL), (p_10.f4 && p_9.f0))), 2)) , p_7), l_151[0][0][0])));
            for (g_88.f2 = 0; (g_88.f2 == (-6)); --g_88.f2)
            { 
                int32_t l_169 = 0x449BA733L;
                int32_t l_171 = 0xB55EDAC4L;
                g_172[2][2][0]++;
            }
            l_178[1] |= (safe_add_func_int32_t_s_s((g_22 &= (g_41[1][0].f0 = 0xC2ACA09AL)), ((!g_170[0][0]) != g_88.f2)));
        }
        g_41[1][0].f0 &= (safe_mul_func_uint16_t_u_u(((l_181 = l_135) >= (safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((l_151[0][1][0] |= l_135) == (((l_117 || ((safe_add_func_int64_t_s_s(((l_117 || l_135) <= p_9.f0), p_9.f0)) && 4294967295UL)) <= g_22) , g_172[2][2][0])), g_41[1][0].f2)), 0x2424L)) || 2UL), p_10.f4)) && p_9.f4) && p_9.f2), p_10.f5))), 0L));
    }
    else
    { 
        int16_t l_195[1][3][3];
        int32_t l_196 = (-3L);
        int32_t l_212 = 0x74B46092L;
        uint64_t l_213 = 0xCB5EBD3B7CBDB251LL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_195[i][j][k] = 0L;
            }
        }
        for (g_35 = 0; (g_35 >= 5); g_35 = safe_add_func_int64_t_s_s(g_35, 1))
        { 
            uint64_t l_211[3][5] = {{0x52C7461230A905D2LL,0x52C7461230A905D2LL,0x52C7461230A905D2LL,0x52C7461230A905D2LL,0x52C7461230A905D2LL},{0x6CD422BFBABA671FLL,0x6CD422BFBABA671FLL,0x6CD422BFBABA671FLL,0x6CD422BFBABA671FLL,0x6CD422BFBABA671FLL},{0x52C7461230A905D2LL,0x52C7461230A905D2LL,0x52C7461230A905D2LL,0x52C7461230A905D2LL,0x52C7461230A905D2LL}};
            int i, j;
            g_197[1]--;
            l_213 = (((((safe_add_func_int8_t_s_s(l_195[0][0][2], 0xD2L)) == ((safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(0L, (safe_unary_minus_func_uint8_t_u(l_195[0][0][2])))) >= 0xB4F5F1F4L), g_170[0][0])) && l_211[0][4]) < p_10.f3), l_212)) , l_196), (-7L))) != p_7)) , 0xC28BF459CB87FC28LL) <= l_196) , g_197[1]);
        }
        g_216--;
    }
    return g_88.f3;
}



static int64_t  func_11(const uint32_t  p_12, uint16_t  p_13)
{ 
    uint16_t l_107 = 65535UL;
    --l_107;
    return l_107;
}



static uint16_t  func_16(const int32_t  p_17, uint16_t  p_18)
{ 
    int32_t l_21[5][4][2];
    uint32_t l_50 = 0xD5916FF7L;
    int32_t l_70 = (-1L);
    uint64_t l_81 = 0x916079B8BCB0F1F8LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_21[i][j][k] = 0x77CCCAEAL;
        }
    }
    for (p_18 = 0; (p_18 > 16); p_18 = safe_add_func_int16_t_s_s(p_18, 4))
    { 
        int32_t l_29 = 1L;
        uint16_t l_37[2];
        int i;
        for (i = 0; i < 2; i++)
            l_37[i] = 65535UL;
        for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
        { 
            int32_t l_30[2][5] = {{1L,0L,1L,0L,1L},{0x20077FEFL,0x20077FEFL,0x20077FEFL,0x20077FEFL,0x20077FEFL}};
            int i, j;
            if (((safe_mul_func_int16_t_s_s(p_17, ((safe_add_func_int64_t_s_s(((((((safe_div_func_uint32_t_u_u(0x122D800FL, l_29)) | ((l_30[0][3] = p_18) | g_2)) ^ 18446744073709551613UL) & l_21[0][3][1]) & g_2) < g_2), g_22)) ^ 0x5EL))) , g_2))
            { 
                uint32_t l_31 = 0xEF5379A1L;
                if (l_31)
                    break;
                g_35 = (safe_sub_func_uint64_t_u_u((((g_34 , p_17) >= 5L) || p_17), g_2));
            }
            else
            { 
                if (p_17)
                    break;
                l_37[1]++;
            }
            for (g_35 = 0; (g_35 <= 1); g_35 += 1)
            { 
                union U3 l_40 = {0x88L};
                int32_t l_42 = 4L;
                int i, j, k;
                if (p_18)
                    break;
                l_21[(g_22 + 3)][(g_35 + 2)][g_35] = (p_18 >= (g_43 = ((l_40 , (0x6DC75DF642D94904LL >= (l_42 = ((g_41[1][0] , g_41[1][0].f1) , l_30[0][3])))) <= p_17)));
                l_21[(g_35 + 1)][(g_35 + 1)][g_35] = (p_18 , p_17);
            }
        }
        if (p_17)
            continue;
    }
    if ((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(g_41[1][0].f0, (l_50--))), 2)) < 0xBCDA4F1DFBA308D5LL) < ((~(safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((g_22 ^ (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((l_70 ^= (((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(1L, p_18)), 1L)) >= 9UL) <= l_21[4][2][1]), p_17)) & l_21[0][0][0]) > 0x22F5L)), p_18)) , g_41[1][0].f2), 10)), l_21[4][1][0]))) == g_35), g_35)), 15))) == l_21[1][2][1])), 14)))
    { 
        uint16_t l_75[5][3][5] = {{{0UL,0xE88DL,65532UL,0xEBBCL,0x7344L},{0x9CE6L,0xF7FAL,65535UL,0x752EL,65535UL},{0x7344L,0x7344L,65533UL,0UL,0x1F16L}},{{0x9CE6L,65535UL,0xB9FCL,65528UL,65528UL},{0UL,1UL,0UL,65531UL,0x685FL},{0xB9FCL,65535UL,0x9CE6L,0x78B3L,1UL}},{{65533UL,0x7344L,0x7344L,65533UL,0UL},{65535UL,0xF7FAL,0x9CE6L,1UL,65535UL},{65532UL,0xE88DL,0UL,0xE88DL,65532UL}},{{0xF7FAL,0x78B3L,0xB9FCL,1UL,4UL},{0x1085L,0xEBBCL,65533UL,65533UL,0xEBBCL},{65528UL,0x9CE6L,65535UL,0x78B3L,4UL}},{{0xE88DL,65533UL,65532UL,65531UL,65532UL},{4UL,4UL,0xF7FAL,65528UL,65535UL},{0xE88DL,0x1F16L,0x1085L,0UL,0UL}}};
        int32_t l_76 = 0x11418CD0L;
        int i, j, k;
        l_76 = (g_22 <= (safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(p_18, ((l_70 , (p_17 == 0x75L)) || g_41[1][0].f2))) , p_17) ^ 1L) ^ g_43), l_75[2][2][3])));
        return l_75[2][2][3];
    }
    else
    { 
        uint32_t l_79 = 0x91A03DC5L;
        int32_t l_82 = 0xBFCA48CCL;
        int32_t l_95 = 0x8E47B431L;
        int32_t l_97 = 0L;
        int32_t l_103 = 1L;
        l_81 |= ((((g_2 && (0x4DL > (l_79 = 253UL))) , ((safe_unary_minus_func_uint64_t_u(((g_36 = ((l_79 , l_50) ^ g_22)) , 0UL))) <= p_17)) || g_34.f0) <= 7L);
        for (l_50 = 0; (l_50 <= 1); l_50 += 1)
        { 
            uint32_t l_83 = 0x9F1C2FFFL;
            int32_t l_93 = 0xA633836DL;
            int32_t l_94 = 1L;
            int16_t l_96 = 6L;
            int32_t l_98 = 9L;
            uint8_t l_102[4] = {255UL,255UL,255UL,255UL};
            int i;
            for (p_18 = 0; (p_18 <= 1); p_18 += 1)
            { 
                union U2 l_89 = {0UL};
                int32_t l_92 = 0x61366E2CL;
                l_83--;
                g_22 = ((((g_22 >= (l_92 = ((safe_mul_func_int8_t_s_s((l_89.f2 = ((((g_88 , l_89) , (((safe_div_func_uint16_t_u_u(65535UL, g_88.f4)) == l_89.f1) || p_17)) & 0x7DC7AB573DB0A162LL) >= l_89.f1)), 0x2FL)) | p_18))) , g_43) < g_41[1][0].f0) > g_2);
                g_99++;
            }
            if (l_102[1])
                break;
            l_70 = (g_41[1][0].f0 = ((((g_88 , l_103) == g_88.f2) , l_103) & p_17));
            for (l_70 = 0; (l_70 <= 1); l_70 += 1)
            { 
                return l_102[1];
            }
        }
        g_104++;
    }
    return l_50;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_41[i][j].f0, "g_41[i][j].f0", print_hash_value);
            transparent_crc(g_41[i][j].f1, "g_41[i][j].f1", print_hash_value);
            transparent_crc(g_41[i][j].f2, "g_41[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_88.f4, "g_88.f4", print_hash_value);
    transparent_crc(g_88.f5, "g_88.f5", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_170[i][j], "g_170[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_197[i], "g_197[i]", print_hash_value);

    }
    transparent_crc(g_216, "g_216", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
