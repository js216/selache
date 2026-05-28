// SPDX-License-Identifier: MIT
// cctest_csmith_0103d18e.c --- cctest case csmith_0103d18e (csmith seed 17027470)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x758a9941 */
/* @exp_ticks 0x3597 */

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

// Options:   -s 17027470 -o /tmp/csmith_gen_82pqj822/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   int8_t  f1;
};

struct S1 {
   uint32_t  f0;
   int32_t  f1;
};

union U2 {
   const struct S0  f0;
   struct S1  f1;
};

union U3 {
   const uint8_t  f0;
   uint32_t  f1;
   uint16_t  f2;
};


static int32_t g_3[2] = {0L,0L};
static int32_t g_16 = 0x6A7609FAL;
static uint32_t g_52 = 1UL;
static int32_t g_58[2] = {0xED9E6264L,0xED9E6264L};
static int8_t g_97 = 7L;
static int8_t g_101 = 0xD3L;
static uint64_t g_104 = 9UL;
static struct S1 g_112[1] = {{0x7A248570L,0L}};
static union U2 g_113 = {{0x95L,0x27L}};
static union U3 g_114 = {0UL};
static uint32_t g_161 = 0xC959C009L;
static int8_t g_174 = 0x80L;
static struct S0 g_201 = {0xEEL,-1L};
static uint32_t g_225 = 1UL;
static struct S0 g_277 = {0x5AL,0x21L};
static int32_t g_304 = 0x71C5D8BFL;
static int8_t g_327[4] = {3L,3L,3L,3L};
static int64_t g_355 = 0xB117E63882DB7AC1LL;
static int32_t g_371 = 0xB84C374BL;
static uint32_t g_376 = 4294967293UL;



static union U2  func_1(void);
static int8_t  func_5(const uint64_t  p_6, struct S0  p_7, uint32_t  p_8, int8_t  p_9);
static struct S0  func_19(int16_t  p_20, int32_t  p_21, struct S0  p_22, int64_t  p_23, int64_t  p_24);
static int16_t  func_25(int64_t  p_26, struct S1  p_27, int64_t  p_28);




static union U2  func_1(void)
{ 
    uint8_t l_2[3][1];
    int32_t l_4[4];
    struct S0 l_17 = {0xF1L,0x6CL};
    uint32_t l_367[3][2];
    uint16_t l_378 = 0x20AFL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 255UL;
    }
    for (i = 0; i < 4; i++)
        l_4[i] = 0x1B88146CL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_367[i][j] = 9UL;
    }
    for (g_3[0] = 0; (g_3[0] >= 0); g_3[0] -= 1)
    { 
        uint32_t l_18 = 4294967290UL;
        struct S1 l_362[5] = {{0x27003CCAL,6L},{0x27003CCAL,6L},{0x27003CCAL,6L},{0x27003CCAL,6L},{0x27003CCAL,6L}};
        uint32_t l_377 = 5UL;
        uint16_t l_379 = 0x6BF6L;
        int i;
        l_4[1] |= l_2[0][0];
    }
    return g_113;
}



static int8_t  func_5(const uint64_t  p_6, struct S0  p_7, uint32_t  p_8, int8_t  p_9)
{ 
    union U3 l_29 = {255UL};
    int32_t l_30 = 0xE294B58FL;
    struct S1 l_31 = {0xA82A6F94L,-2L};
    p_7 = func_19(func_25((l_29 , (l_30 = (g_3[1] == (l_29.f0 > g_3[0])))), l_31, g_3[0]), p_6, g_277, l_31.f1, p_7.f0);
    return p_7.f1;
}



static struct S0  func_19(int16_t  p_20, int32_t  p_21, struct S0  p_22, int64_t  p_23, int64_t  p_24)
{ 
    union U2 l_280 = {{0x63L,0L}};
    int32_t l_283 = 1L;
    struct S1 l_310[5][4][3] = {{{{0UL,0xAB18FCEAL},{0UL,0xAB18FCEAL},{4294967295UL,0xF378EE98L}},{{0UL,0xAB18FCEAL},{0xBC78CB2DL,1L},{0xB6539B9AL,0xD65DFEDCL}},{{4294967295UL,2L},{4294967295UL,-1L},{6UL,0L}},{{0xB6539B9AL,0xD65DFEDCL},{0xF2EAADC7L,0x8AAC3256L},{4294967295UL,2L}}},{{{4294967294UL,6L},{4294967295UL,2L},{6UL,0L}},{{0x8926AF90L,0L},{0x550EEFC1L,0L},{0xB6539B9AL,0xD65DFEDCL}},{{4294967295UL,0xF378EE98L},{3UL,-1L},{4294967295UL,0xF378EE98L}},{{0UL,2L},{3UL,-1L},{0x1AB2A092L,0x2D32F513L}}},{{{0x1AB2A092L,0x2D32F513L},{0x550EEFC1L,0L},{0xF2EAADC7L,0x8AAC3256L}},{{3UL,-1L},{4294967295UL,2L},{0UL,0xAB18FCEAL}},{{1UL,0x82DE7F64L},{0xF2EAADC7L,0x8AAC3256L},{0xB6539B9AL,0xD65DFEDCL}},{{0xF2EAADC7L,0x8AAC3256L},{4294967291UL,1L},{4294967295UL,2L}}},{{{4294967295UL,0xF378EE98L},{0UL,0xAB18FCEAL},{0UL,0xAB18FCEAL}},{{4294967295UL,-1L},{4294967294UL,6L},{0UL,0xAB18FCEAL}},{{0UL,2L},{0xBC78CB2DL,1L},{4294967295UL,2L}},{{4294967294UL,-1L},{0UL,2L},{0xB6539B9AL,0xD65DFEDCL}}},{{{0x62120D94L,-10L},{6UL,0L},{4294967294UL,6L}},{{0x1AB2A092L,0x2D32F513L},{0UL,2L},{0x8926AF90L,0L}},{{1UL,0x82DE7F64L},{0xBC78CB2DL,1L},{4294967295UL,0xF378EE98L}},{{4294967294UL,6L},{4294967294UL,6L},{0UL,2L}}}};
    int8_t l_356 = 0xFFL;
    int i, j, k;
    for (p_24 = (-11); (p_24 == 18); p_24++)
    { 
        int16_t l_291 = 0x9917L;
        int32_t l_329 = 0L;
        int32_t l_330[4] = {2L,2L,2L,2L};
        uint32_t l_358 = 0x14E47347L;
        int i;
        if ((((l_280 , (l_283 |= ((safe_sub_func_int32_t_s_s((g_174 == l_280.f0.f1), 6L)) || g_101))) && 0x3ABF98AFL) > 0UL))
        { 
            uint32_t l_284 = 0x604657D0L;
            int8_t l_302[3][1];
            int32_t l_303 = (-1L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_302[i][j] = (-1L);
            }
            if (l_284)
            { 
                g_112[0].f1 ^= 0L;
                g_201 = g_277;
                if (g_104)
                    break;
            }
            else
            { 
                uint32_t l_305 = 0x1456EAE4L;
                p_22 = g_277;
                g_58[0] = ((safe_sub_func_int64_t_s_s(p_21, (0xF650L <= (((safe_lshift_func_int8_t_s_u(0L, (safe_mod_func_uint8_t_u_u(p_21, 0xFBL)))) , l_291) && g_3[1])))) != l_284);
                l_305 &= (l_284 < (g_304 = ((l_303 = (safe_add_func_int32_t_s_s(l_283, (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_302[2][0] &= (p_22 , l_291)), l_280.f0.f1)) , 0x1907L), p_22.f0)), 1UL)), 3))))) || g_277.f1)));
            }
            for (p_20 = 0; (p_20 != 20); p_20 = safe_add_func_uint32_t_u_u(p_20, 2))
            { 
                return p_22;
            }
            for (g_161 = 0; (g_161 >= 19); g_161 = safe_add_func_uint8_t_u_u(g_161, 7))
            { 
                if (p_23)
                    break;
                g_112[0] = l_310[1][0][2];
                l_303 &= (p_22.f0 <= p_22.f1);
            }
        }
        else
        { 
            uint16_t l_328[3][1][4] = {{{65532UL,1UL,65532UL,0xF954L}},{{65532UL,0xF954L,0xF954L,65532UL}},{{0xA6DBL,0xF954L,0xA8E4L,0xF954L}}};
            int i, j, k;
            for (p_23 = 1; (p_23 >= 0); p_23 -= 1)
            { 
                uint16_t l_311 = 7UL;
                int i;
                l_311++;
                l_329 ^= (l_280.f1.f1 = ((g_114 , ((g_58[p_23] | (safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((((g_112[0].f1 < (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint8_t_u((((g_327[0] = (safe_div_func_int16_t_s_s((((l_310[1][0][2].f0 , 0x957207ABL) > p_22.f0) <= g_201.f1), l_291))) && p_22.f0) == l_310[1][0][2].f0))) == p_23), g_58[p_23]))) >= 18446744073709551615UL) , l_291) , l_328[0][0][0]), g_161)), 0UL)), 18446744073709551614UL)) > g_101), l_291))) | g_277.f1)) >= 0x89L));
            }
        }
        if (((l_330[1] = g_101) | ((p_21 != g_201.f1) || (((~(safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(((g_277 , g_3[0]) || p_24), 1L)), l_310[1][0][2].f0))) > 0x5241B253L) || p_22.f0))))
        { 
            l_310[1][0][2].f1 = (safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((p_22.f0 = ((+(l_310[1][0][2].f0 & g_277.f0)) ^ 1L)), 2)) < (-1L)), 0x9F24EA310EAAE944LL)) > 0xBEL), 0x4CL));
        }
        else
        { 
            int16_t l_352 = 0x23BCL;
            int32_t l_353 = 7L;
            if (l_330[1])
            { 
                struct S1 l_350[1][5][3] = {{{{4294967295UL,4L},{6UL,0L},{4294967295UL,4L}},{{4UL,0x77DB1310L},{0xBD576BE4L,6L},{4UL,0x77DB1310L}},{{4294967295UL,4L},{6UL,0L},{4294967295UL,4L}},{{4UL,0x77DB1310L},{0xBD576BE4L,6L},{4UL,0x77DB1310L}},{{4294967295UL,4L},{6UL,0L},{4294967295UL,4L}}}};
                int i, j, k;
                l_353 &= ((((!((safe_sub_func_uint16_t_u_u((l_350[0][0][1].f1 = (l_283 = (safe_rshift_func_int16_t_s_s(0x1999L, (safe_rshift_func_int16_t_s_u((((l_329 = (g_16 = ((g_114.f2 = (l_350[0][0][1] , ((p_21 > (!l_280.f0.f1)) < l_352))) <= g_3[0]))) , l_352) | g_58[0]), g_327[0])))))), g_201.f1)) < g_277.f1)) , 0x5920B80E0A357053LL) < 0x916B115BD37BD4C3LL) <= g_3[0]);
            }
            else
            { 
                int64_t l_354 = 2L;
                int32_t l_357[5];
                struct S1 l_361[1] = {{4294967292UL,-1L}};
                int i;
                for (i = 0; i < 5; i++)
                    l_357[i] = (-2L);
                l_358++;
                g_112[0].f1 |= (p_21 , 0x2E749505L);
                g_112[0] = l_361[0];
            }
        }
    }
    p_22 = g_277;
    return p_22;
}



static int16_t  func_25(int64_t  p_26, struct S1  p_27, int64_t  p_28)
{ 
    int32_t l_43 = 1L;
    int32_t l_51 = 0xC8E11F31L;
    int32_t l_53 = (-2L);
    int32_t l_72 = 0x90EB022BL;
    int32_t l_73 = 0x796D6318L;
    int32_t l_77 = 8L;
    int32_t l_79 = 0x4EA093EAL;
    int32_t l_81 = 1L;
    int32_t l_82 = 0x64CE3E23L;
    int32_t l_83 = 1L;
    int32_t l_84 = 0L;
    int32_t l_85 = 0x320CFA82L;
    int32_t l_86 = 0xC92F0D9FL;
    int32_t l_87 = 6L;
    int32_t l_88[4] = {0xEAE2A06AL,0xEAE2A06AL,0xEAE2A06AL,0xEAE2A06AL};
    uint32_t l_92 = 0UL;
    int16_t l_121 = (-10L);
    int8_t l_128 = 0x25L;
    uint64_t l_154 = 0x08CFFC910CF37CF8LL;
    int i;
    if ((l_53 |= ((!(safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((l_43 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(2UL, (g_52 = (((l_51 &= (l_43 , (((!((safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(((+((((l_43 >= l_43) , l_43) ^ 0xE197B2C3L) ^ p_28)) || l_43), g_3[0])) < p_26) , 0x2DL), 2UL)))) & 3L)) || l_43) || p_26))) , 0UL) <= 0UL)))) || 0x8303L) , (-1L)), l_43)), (-7L)))), g_3[1])) == 1UL), 0x58L))) & g_3[0])))
    { 
        uint64_t l_56 = 18446744073709551611UL;
        int32_t l_57 = (-7L);
        int32_t l_59 = 0x46DFF617L;
        int32_t l_60 = 0x0F1D91A4L;
        int32_t l_69 = 0x78C4B1E4L;
        int32_t l_70 = 4L;
        int32_t l_71 = 0x8B7CB4D6L;
        int32_t l_75 = 0x0F86AEFBL;
        int32_t l_78 = 0xE356D6BBL;
        int32_t l_80[4] = {0x6691A67DL,0x6691A67DL,0x6691A67DL,0x6691A67DL};
        uint8_t l_89[1];
        int16_t l_103 = (-1L);
        uint8_t l_119[5][4] = {{6UL,6UL,255UL,0UL},{0UL,0xAFL,255UL,0xAFL},{6UL,0xA4L,255UL,255UL},{0xAFL,0xA4L,0xA4L,0xAFL},{0xA4L,0xAFL,6UL,0UL}};
        uint32_t l_160 = 1UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_89[i] = 248UL;
        for (g_16 = 29; (g_16 > (-25)); g_16--)
        { 
            uint8_t l_61 = 0UL;
            int32_t l_66 = 2L;
            int32_t l_67[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_67[i][j] = 0xA242739AL;
            }
            l_57 = (l_56 &= (p_27.f1 = g_52));
            l_61++;
            for (p_26 = 0; (p_26 > (-18)); p_26--)
            { 
                int8_t l_68 = 8L;
                int32_t l_74 = (-4L);
                int32_t l_76[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_76[i] = 0x3D82F881L;
                ++l_89[0];
                g_58[0] = 0xD2503B3CL;
            }
        }
        ++l_92;
        if ((((((p_27.f1 | p_27.f0) & ((l_88[2] = p_27.f0) , g_58[1])) <= p_27.f1) <= l_92) && 0UL))
        { 
            uint32_t l_100 = 0xEA4427A0L;
            int32_t l_102[3];
            int i;
            for (i = 0; i < 3; i++)
                l_102[i] = 3L;
            l_102[1] = (g_101 = (g_58[0] = ((((((safe_sub_func_uint8_t_u_u((l_72 , ((((((g_97 && ((safe_mod_func_int32_t_s_s(0xB9DDBBE0L, g_58[0])) , (-2L))) == p_27.f1) < l_100) < p_26) & 0xA703095B69D60F7ELL) > p_26)), 0xDAL)) == 0x8EL) && 0L) >= p_27.f0) ^ g_3[0]) & l_51)));
            ++g_104;
            l_102[0] = (0x2812A6D494579C62LL & (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((g_58[1] , (l_51 != l_102[1])), l_86)) == g_16), (-10L))));
        }
        else
        { 
            uint8_t l_129 = 0xDEL;
            int32_t l_165 = 0x7B70EE5EL;
            int32_t l_166 = 1L;
            int32_t l_168 = 0x075F2963L;
            int32_t l_176 = 0x0CB55262L;
            int32_t l_180[5];
            int i;
            for (i = 0; i < 5; i++)
                l_180[i] = 0x073B97F1L;
            if (l_71)
            { 
                const struct S1 l_111 = {4UL,-8L};
                g_112[0] = l_111;
            }
            else
            { 
                const uint16_t l_120[1][1][2] = {{{0x52BBL,0x52BBL}}};
                int i, j, k;
                l_121 = ((((g_113 , 0x96L) == (g_114 , ((safe_div_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u(((p_28 == l_59) ^ l_119[2][2]), g_113.f0.f0)) & 0L) == p_27.f0), l_120[0][0][0])) > l_75))) || 0xB9F26E7CL) == l_81);
            }
            if ((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s(l_128, (l_77 = (((g_58[0] = p_27.f0) > p_28) < 8UL)))) , p_26) ^ p_27.f0) != l_129) || 0xC2L), 0x1AL)) | g_112[0].f1), p_28)))
            { 
                int8_t l_149 = 0x2FL;
                int32_t l_150[4][3][5] = {{{0x080E1D11L,(-9L),0x080E1D11L,0xC7585655L,0x8F534B39L},{1L,(-1L),1L,1L,(-4L)},{0x282C3DD9L,0L,0L,0x282C3DD9L,0x080E1D11L}},{{0L,0xFC347C86L,1L,(-4L),(-1L)},{(-1L),0xCCEB7EDCL,0x080E1D11L,0xCCEB7EDCL,(-1L)},{0xFC347C86L,1L,1L,(-4L),(-2L)}},{{4L,1L,0x282C3DD9L,0x282C3DD9L,1L},{(-3L),1L,0L,1L,(-2L)},{0xCCEB7EDCL,0x282C3DD9L,(-1L),0xC7585655L,(-1L)}},{{(-2L),(-2L),0xFC347C86L,(-3L),(-1L)},{0xCCEB7EDCL,0xF3A5184AL,4L,0x080E1D11L,0x080E1D11L},{(-3L),0xEB517B2DL,(-3L),0x84B00287L,(-4L)}}};
                struct S0 l_151 = {-7L,-1L};
                int i, j, k;
                g_58[1] |= (l_84 < (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((0xCFDAD02808DCF833LL | 9L) ^ (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(((+(((l_149 ^= (safe_lshift_func_uint8_t_u_u(2UL, p_28))) | 0UL) < g_52)) & g_3[0]), l_85)) & p_27.f1), 1UL))) && l_43) || g_112[0].f0), 5L)), p_27.f1)), 1UL)), l_150[1][2][3])), 1)), p_27.f0)));
                l_60 = ((-2L) || (-3L));
                g_58[0] = (l_151 , (g_113.f0 , (safe_mul_func_uint8_t_u_u(l_154, (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((g_161 ^= (~l_160)) != g_3[1]) <= g_101) <= 65527UL), 5)), l_160))))));
            }
            else
            { 
                uint16_t l_164 = 0x83B8L;
                int32_t l_167 = 0xDBD024A6L;
                int32_t l_169 = (-1L);
                int32_t l_170 = 0xA32CF900L;
                uint64_t l_171 = 18446744073709551615UL;
                int32_t l_175 = 0xDE06F248L;
                int32_t l_177 = 0L;
                int32_t l_178 = (-8L);
                int32_t l_179[4][3][3] = {{{0x5FEA7228L,0xA2B16FE8L,(-7L)},{0x995B3EA2L,(-7L),0x4A309CDAL},{(-4L),0x5FEA7228L,(-7L)}},{{(-1L),0L,0L},{(-4L),0L,0x3CA1DE74L},{(-4L),0x3CA1DE74L,(-4L)}},{{(-1L),(-1L),0xBF7F2EFAL},{(-4L),0x995B3EA2L,1L},{0x995B3EA2L,(-1L),(-2L)}},{{0x5FEA7228L,0x3CA1DE74L,0x5FEA7228L},{(-1L),0L,0x5FEA7228L},{(-7L),0L,(-2L)}}};
                uint8_t l_181[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_181[i] = 255UL;
                p_27.f1 = (safe_sub_func_uint32_t_u_u(l_164, (l_165 |= g_16)));
                l_171++;
                l_181[0]--;
            }
        }
    }
    else
    { 
        union U3 l_193[4] = {{255UL},{255UL},{255UL},{255UL}};
        struct S1 l_273 = {4294967291UL,-8L};
        int i;
lbl_206:
        for (l_128 = 0; (l_128 <= 0); l_128 += 1)
        { 
            int i;
            if ((safe_mul_func_uint16_t_u_u((+(safe_div_func_int8_t_s_s(g_58[(l_128 + 1)], (g_97 = (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_193[1] , (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_112[l_128] , (safe_rshift_func_uint8_t_u_u(0x3FL, 1))), p_26)), (-1L)))), 0xE5CCE37DL)), g_112[0].f0)))))), g_3[0])))
            { 
                struct S0 l_200 = {-10L,-1L};
                g_201 = l_200;
            }
            else
            { 
                return p_27.f0;
            }
        }
        if (p_27.f1)
        { 
            uint32_t l_204 = 1UL;
            int8_t l_205 = 1L;
            g_112[0].f1 ^= (((0xE0601FEE91F21F2ELL <= (((safe_add_func_uint32_t_u_u(g_97, (g_174 , 6L))) && l_204) != 0x82F6L)) , (-10L)) > g_161);
            return l_205;
        }
        else
        { 
            if (p_27.f1)
                goto lbl_206;
lbl_226:
            g_58[0] = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((l_79 && 6L) < (((+(safe_mul_func_int8_t_s_s((l_53 = (g_161 && (safe_rshift_func_int16_t_s_s((g_52 > p_27.f0), p_28)))), p_27.f0))) , g_114) , 0UL)), p_27.f0)), 3));
            if (l_86)
                goto lbl_206;
        }
        if ((g_114 , ((g_201 , p_27.f1) == ((l_51 |= (safe_mul_func_uint8_t_u_u((g_225 = ((!(safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((g_97 = (l_73 = (safe_mul_func_int16_t_s_s(((g_58[0] >= 0xA27E34FBL) > 6L), 1UL)))) < 1L), l_193[1].f0)), (-3L)))) == l_193[1].f0)), 0xF9L))) | g_112[0].f1))))
        { 
            uint32_t l_235 = 0x575D05C0L;
            int32_t l_248 = 1L;
            int32_t l_249 = 0x92071BF1L;
            if (l_84)
                goto lbl_226;
            for (l_77 = 0; (l_77 >= 0); l_77 -= 1)
            { 
                uint32_t l_231[4][3] = {{0xF036B345L,0xF036B345L,0xF036B345L},{4294967291UL,4294967291UL,4294967291UL},{0xF036B345L,0xF036B345L,0xF036B345L},{4294967291UL,4294967291UL,4294967291UL}};
                int32_t l_234 = 0xCA150083L;
                int i, j;
                g_112[0].f1 &= (safe_mod_func_uint8_t_u_u(((2L > (safe_rshift_func_int16_t_s_u((l_82 = ((p_27.f1 || ((l_234 = (l_231[3][1] >= (safe_div_func_int16_t_s_s((-5L), g_201.f0)))) && l_235)) ^ g_3[0])), 1))) | g_16), g_58[0]));
                l_249 = (g_58[0] = ((((g_97 = (safe_mul_func_int8_t_s_s((~1UL), (p_28 | (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((p_27.f0 ^= g_201.f0) ^ (safe_lshift_func_uint16_t_u_u(((((((+(safe_rshift_func_uint16_t_u_s(l_73, 9))) && p_28) & g_104) == 0xDEL) != 0x0D66DC162CA8FA0FLL) != g_113.f0.f1), l_231[3][2]))), p_27.f1)), l_235)))))) != g_113.f0.f1) , (-1L)) | l_248));
            }
        }
        else
        { 
            uint32_t l_271 = 0x1C75E046L;
            for (l_82 = 3; (l_82 >= 0); l_82 -= 1)
            { 
                int i;
                if (l_88[l_82])
                    break;
            }
            if ((+((((safe_add_func_int8_t_s_s(l_92, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u(4UL, ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((((g_58[1] |= g_101) < (safe_sub_func_int16_t_s_s((-8L), 0UL))) > l_271), l_53)), 0L)) >= l_193[1].f0))) || g_114.f0) > 0x1DL), 5)) | 0x74E2L), 4)), p_26)), l_193[1].f0)))) & 0UL) ^ l_271) && (-3L))))
            { 
                struct S1 l_272 = {1UL,0x098A7AC5L};
                l_273 = l_272;
            }
            else
            { 
                struct S0 l_274 = {1L,0xBEL};
                l_274 = l_274;
                if (l_53)
                    goto lbl_275;
lbl_275:
                g_112[0] = g_112[0];
                return l_193[1].f0;
            }
        }
    }
    p_27.f1 |= (safe_unary_minus_func_uint8_t_u(l_154));
    g_113.f1 = p_27;
    return g_225;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_112[i].f0, "g_112[i].f0", print_hash_value);
        transparent_crc(g_112[i].f1, "g_112[i].f1", print_hash_value);

    }
    transparent_crc(g_113.f0.f0, "g_113.f0.f0", print_hash_value);
    transparent_crc(g_113.f0.f1, "g_113.f0.f1", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_201.f1, "g_201.f1", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_277.f0, "g_277.f0", print_hash_value);
    transparent_crc(g_277.f1, "g_277.f1", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_327[i], "g_327[i]", print_hash_value);

    }
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
