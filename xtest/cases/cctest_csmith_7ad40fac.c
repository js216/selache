// SPDX-License-Identifier: MIT
// cctest_csmith_7ad40fac.c --- cctest case csmith_7ad40fac (csmith seed 2060717996)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe3787e05 */
/* @exp_ticks 0x34c4 */

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

// Options:   -s 2060717996 -o /tmp/csmith_gen_tb1jh7ze/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
};

union U1 {
   int64_t  f0;
};

union U2 {
   int32_t  f0;
};

union U3 {
   uint64_t  f0;
};


static int32_t g_2 = 8L;
static union U3 g_5[5] = {{0x80849F845D811F07LL},{0x80849F845D811F07LL},{0x80849F845D811F07LL},{0x80849F845D811F07LL},{0x80849F845D811F07LL}};
static int32_t g_6 = 1L;
static uint32_t g_17 = 0UL;
static uint16_t g_28 = 0xB2ECL;
static uint8_t g_37 = 0UL;
static uint8_t g_38[3] = {0x45L,0x45L,0x45L};
static uint32_t g_39 = 0xD68E480BL;
static struct S0 g_40 = {0x64544A95L,0x4792L,1UL};
static uint8_t g_89 = 0x3CL;
static uint32_t g_120 = 4294967295UL;
static union U1 g_124[4] = {{-2L},{-2L},{-2L},{-2L}};
static int8_t g_129 = 0x33L;
static union U2 g_149 = {0x6D7ADF18L};
static int16_t g_154 = (-3L);
static int16_t g_171 = 6L;



static int64_t  func_1(void);
static int16_t  func_13(int64_t  p_14, uint32_t  p_15, uint8_t  p_16);
static struct S0  func_29(int32_t  p_30);
static int32_t  func_42(uint16_t  p_43, uint32_t  p_44, uint32_t  p_45);




static int64_t  func_1(void)
{ 
    const int32_t l_25 = 0x0DFE9F48L;
    uint64_t l_41 = 8UL;
    int32_t l_71 = 1L;
    uint32_t l_200[3];
    int i;
    for (i = 0; i < 3; i++)
        l_200[i] = 0x8CD555FCL;
    for (g_2 = 0; (g_2 > 9); g_2 = safe_add_func_uint8_t_u_u(g_2, 1))
    { 
        const int64_t l_7[1] = {1L};
        const uint32_t l_24 = 0x22ABF7C2L;
        uint16_t l_26[1];
        int i;
        for (i = 0; i < 1; i++)
            l_26[i] = 0xACB3L;
        for (g_6 = 4; (g_6 >= 1); g_6 -= 1)
        { 
            if (l_7[0])
                break;
        }
        if (((~(((l_7[0] , (g_28 = ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((func_13(l_7[0], ((g_17 = 0x6F93BD5DL) >= ((((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((l_7[0] >= 0xDC0223DEC995F762LL), g_6)), l_24)), 0xF39281C1L)) && l_25) == l_26[0]) > l_25)), g_6) | 0xC010L) == 0L), l_25)), l_24)) == g_2))) , 0xF5D1CC0CL) || l_26[0])) ^ g_2))
        { 
            for (g_17 = 0; (g_17 <= 0); g_17 += 1)
            { 
                int i;
                if (l_26[g_17])
                    break;
            }
        }
        else
        { 
            int64_t l_70 = 0xE808E27FB601BA2ALL;
            int32_t l_201 = 0x299C8248L;
            for (g_17 = 0; (g_17 <= 0); g_17 += 1)
            { 
                int i;
                g_40 = func_29(l_26[g_17]);
                l_41 = (g_6 ^= 0x90942075L);
                l_201 ^= (l_200[0] = func_42(l_26[g_17], ((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((l_71 = ((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_26[g_17], 11)), ((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_26[g_17], l_26[g_17])), (-1L))) >= l_41), 5)) & 0x74L))) & g_38[2]) && g_38[2]) ^ l_70), (-8L))), (-7L))), l_70)) || l_70)), 3)), 0x4767EE7A741179D7LL)) | g_17) , 1L), g_40.f1)), l_26[g_17])) , l_71), g_6));
            }
        }
        if (g_40.f0)
            continue;
    }
    for (g_149.f0 = 0; (g_149.f0 == (-28)); --g_149.f0)
    { 
        g_40 = func_29(l_200[0]);
    }
    return g_6;
}



static int16_t  func_13(int64_t  p_14, uint32_t  p_15, uint8_t  p_16)
{ 
    const uint16_t l_27 = 1UL;
    g_6 ^= l_27;
    return l_27;
}



static struct S0  func_29(int32_t  p_30)
{ 
    const uint32_t l_34 = 18446744073709551613UL;
    int32_t l_35 = 0x69B2B293L;
    if (g_28)
    { 
        uint32_t l_31[1];
        int i;
        for (i = 0; i < 1; i++)
            l_31[i] = 8UL;
        ++l_31[0];
    }
    else
    { 
        int64_t l_36 = (-1L);
        g_39 = (((p_30 < 0x4BBC1846E972F33BLL) < (g_38[2] = (g_37 = (l_36 ^= ((l_35 = (l_34 < 0x70L)) || l_35))))) & g_28);
    }
    l_35 = l_34;
    return g_40;
}



static int32_t  func_42(uint16_t  p_43, uint32_t  p_44, uint32_t  p_45)
{ 
    union U2 l_76 = {0xE5145DB5L};
    int32_t l_81 = 0xE6FCAC8AL;
    int32_t l_82 = 0xF72093AAL;
    int32_t l_113 = 0x87FF9E38L;
    const int16_t l_146 = 0x44C2L;
    int32_t l_194 = (-1L);
    l_82 &= (safe_add_func_int8_t_s_s((l_81 |= (safe_div_func_uint64_t_u_u(((l_76 , (safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(0UL, p_43)) , l_76.f0), p_43))) <= 0xF8L), 1L))), g_6));
    if ((safe_mod_func_uint64_t_u_u((l_76.f0 = g_28), (safe_lshift_func_int16_t_s_u((((l_82 >= ((g_89 = (((safe_div_func_uint64_t_u_u(p_43, p_44)) >= p_44) , 4L)) < l_81)) > g_38[2]) || g_40.f2), p_43)))))
    { 
        int32_t l_102 = (-3L);
        union U1 l_123 = {0xBF50803CBA28DA27LL};
        int8_t l_134 = 0L;
        struct S0 l_145 = {0x9CEA194CL,0x19B6L,3UL};
        int32_t l_169 = 4L;
        uint32_t l_170 = 0x0B3B3C50L;
        if (((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_81, g_89)), l_102)) >= ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((l_82 = ((-9L) ^ g_40.f1)), 6)), p_43)), 1L)) , 2L), 2)) <= l_76.f0)) != g_38[1]), 0xCDL)), l_81)), g_17)) & l_76.f0))
        { 
            int32_t l_116 = 6L;
            int32_t l_119[1][1][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_119[i][j][k] = 0L;
                }
            }
            g_6 = l_102;
            g_120 |= (l_119[0][0][1] = ((((l_116 = (safe_rshift_func_int16_t_s_u(((l_113 = l_76.f0) , g_40.f1), (g_28++)))) >= (safe_lshift_func_uint8_t_u_u((p_44 , g_6), l_102))) ^ 0xEAL) < l_119[0][0][1]));
            g_6 &= ((safe_mod_func_int8_t_s_s((g_129 = (((g_37 ^ (((g_124[3] = l_123) , (g_40 , ((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_89, g_39)), p_43)) | g_2))) , g_40.f1)) > l_123.f0) && p_44)), 0x37L)) >= p_44);
        }
        else
        { 
            int32_t l_151[3];
            struct S0 l_191 = {0xB0709C26L,65527UL,0xADC3B9D7L};
            struct S0 l_195 = {1L,0x6ACFL,0UL};
            int i;
            for (i = 0; i < 3; i++)
                l_151[i] = 0x101CFD3AL;
            l_113 = (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(g_129, l_134)) > (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_43 = g_38[2]), ((g_40 , l_82) < g_40.f2))), 12)) != p_45) ^ g_39), p_44)) , l_145) , l_146), 0xBCA3L)), p_44))), g_129));
            if ((safe_lshift_func_int16_t_s_s(((((g_149 , (+(250UL == ((l_151[1] , (safe_div_func_uint16_t_u_u(g_149.f0, g_40.f1))) <= l_151[1])))) < g_6) ^ g_120) < p_45), g_154)))
            { 
                int32_t l_179 = 0x786C87C1L;
                l_81 = (safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((g_120 = (p_43 , ((((l_169 |= ((safe_sub_func_uint16_t_u_u(0x38A0L, (((safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((l_76.f0 = (safe_rshift_func_int8_t_s_s(l_145.f0, (5UL != g_154)))), 1UL)) & g_40.f1), (-8L))) & l_151[1]) > p_43))) ^ g_28)) > l_170) & 0x6A6E12AA013F98BFLL) < g_120))) != l_113), g_6)), g_171)), 0UL));
                l_82 = (0x7EBAEA5EAF73BA8ELL ^ ((((l_76 , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_40.f0, ((l_169 = (safe_unary_minus_func_int64_t_s(((safe_sub_func_uint8_t_u_u(p_45, 0x37L)) || g_154)))) , (-6L)))), g_149.f0))) || p_45) < l_179) , l_123.f0));
            }
            else
            { 
                uint64_t l_184 = 0xA5094A51A4853266LL;
                l_82 = (((safe_div_func_int32_t_s_s(g_120, 1UL)) < (0xEAL > ((((((safe_mod_func_int64_t_s_s(0x4B03959C9A882A54LL, 18446744073709551615UL)) < l_82) < g_38[2]) > l_151[1]) && 255UL) >= l_184))) < g_89);
                l_195 = func_29((g_40.f0 = ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((p_43 || (((18446744073709551615UL <= (((((safe_add_func_int8_t_s_s((l_82 ^= (g_129 = ((l_191 , ((safe_sub_func_int16_t_s_s(l_191.f1, g_124[3].f0)) , l_145.f0)) & l_123.f0))), 0x7FL)) <= l_76.f0) == l_146) < p_45) & p_43)) | p_45) ^ 0x20L)) < l_146), l_194)) >= g_38[0]), p_43)) == p_43)));
            }
            return g_17;
        }
    }
    else
    { 
        int16_t l_198 = 0x1C8CL;
        int32_t l_199 = 0xC0A783F8L;
        l_199 ^= ((safe_add_func_int8_t_s_s(p_43, (l_113 ^= (g_129 ^= (g_6 | g_40.f1))))) | (g_124[3].f0 = (l_198 ^= (l_146 <= g_38[2]))));
    }
    return l_82;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_124[i].f0, "g_124[i].f0", print_hash_value);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
