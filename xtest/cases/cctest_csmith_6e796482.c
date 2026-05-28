// SPDX-License-Identifier: MIT
// cctest_csmith_6e796482.c --- cctest case csmith_6e796482 (csmith seed 1853449346)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7f50ef68 */
/* @exp_ticks 0x4b97 */

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

// Options:   -s 1853449346 -o /tmp/csmith_gen_t8e24i1g/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   int32_t  f1;
};

struct S1 {
   int64_t  f0;
   struct S0  f1;
   uint32_t  f2;
   const int32_t  f3;
};

union U2 {
   int32_t  f0;
   const uint64_t  f1;
   const uint32_t  f2;
   const int32_t  f3;
};


static uint32_t g_5[4][2][3] = {{{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L},{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L}},{{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L},{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L}},{{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L},{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L}},{{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L},{0xF3DE0369L,18446744073709551608UL,0xF3DE0369L}}};
static int32_t g_14 = 0x1914CC5CL;
static int32_t g_17 = 0x978E60D7L;
static const union U2 g_25 = {0x566E66B6L};
static int8_t g_51 = 0x1FL;
static int64_t g_52[3][4][4] = {{{(-1L),0xC42336F7EBA052C4LL,0x7422E233AD2D1E56LL,0x78D320CD53B18A50LL},{0L,0xC42336F7EBA052C4LL,0xC42336F7EBA052C4LL,0L},{0xC42336F7EBA052C4LL,0L,(-1L),(-7L)},{0xC42336F7EBA052C4LL,(-1L),0xC42336F7EBA052C4LL,0x7422E233AD2D1E56LL}},{{0L,(-7L),0x7422E233AD2D1E56LL,0x7422E233AD2D1E56LL},{(-1L),(-1L),(-1L),0x7422E233AD2D1E56LL},{0x7422E233AD2D1E56LL,0xC42336F7EBA052C4LL,(-1L),0xC42336F7EBA052C4LL},{3L,(-7L),0x78D320CD53B18A50LL,(-1L)}},{{0xC42336F7EBA052C4LL,(-7L),(-7L),0xC42336F7EBA052C4LL},{(-7L),0xC42336F7EBA052C4LL,3L,0x7422E233AD2D1E56LL},{(-7L),3L,(-7L),0x78D320CD53B18A50LL},{0xC42336F7EBA052C4LL,0x7422E233AD2D1E56LL,0x78D320CD53B18A50LL,0x78D320CD53B18A50LL}}};
static uint32_t g_63[5][1] = {{0UL},{0xCBC420B1L},{0UL},{0xCBC420B1L},{0UL}};
static int16_t g_95 = 1L;
static uint8_t g_96 = 0xCEL;
static int32_t g_115 = (-10L);
static int32_t g_116 = (-1L);
static int32_t g_120 = (-5L);
static int64_t g_126 = 0L;
static int8_t g_127 = 0x1DL;
static int8_t g_129 = 2L;
static uint64_t g_131 = 18446744073709551614UL;
static struct S0 g_157 = {0x3B96202EL,0xD2957CE5L};
static uint32_t g_210 = 4294967295UL;
static uint64_t g_259 = 0UL;
static uint64_t g_262 = 0x2ED5ED8C95F24452LL;



static int32_t  func_1(void);
static uint16_t  func_6(struct S1  p_7, uint8_t  p_8);
static struct S1  func_9(int64_t  p_10, uint32_t  p_11);
static uint64_t  func_21(int32_t  p_22, const union U2  p_23);




static int32_t  func_1(void)
{ 
    union U2 l_2 = {0x8FB770A7L};
    int32_t l_12 = 0xB40E11A7L;
    int32_t l_263 = 0xA0112709L;
    l_263 = (l_2 , (safe_mul_func_int16_t_s_s((g_5[3][1][1] & l_2.f0), (g_262 = func_6(func_9((l_12 = (l_2.f3 ^ g_5[2][0][2])), l_2.f2), g_25.f2)))));
    return g_96;
}



static uint16_t  func_6(struct S1  p_7, uint8_t  p_8)
{ 
    const int8_t l_141 = (-1L);
    int32_t l_152 = 0x72E0867DL;
    int32_t l_183 = 0x3CE9E46CL;
    int32_t l_184 = (-1L);
    int32_t l_188 = 1L;
    union U2 l_251 = {0x1F28254AL};
    uint16_t l_253[5][2][1] = {{{5UL},{4UL}},{{5UL},{4UL}},{{5UL},{4UL}},{{5UL},{4UL}},{{5UL},{4UL}}};
    int64_t l_260 = 0xA7FCE78FCAF22537LL;
    int i, j, k;
    if ((safe_mod_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s((g_129 , (safe_rshift_func_int16_t_s_s(l_141, 7))), (safe_mul_func_int8_t_s_s(4L, ((((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((g_127 = (l_152 ^= l_141)) , l_141) , g_115), (-1L))), 1)) | l_141), p_7.f0)) , 0x8D34L), 2)) || p_7.f1.f0) , g_126) >= g_120) ^ g_5[3][1][1]) > p_7.f1.f0))))) , 0x72C64857L) == g_52[1][2][2]) != 65535UL) && g_17), l_141)))
    { 
        uint32_t l_158 = 0xC1156827L;
        int32_t l_170 = 0x755E1947L;
        int8_t l_208 = 0x43L;
        uint16_t l_224 = 4UL;
        int64_t l_225 = (-1L);
        uint8_t l_244[2];
        int i;
        for (i = 0; i < 2; i++)
            l_244[i] = 2UL;
        if ((g_120 > ((((safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((((g_157 , l_158) , p_7.f1.f0) < 2UL), p_7.f1.f0)) >= g_127), l_158)) != g_51) <= l_141) , p_7.f3)))
        { 
            int16_t l_165 = 0L;
            l_170 = (safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((g_63[0][0] = ((p_7.f1 , ((l_152 = (g_51 ^= ((((0L != (safe_rshift_func_uint16_t_u_u(((l_165 , ((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_120, g_25.f2)), g_17)) , g_25.f0) >= g_131) | g_131)) > p_8), l_158))) > l_141) < p_7.f0) > p_7.f3))) <= l_165)) , 0xE7EDE46CL)) , l_141), (-1L))) >= g_52[1][2][2]), l_141));
            if ((((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(p_8, (g_52[0][3][1] = l_170))), ((safe_unary_minus_func_int32_t_s(0L)) >= (safe_lshift_func_uint16_t_u_u(l_152, 1))))), p_7.f1.f0)), l_165)) & 1UL) | 0L))
            { 
                uint8_t l_182 = 5UL;
                return l_182;
            }
            else
            { 
                uint32_t l_185[3][5][5] = {{{2UL,0x3F0FEBA8L,0xF242EEF4L,0x1408C7FEL,0x4B1C0CD3L},{0xF242EEF4L,0x02F516F7L,0x3F0FEBA8L,0x3F0FEBA8L,0x02F516F7L},{0x02F516F7L,0xA9240DAAL,0xF242EEF4L,0x4B1C0CD3L,1UL},{18446744073709551612UL,0xA9240DAAL,0x4B1C0CD3L,0xC10FD6D6L,0x02B18033L},{0x1831C3E0L,0x02F516F7L,0x02F516F7L,0x1831C3E0L,0xC10FD6D6L}},{{18446744073709551612UL,0x3F0FEBA8L,1UL,0x5165AAC1L,0xC10FD6D6L},{0x02F516F7L,18446744073709551612UL,0x02B18033L,0xF242EEF4L,0x02B18033L},{0xF242EEF4L,0xF242EEF4L,0xC10FD6D6L,0x5165AAC1L,1UL},{2UL,0x1408C7FEL,0xC10FD6D6L,0x1831C3E0L,0x02F516F7L},{0x4B1C0CD3L,0xC10FD6D6L,0x02B18033L,0xC10FD6D6L,0x4B1C0CD3L}},{{0x5165AAC1L,0x1408C7FEL,1UL,0x4B1C0CD3L,0xF242EEF4L},{0x5165AAC1L,0xF242EEF4L,0x02F516F7L,0x3F0FEBA8L,0x3F0FEBA8L},{0x4B1C0CD3L,18446744073709551612UL,0x4B1C0CD3L,0x1408C7FEL,0xF242EEF4L},{2UL,0x3F0FEBA8L,0xF242EEF4L,0x1408C7FEL,0x4B1C0CD3L},{0xF242EEF4L,0x02F516F7L,0x3F0FEBA8L,0x3F0FEBA8L,0x02F516F7L}}};
                int i, j, k;
                l_185[2][3][3]++;
                return g_120;
            }
        }
        else
        { 
            int8_t l_209 = 0x3AL;
            uint64_t l_243 = 0xF432EDF72888F7B4LL;
            if ((((l_188 , p_7.f1.f0) , (p_7.f0 , g_25)) , (-1L)))
            { 
                int16_t l_199 = 0x9D87L;
                uint32_t l_211[5] = {0xC1BBC447L,0xC1BBC447L,0xC1BBC447L,0xC1BBC447L,0xC1BBC447L};
                int i;
                g_157.f1 = (l_211[2] = (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(5L, (g_116 = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((((g_95 = (l_199 = p_7.f1.f0)) & (((((safe_add_func_int32_t_s_s(((((safe_sub_func_int64_t_s_s(p_7.f2, (((~(safe_mod_func_int64_t_s_s((+l_158), 0x97580FF71D185BE0LL))) == l_208) < l_158))) , p_8) , p_7.f2) <= 0UL), g_157.f1)) >= p_7.f3) > p_7.f1.f1) | g_25.f0) > p_8)) == p_7.f1.f1), l_170)) , g_157.f1) == p_7.f0) >= g_115), l_209)), g_210))))), 249UL)));
                l_225 = (g_14 >= (!(((safe_lshift_func_int8_t_s_s((!p_7.f3), 7)) ^ ((safe_lshift_func_int8_t_s_u((g_5[3][1][1] & ((safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((l_209 , p_7.f0) < p_7.f2), p_7.f3)), 0x1772FEA1L)), g_5[3][0][0])) ^ g_131)), l_224)) || l_184)) , l_208)));
            }
            else
            { 
                int16_t l_228 = (-1L);
lbl_248:
                g_157.f1 = ((1UL & (safe_mod_func_uint64_t_u_u(l_228, ((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((-1L), 5)) , ((safe_sub_func_uint64_t_u_u(p_8, 0xBABB2B1666AC21E7LL)) | l_152)) && l_243), 9L)) ^ p_7.f3), 0x634A9BD93B319A55LL)), g_52[2][0][3])), 8)) & l_243) >= l_243), l_209)) , g_51)))) || l_141);
                if (l_141)
                    goto lbl_247;
lbl_247:
                l_244[1]--;
                if (g_17)
                    goto lbl_248;
            }
            g_14 = p_8;
        }
    }
    else
    { 
        uint64_t l_252 = 0x6C3CCF7C3CB9D369LL;
        int32_t l_261 = 1L;
        g_157.f1 |= (safe_rshift_func_uint16_t_u_u((l_261 = (p_8 <= (l_251 , (l_260 |= (((l_253[4][1][0] = l_252) & (safe_sub_func_uint8_t_u_u((!(((safe_sub_func_uint64_t_u_u((g_131 = ((((g_259 = ((255UL | p_8) & l_183)) == l_252) , g_52[2][0][1]) | p_8)), 0x0D87551B8815D8F7LL)) , 4L) , g_63[2][0])), p_7.f2))) || 0xDB857E70L))))), p_7.f1.f1));
        g_116 ^= 0xC9A4F970L;
    }
    return p_7.f3;
}



static struct S1  func_9(int64_t  p_10, uint32_t  p_11)
{ 
    uint8_t l_13[3];
    struct S0 l_24[5][3] = {{{4UL,3L},{7UL,-2L},{4UL,3L}},{{0x40284818L,0x88ACC167L},{0x40284818L,0x88ACC167L},{0x40284818L,0x88ACC167L}},{{4UL,3L},{7UL,-2L},{4UL,3L}},{{0x40284818L,0x88ACC167L},{0x40284818L,0x88ACC167L},{0x40284818L,0x88ACC167L}},{{4UL,3L},{7UL,-2L},{4UL,3L}}};
    int32_t l_117 = 0xE1DD48EEL;
    int32_t l_121 = (-1L);
    struct S1 l_134 = {0L,{0x6008F057L,1L},6UL,-1L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_13[i] = 255UL;
    for (p_10 = 0; (p_10 <= 2); p_10 += 1)
    { 
        int32_t l_113 = 0L;
        int32_t l_124 = 0x6B982E97L;
        int32_t l_125 = 0xADED1DAFL;
        int32_t l_128[1];
        int i;
        for (i = 0; i < 1; i++)
            l_128[i] = 4L;
        g_14 = l_13[p_10];
        if ((safe_lshift_func_int16_t_s_s((g_17 = g_5[2][0][2]), 3)))
        { 
            g_14 = p_10;
        }
        else
        { 
            uint8_t l_20[2];
            int32_t l_100 = 3L;
            int32_t l_114 = 7L;
            int32_t l_118 = 0x16A1DD2CL;
            int32_t l_119 = 1L;
            int32_t l_123 = 0L;
            int32_t l_130 = 0xDDF83816L;
            int i;
            for (i = 0; i < 2; i++)
                l_20[i] = 0x36L;
            l_100 = ((((p_10 , ((safe_sub_func_int64_t_s_s(l_20[1], 3UL)) > func_21(((l_24[4][2] , l_13[p_10]) || g_14), g_25))) , p_11) > 0x3DA0ACF1L) ^ 18446744073709551611UL);
            for (g_96 = 0; (g_96 <= 0); g_96 += 1)
            { 
                int32_t l_122[4][4];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_122[i][j] = 0x83796EE1L;
                }
                g_14 = ((((safe_add_func_int32_t_s_s((-9L), (((safe_lshift_func_uint8_t_u_u((0x9CDE0C07D60D1178LL < (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u(((g_63[(p_10 + 1)][g_96] || (safe_add_func_uint16_t_u_u(0xC4D8L, l_20[g_96]))) , l_20[(g_96 + 1)]), 4L)) < p_11) != (-1L)) && l_24[4][2].f0), 7)) >= g_52[1][2][2]), g_17))), 0)) ^ 0xD7L) || g_51))) && l_13[p_10]) && 0xFA604D7DB42F0577LL) , p_10);
                if (g_17)
                    continue;
                --g_131;
            }
        }
        g_116 = 0xAF8F730DL;
    }
    return l_134;
}



static uint64_t  func_21(int32_t  p_22, const union U2  p_23)
{ 
    uint32_t l_26 = 1UL;
    union U2 l_27[4] = {{-8L},{-8L},{-8L},{-8L}};
    uint8_t l_35[3];
    int32_t l_42 = 2L;
    uint8_t l_61 = 255UL;
    int32_t l_62[2];
    int32_t l_87[3];
    int i;
    for (i = 0; i < 3; i++)
        l_35[i] = 0xE4L;
    for (i = 0; i < 2; i++)
        l_62[i] = 0x25C8E5C6L;
    for (i = 0; i < 3; i++)
        l_87[i] = 0xCA980D52L;
    if (((l_26 , (l_27[3] , (g_5[3][1][1] || ((((safe_lshift_func_uint8_t_u_s(((+(safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_27[3].f2, 11)), l_35[2]))) > 0x3CF54CEAL), l_27[3].f3)) > g_25.f3) > l_35[2]) ^ l_35[2])))) != g_25.f3))
    { 
        int16_t l_36[4];
        int32_t l_37 = 3L;
        int32_t l_38 = (-10L);
        uint32_t l_39 = 0x431BB57CL;
        int i;
        for (i = 0; i < 4; i++)
            l_36[i] = (-1L);
        ++l_39;
        l_42 |= (p_22 ^= (l_37 = l_36[2]));
    }
    else
    { 
        uint32_t l_49[4];
        int32_t l_50 = 0x4E4153CDL;
        int i;
        for (i = 0; i < 4; i++)
            l_49[i] = 0xBEC16066L;
        l_42 = ((safe_mod_func_uint64_t_u_u(((((safe_unary_minus_func_int16_t_s((l_35[2] != ((g_52[1][2][2] &= (((((p_23 , (+((0xA1BF33464EB7F042LL > (g_51 = (safe_sub_func_int8_t_s_s(((l_50 |= ((l_49[1] >= 0L) < g_25.f3)) ^ 0xFF50EDC67586E024LL), l_49[1])))) >= l_49[1]))) ^ g_17) || 1L) >= 2UL) <= g_25.f3)) >= (-3L))))) ^ p_23.f0) , 65530UL) != p_23.f3), l_35[2])) ^ g_25.f2);
        g_14 |= (l_50 = (p_23.f3 & ((((g_52[1][0][3] >= (safe_sub_func_uint64_t_u_u((0xAE0A7320B692EDFCLL <= (((((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(255UL, 0xC2L)), 4L)), g_52[1][2][2])) && g_51) & g_52[1][2][2]) , p_23.f2) >= p_23.f3)), l_61))) , 0x365AED0E34927B92LL) & p_23.f0) && p_23.f3)));
    }
    for (l_26 = 0; (l_26 <= 2); l_26 += 1)
    { 
        uint64_t l_88[5][2];
        int32_t l_92 = 0x2712D857L;
        int32_t l_93 = 0xBCBF5654L;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_88[i][j] = 18446744073709551614UL;
        }
        g_63[0][0]++;
        for (g_51 = 2; (g_51 >= 0); g_51 -= 1)
        { 
            int32_t l_70 = 0L;
            int32_t l_89 = 0L;
            int32_t l_90 = 0xB5AE5FB0L;
            int32_t l_94[3][3][5] = {{{0x7B1B4A57L,(-2L),0x8C8B0F68L,0x83B57DFAL,1L},{1L,0x83B57DFAL,0x8C8B0F68L,(-2L),0x7B1B4A57L},{1L,(-2L),0x7584E37EL,(-2L),1L}},{{0x7B1B4A57L,(-2L),0x8C8B0F68L,0x83B57DFAL,1L},{1L,0x83B57DFAL,0x8C8B0F68L,(-2L),0x7B1B4A57L},{1L,(-2L),0x7584E37EL,(-2L),1L}},{{0x7B1B4A57L,(-2L),0x8C8B0F68L,0x83B57DFAL,1L},{1L,0x83B57DFAL,0x8C8B0F68L,(-2L),0x7B1B4A57L},{1L,(-2L),0x7584E37EL,(-2L),1L}}};
            int8_t l_99 = (-1L);
            int i, j, k;
            for (p_22 = 0; (p_22 <= 2); p_22 += 1)
            { 
                int i, j, k;
                l_90 ^= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((l_70 = g_52[l_26][p_22][p_22]) & ((safe_rshift_func_int16_t_s_s((l_61 & (((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((((l_42 = ((((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u((((((g_17 == ((((l_62[0] = ((safe_lshift_func_int8_t_s_u((l_87[0] , 0x5AL), g_5[3][1][1])) != p_23.f2)) == g_5[1][0][0]) <= p_22) , 0x6E60L)) | l_88[1][0]) && l_89) || g_52[l_26][p_22][p_22]) < p_22), p_23.f0)) ^ g_5[2][0][0]), l_88[1][0])) , 0x709DL), 15)), 0xA76F415013F2C8C6LL)) && 0x68L) > g_25.f2) , g_52[2][3][2])) | 0L) || g_25.f2), g_51)) , g_5[3][1][1]), (-1L))) | g_63[0][0]) == 0x71L)), 6)) | 0xCC90326E311AEEC8LL)) >= g_51), 0x42ECL)), 0x77L));
                g_14 = (-6L);
                l_90 = (!(0x0F90C5DD00C07DD8LL == g_52[l_26][p_22][p_22]));
            }
            g_96++;
            l_99 &= (-2L);
        }
    }
    return g_63[0][0];
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
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_25.f3, "g_25.f3", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_52[i][j][k], "g_52[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_63[i][j], "g_63[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
