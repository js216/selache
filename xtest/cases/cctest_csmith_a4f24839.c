// SPDX-License-Identifier: MIT
// cctest_csmith_a4f24839.c --- cctest case csmith_a4f24839 (csmith seed 2767341625)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xebc50145 */
/* @exp_ticks 0x6282 */

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

// Options:   -s 2767341625 -o /tmp/csmith_gen_hmf422em/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   int64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint64_t  f4;
   const uint32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint16_t  f1;
   uint64_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

struct S3 {
   struct S0  f0;
   struct S2  f1;
   int64_t  f2;
   uint32_t  f3;
   int16_t  f4;
   int64_t  f5;
};

union U5 {
   int32_t  f0;
   const uint32_t  f1;
   const int32_t  f2;
   uint32_t  f3;
};


static int32_t g_3 = 0x5FE46C2EL;
static uint8_t g_8 = 9UL;
static const struct S3 g_23 = {{0x4D4E2095L,65530UL,18446744073709551615UL,-2L},{0x16E074F0L},0x4F20077FEFB659BALL,0UL,0x69A7L,-9L};
static struct S1 g_24 = {-1L,2L,1UL,1UL,18446744073709551613UL,0x20C256FAL};
static uint64_t g_88 = 18446744073709551614UL;
static union U5 g_91[4][4][2] = {{{{0x41BAC1F9L},{0x401F3C7BL}},{{0xC35A0028L},{0xC35A0028L}},{{0x401F3C7BL},{0x41BAC1F9L}},{{1L},{0x41BAC1F9L}}},{{{0x401F3C7BL},{0xC35A0028L}},{{0xC35A0028L},{0x401F3C7BL}},{{0x41BAC1F9L},{1L}},{{0x41BAC1F9L},{0x401F3C7BL}}},{{{0xC35A0028L},{0xC35A0028L}},{{0x401F3C7BL},{0x41BAC1F9L}},{{1L},{0x41BAC1F9L}},{{0x401F3C7BL},{0xC35A0028L}}},{{{0xC35A0028L},{0x401F3C7BL}},{{0x41BAC1F9L},{1L}},{{0x41BAC1F9L},{0x401F3C7BL}},{{0xC35A0028L},{0xC35A0028L}}}};
static struct S1 g_100[3] = {{0xD3F44F86L,0x726A7E7D718789B1LL,0UL,5UL,0x4766C6174CE2EAA3LL,8UL},{0xD3F44F86L,0x726A7E7D718789B1LL,0UL,5UL,0x4766C6174CE2EAA3LL,8UL},{0xD3F44F86L,0x726A7E7D718789B1LL,0UL,5UL,0x4766C6174CE2EAA3LL,8UL}};
static uint64_t g_114 = 0xDF0983E45B0D9EFBLL;
static uint8_t g_120[4] = {255UL,255UL,255UL,255UL};
static struct S2 g_124 = {0x5D9A0FD5L};
static uint32_t g_127[1] = {18446744073709551615UL};
static uint8_t g_134 = 251UL;



static union U5  func_1(void);
static const uint64_t  func_4(uint16_t  p_5, struct S2  p_6, struct S2  p_7);
static struct S2  func_11(union U5  p_12, uint32_t  p_13, struct S2  p_14, const uint32_t  p_15);
static struct S2  func_18(int16_t  p_19, const struct S3  p_20, uint16_t  p_21, struct S1  p_22);




static union U5  func_1(void)
{ 
    uint64_t l_2[5];
    union U5 l_16 = {0x493E623BL};
    struct S2 l_123 = {-6L};
    struct S2 l_126 = {0L};
    int i;
    for (i = 0; i < 5; i++)
        l_2[i] = 0xDF3D37A5B7D8CF4CLL;
    for (g_3 = 0; (g_3 <= 4); g_3 += 1)
    { 
        uint32_t l_17 = 0x7A5EAFB5L;
        struct S2 l_32 = {0xCE519C81L};
        if (((func_4((g_8--), func_11(l_16, l_17, func_18(g_3, g_23, g_23.f0.f0, g_24), l_17), l_32) || 18446744073709551607UL) || l_17))
        { 
            int32_t l_111 = 1L;
            int32_t l_112 = 9L;
            int32_t l_113[4][2] = {{0L,0L},{9L,0L},{0L,9L},{9L,9L}};
            int i, j;
            --g_114;
        }
        else
        { 
            int16_t l_119 = 0x7636L;
            struct S2 l_125[5][3][4] = {{{{0xAC2647FDL},{1L},{0xAC2647FDL},{0xB4D12FDFL}},{{0xFDFC4D21L},{1L},{-1L},{0xFDFC4D21L}},{{0x7B2B6A97L},{0xB4D12FDFL},{0x14D135FAL},{1L}}},{{{0xB4D12FDFL},{1L},{0x14D135FAL},{0x14D135FAL}},{{0x7B2B6A97L},{0x7B2B6A97L},{-1L},{-5L}},{{0xFDFC4D21L},{0xF369350CL},{0xAC2647FDL},{1L}}},{{{0xAC2647FDL},{1L},{0xB4D12FDFL},{0xAC2647FDL}},{{0x7B2B6A97L},{1L},{0xDEB9788EL},{1L}},{{1L},{0xF369350CL},{0x14D135FAL},{-5L}}},{{{0xD686DD1EL},{0x7B2B6A97L},{0xB4D12FDFL},{0x14D135FAL}},{{0xFDFC4D21L},{1L},{3L},{1L}},{{0xFDFC4D21L},{0xB4D12FDFL},{0xB4D12FDFL},{0xFDFC4D21L}}},{{{0xD686DD1EL},{1L},{0x14D135FAL},{0xB4D12FDFL}},{{1L},{1L},{0xDEB9788EL},{-5L}},{{0x7B2B6A97L},{0xD686DD1EL},{0xB4D12FDFL},{-5L}}}};
            int i, j, k;
            if (g_23.f2)
            { 
                uint32_t l_117 = 1UL;
                int32_t l_118 = 8L;
                l_118 = l_117;
                ++g_120[1];
            }
            else
            { 
                g_124 = l_123;
                if (l_119)
                    break;
                l_126 = l_125[3][0][2];
            }
            g_127[0]--;
        }
        g_91[1][0][0].f0 ^= l_17;
    }
    g_24.f0 = (safe_div_func_int16_t_s_s((g_134 = (safe_sub_func_uint32_t_u_u(0xAA90A817L, 7UL))), l_16.f0));
    for (l_16.f0 = (-23); (l_16.f0 > (-21)); l_16.f0++)
    { 
        return l_16;
    }
    return g_91[0][3][1];
}



static const uint64_t  func_4(uint16_t  p_5, struct S2  p_6, struct S2  p_7)
{ 
    int32_t l_39 = 0xB5720603L;
    int32_t l_53 = 0x8ECDE22FL;
    uint32_t l_56 = 0x6624E94FL;
    union U5 l_66 = {-2L};
    const struct S3 l_70 = {{0xCC9215A1L,0x429FL,0xC2FFF4405564AC20LL,0x12L},{0xD3B87503L},0x639DBCFCC2E186B9LL,1UL,1L,-5L};
    struct S1 l_86 = {0L,-7L,0x836DABD8L,0xE459F6D1L,8UL,0UL};
    int32_t l_87 = (-9L);
    struct S2 l_101 = {0x2F143A8CL};
lbl_106:
    for (g_24.f3 = 0; (g_24.f3 == 17); g_24.f3 = safe_add_func_uint32_t_u_u(g_24.f3, 6))
    { 
        uint16_t l_35 = 65529UL;
        int32_t l_36 = 0x93A39D8EL;
        l_35 ^= (g_24.f0 |= (p_7.f0 = 0xEDFD6825L));
        l_36 = 0xAFC007DFL;
    }
    if ((((safe_mul_func_uint16_t_u_u(p_7.f0, g_23.f2)) < l_39) , (safe_lshift_func_uint16_t_u_u(0x28C3L, l_39))))
    { 
        union U5 l_48[2] = {{0xC6CE91E4L},{0xC6CE91E4L}};
        uint64_t l_54 = 5UL;
        const int32_t l_55 = 0xBAD2CC01L;
        int32_t l_76 = 0xF42E135DL;
        int i;
        if (((((safe_mul_func_uint16_t_u_u(((--p_5) && ((g_23.f0.f2 != ((safe_mul_func_int16_t_s_s(((((l_48[0] , ((safe_lshift_func_uint16_t_u_u((l_53 = ((l_39 , (safe_mul_func_int16_t_s_s(((l_39 |= ((g_8 , g_23.f0.f1) || g_24.f0)) || 0xBAA6L), 0x64F8L))) || g_23.f2)), p_5)) && l_54)) & l_55) < 0xBFB6FEB77EBEE99BLL) == 65535UL), l_48[0].f2)) , p_6.f0)) | 0x5B2E90E87CA61894LL)), (-3L))) > 0xDF3DL) , 2L) >= g_3))
        { 
            uint64_t l_63 = 0xFA13A89CE68EBBCFLL;
            int32_t l_67 = 0x52BDF33DL;
            l_56--;
            l_66.f0 = (((l_48[0].f0 = (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((((l_63 ^= 18446744073709551606UL) & ((((((l_67 ^= (0UL != ((safe_mod_func_uint16_t_u_u(65532UL, (l_66 , g_24.f5))) != l_66.f1))) , l_48[0].f3) || 1L) > 0xD7L) | g_24.f4) & p_6.f0)) <= g_23.f5), 1UL)), g_24.f3))) > g_23.f1.f0) != g_23.f0.f3);
        }
        else
        { 
            int32_t l_85 = 0x3D0AF170L;
            if ((safe_mod_func_uint64_t_u_u((((func_18(p_5, l_70, ((~(safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((l_39 = (g_8++)), (safe_add_func_uint64_t_u_u((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(l_85, 7)), l_70.f3)) > 1L) && l_85), l_85)))), 4294967295UL))) | p_6.f0), l_86) , g_23.f1) , g_23.f0.f1) != p_5), 0xED5AC3C997210B64LL)))
            { 
                return l_85;
            }
            else
            { 
                int32_t l_99 = 0xA2B5784CL;
                ++g_88;
                l_101 = func_18((func_11(g_91[1][0][0], ((safe_div_func_int16_t_s_s((l_48[0] , (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(9L, (((!(((g_24.f0 = l_99) & 4294967295UL) & p_6.f0)) >= l_86.f2) ^ 0xDBA41957L))), 0xFDL))), p_7.f0)) <= 0x10L), g_23.f1, g_88) , g_24.f2), l_70, g_23.f4, g_100[0]);
                p_6.f0 = (safe_lshift_func_uint8_t_u_u(p_5, 3));
            }
        }
    }
    else
    { 
        const uint64_t l_109[3][1] = {{0xC79C0CF39239E70CLL},{0xC79C0CF39239E70CLL},{0xC79C0CF39239E70CLL}};
        uint32_t l_110 = 0x32AAFAE5L;
        int i, j;
        for (p_6.f0 = 27; (p_6.f0 < (-13)); p_6.f0 = safe_sub_func_uint16_t_u_u(p_6.f0, 1))
        { 
            if (l_86.f4)
                goto lbl_106;
        }
        p_7.f0 &= 0x4E7D6D0CL;
        l_110 = (safe_lshift_func_uint8_t_u_s(l_109[1][0], l_109[1][0]));
    }
    return g_100[0].f4;
}



static struct S2  func_11(union U5  p_12, uint32_t  p_13, struct S2  p_14, const uint32_t  p_15)
{ 
    uint8_t l_25 = 0UL;
    int8_t l_30[4][1] = {{1L},{(-6L)},{1L},{(-6L)}};
    struct S2 l_31 = {-1L};
    int i, j;
    l_31 = ((((l_25 < ((((p_12.f3 , (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(1L, p_12.f3)) && p_12.f2), l_30[1][0]))) ^ g_23.f0.f3) >= p_12.f1) > p_12.f1)) <= g_24.f3) == p_13) , g_23.f1);
    return g_23.f1;
}



static struct S2  func_18(int16_t  p_19, const struct S3  p_20, uint16_t  p_21, struct S1  p_22)
{ 
    return g_23.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_23.f0.f0, "g_23.f0.f0", print_hash_value);
    transparent_crc(g_23.f0.f1, "g_23.f0.f1", print_hash_value);
    transparent_crc(g_23.f0.f2, "g_23.f0.f2", print_hash_value);
    transparent_crc(g_23.f0.f3, "g_23.f0.f3", print_hash_value);
    transparent_crc(g_23.f1.f0, "g_23.f1.f0", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_23.f3, "g_23.f3", print_hash_value);
    transparent_crc(g_23.f4, "g_23.f4", print_hash_value);
    transparent_crc(g_23.f5, "g_23.f5", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_91[i][j][k].f0, "g_91[i][j][k].f0", print_hash_value);
                transparent_crc(g_91[i][j][k].f1, "g_91[i][j][k].f1", print_hash_value);
                transparent_crc(g_91[i][j][k].f2, "g_91[i][j][k].f2", print_hash_value);
                transparent_crc(g_91[i][j][k].f3, "g_91[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_100[i].f0, "g_100[i].f0", print_hash_value);
        transparent_crc(g_100[i].f1, "g_100[i].f1", print_hash_value);
        transparent_crc(g_100[i].f2, "g_100[i].f2", print_hash_value);
        transparent_crc(g_100[i].f3, "g_100[i].f3", print_hash_value);
        transparent_crc(g_100[i].f4, "g_100[i].f4", print_hash_value);
        transparent_crc(g_100[i].f5, "g_100[i].f5", print_hash_value);

    }
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);

    }
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);

    }
    transparent_crc(g_134, "g_134", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
