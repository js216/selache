// SPDX-License-Identifier: MIT
// cctest_csmith_4156e4c6.c --- cctest case csmith_4156e4c6 (csmith seed 1096213702)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7492b4c4 */
/* @exp_ticks 0x37f1 */

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

// Options:   -s 1096213702 -o /tmp/csmith_gen_6_8idh8_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   const int64_t  f2;
   int16_t  f3;
};

struct S1 {
   uint32_t  f0;
   const int32_t  f1;
   int64_t  f2;
   uint8_t  f3;
   int64_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S1  f0;
   int32_t  f1;
   uint16_t  f2;
   int32_t  f3;
   uint32_t  f4;
   struct S1  f5;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U4 {
   int32_t  f0;
   int32_t  f1;
};


static int32_t g_3 = (-1L);
static int32_t g_4 = 0x4B5C6F8BL;
static struct S2 g_26 = {{0x2038BE40L,-9L,0x884ADDBFD33F116ELL,255UL,0x996340C09C4F4FCFLL},0x275799D4L,65535UL,0x47FD326DL,0x5DF961DFL,{1UL,-1L,1L,251UL,1L}};
static struct S0 g_45 = {0UL,0x6E08938CL,0xECB2DECA365B034ELL,0xD8D8L};
static uint8_t g_67 = 0x89L;
static union U3 g_74 = {{1UL,0xE0ECED6DL,0x707E28E030EDB61DLL,0x304DL}};
static int64_t g_78 = 8L;
static int8_t g_95 = 0x48L;
static int8_t g_110 = 0xB3L;
static uint32_t g_114 = 0xEABE429CL;
static int32_t g_117 = 0x118DE828L;
static uint8_t g_119 = 4UL;
static union U4 g_154 = {0xC0FDE11BL};
static uint32_t g_218[1] = {18446744073709551615UL};
static uint32_t g_289[1] = {4294967288UL};
static int64_t g_373 = 0L;
static uint16_t g_374 = 0x78BAL;



static int32_t  func_1(void);
static union U3  func_7(uint32_t  p_8, uint8_t  p_9, int32_t  p_10, uint64_t  p_11);
static uint8_t  func_15(uint16_t  p_16, int32_t  p_17, int64_t  p_18, struct S0  p_19);
static struct S1  func_20(int32_t  p_21, struct S2  p_22);




static int32_t  func_1(void)
{ 
    uint64_t l_2[1][4][5] = {{{1UL,18446744073709551611UL,18446744073709551611UL,1UL,0UL},{1UL,18446744073709551611UL,18446744073709551611UL,1UL,0UL},{1UL,18446744073709551611UL,18446744073709551611UL,1UL,0UL},{1UL,18446744073709551611UL,18446744073709551611UL,1UL,0UL}}};
    int32_t l_256 = 1L;
    int32_t l_346 = (-8L);
    int32_t l_372 = 2L;
    uint32_t l_398 = 1UL;
    uint8_t l_401 = 1UL;
    int32_t l_409[1][5];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_409[i][j] = 7L;
    }
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        int8_t l_12 = 1L;
        uint16_t l_243 = 3UL;
        int32_t l_248 = 0x5E4E9FEBL;
        uint64_t l_297 = 18446744073709551611UL;
        int32_t l_312 = 1L;
        int32_t l_369 = (-7L);
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            uint8_t l_249 = 246UL;
            l_243 = ((safe_mul_func_uint16_t_u_u(g_3, 1UL)) ^ (((0x64L != ((func_7(l_12, l_12, g_4, g_3) , g_154.f1) ^ g_110)) != g_78) , 0xD75DL));
            g_117 = (((safe_sub_func_uint8_t_u_u((l_248 = ((safe_rshift_func_uint8_t_u_u((g_67 = 253UL), 6)) || g_26.f0.f4)), (g_110 = ((g_218[0] >= l_12) , l_249)))) , l_2[0][2][4]) > g_95);
            for (g_26.f0.f4 = 0; (g_26.f0.f4 >= 0); g_26.f0.f4 -= 1)
            { 
                union U4 l_250 = {0x4C6CEB2BL};
                uint16_t l_263 = 0xC502L;
                int i, j, k;
                l_256 = (l_250 , (0x20B721F5L < ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s((65535UL != (safe_mul_func_int8_t_s_s(l_2[g_3][(g_26.f0.f4 + 2)][(g_4 + 1)], l_2[g_4][g_4][g_3]))), 7)))) , (-6L))));
                g_117 = (1L < (((safe_add_func_uint16_t_u_u(((((((safe_rshift_func_int8_t_s_s((l_2[g_4][g_3][(g_26.f0.f4 + 2)] , (safe_mul_func_uint16_t_u_u((g_26.f5.f1 > (9L > l_2[g_4][g_3][(g_26.f0.f4 + 2)])), g_218[0]))), l_2[g_4][g_4][g_3])) > l_256) > 65530UL) != l_2[g_4][g_4][g_3]) ^ l_12) || 0x7E33L), g_119)) > l_263) >= 255UL));
                if (g_26.f0.f4)
                    break;
            }
        }
        if ((((safe_add_func_uint32_t_u_u(0xF2520D24L, (safe_rshift_func_int8_t_s_s(((g_154.f1 = ((safe_mul_func_int8_t_s_s(((g_67 |= (safe_rshift_func_int16_t_s_u(((l_256 = (~((g_110 = (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((g_95 |= g_26.f0.f4), l_243)), (g_45.f3 == g_78)))) <= g_26.f5.f0))) == 0x4518C668514E5AA3LL), 1))) >= g_26.f5.f1), g_26.f0.f3)) | 0UL)) , l_243), 5)))) | 0x1CA6L) != l_2[0][1][3]))
        { 
            uint64_t l_290 = 18446744073709551613UL;
            if (((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0xB6EBL, (0x85L || (g_95 = (l_248 |= (safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(0x22978E774DD7B4E7LL, (safe_div_func_int64_t_s_s((5UL | g_154.f0), g_289[0])))), g_67)) == g_4), 0xDEL))))))), g_26.f3)) < 0xE85BE0A6FDCA66A5LL) > g_119) > g_26.f5.f1))
            { 
                l_256 |= g_218[0];
                if (g_119)
                    break;
                g_4 = l_290;
            }
            else
            { 
                uint16_t l_291[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_291[i] = 3UL;
                l_291[0]++;
                l_248 = 0x1144C929L;
            }
        }
        else
        { 
            int64_t l_294 = (-7L);
            int32_t l_295 = 0x53C0D599L;
            int32_t l_296 = (-8L);
            l_297--;
            if (l_256)
                continue;
            l_256 = (safe_div_func_int8_t_s_s((l_312 = ((safe_mod_func_uint64_t_u_u(l_256, ((((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((g_119 ^ (safe_mul_func_int16_t_s_s((l_248 = (((g_26.f0.f0 && ((safe_mul_func_int8_t_s_s(((g_67 | g_26.f5.f4) > l_2[0][1][4]), 0x9FL)) & l_256)) <= g_26.f0.f2) | l_296)), 0x8301L))), 1)) , g_26.f0.f4), g_218[0])) >= l_296) != 0x795CE85C3B9F427DLL) || g_26.f5.f1))) & l_2[0][0][4])), g_218[0]));
        }
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        { 
            uint64_t l_313 = 0x9FADFD0A03F03C69LL;
            l_313--;
            for (g_74.f0.f3 = 0; (g_74.f0.f3 <= 0); g_74.f0.f3 += 1)
            { 
                int32_t l_324 = (-1L);
                int32_t l_325 = 0xE3CCF886L;
                uint32_t l_330 = 0x9CE6A989L;
                int i, j, k;
                g_26.f1 = (((((((((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_2[g_4][(g_3 + 2)][(g_4 + 3)], ((safe_lshift_func_uint8_t_u_s((--g_26.f5.f3), 1)) ^ (((l_325 = (l_324 = l_313)) != (((safe_add_func_int32_t_s_s(g_119, (safe_rshift_func_int8_t_s_s(g_45.f2, g_26.f0.f0)))) > 0xA0L) , g_119)) > l_2[g_4][(g_3 + 2)][(g_4 + 3)])))), (-1L))) & 0x3F38FB1F77DC29D4LL) != g_26.f1) | g_218[0]) && g_26.f0.f3) || 5UL) , l_330) || g_26.f2) ^ l_12);
            }
            if ((g_26.f5.f4 || (l_256 = ((~0xBF0E48C08D3C934CLL) != ((g_45.f3 ^ l_2[0][0][0]) || l_313)))))
            { 
                uint64_t l_345 = 18446744073709551610UL;
                int32_t l_347[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_347[i] = 0L;
                l_346 &= (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_256 = (!(((((safe_add_func_int32_t_s_s(((l_2[0][2][0] && (g_218[0] | (safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(l_345, 0x46C3AE12L)) == l_312) >= l_256), l_345)))) ^ g_4), 0x2F114BEDL)) <= g_26.f0.f4) >= l_345) <= (-1L)) | 1UL))), 0x11857914L)), g_26.f3)), g_289[0]));
                l_347[0] = g_26.f5.f1;
            }
            else
            { 
                uint32_t l_370 = 4294967287UL;
                g_26.f1 = (safe_div_func_uint32_t_u_u((((g_26.f2 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(g_289[0], (0xA1L > (safe_mul_func_uint8_t_u_u((((((g_74.f3 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(65533UL, ((((!(g_67 , 0x0C4B63F0L)) || 9UL) & l_369) | g_26.f5.f1))), g_26.f1)), 2)), l_370))) || l_370) <= g_45.f0) | l_312) > g_154.f0), l_370))))) , 4UL) < g_26.f5.f0), 2UL)), 2)), l_312)) == l_313)) >= g_26.f5.f2) || l_2[0][3][0]), l_248));
            }
            for (g_110 = 0; (g_110 >= 0); g_110 -= 1)
            { 
                int64_t l_371 = (-1L);
                --g_374;
                g_74.f3 = ((-6L) | 1L);
            }
        }
    }
    if ((g_74 , ((0xB3DCL | (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(g_26.f3, g_26.f5.f0)) && 0x4DAFEE23L) < g_218[0]), 0x42L)) , g_26.f5.f3), g_26.f0.f2))) ^ (-3L))))
    { 
        uint8_t l_396 = 5UL;
        int64_t l_397 = 0x30CA9BB82E0FF311LL;
        for (g_26.f0.f0 = 0; (g_26.f0.f0 > 5); g_26.f0.f0++)
        { 
            int32_t l_387 = 0x770C40EBL;
            for (g_26.f4 = 20; (g_26.f4 > 46); g_26.f4++)
            { 
                return l_387;
            }
            l_398 = (safe_lshift_func_int16_t_s_u((g_45.f1 ^ ((safe_sub_func_int64_t_s_s((((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_26.f4 > ((4294967286UL <= l_396) , g_26.f0.f1)), l_256)), 0x5FL)) > g_289[0]) >= l_396), l_2[0][3][2])) | l_397)), l_256));
            g_3 |= (l_397 > ((safe_rshift_func_int16_t_s_s(l_401, ((safe_add_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((g_26.f0.f4 = (+(g_218[0] ^ g_289[0]))) , l_372) != 0xA8L), l_409[0][3])), 0x4785L)) ^ g_26.f5.f3) ^ l_396), 0x4F2756B1L)) | g_114))) | 2L));
        }
        g_74.f3 = g_26.f3;
    }
    else
    { 
        uint8_t l_410 = 3UL;
        return l_410;
    }
    return l_398;
}



static union U3  func_7(uint32_t  p_8, uint8_t  p_9, int32_t  p_10, uint64_t  p_11)
{ 
    int32_t l_25[4][5] = {{(-10L),(-10L),(-10L),(-10L),(-1L)},{(-10L),(-10L),(-10L),(-10L),(-1L)},{(-10L),(-10L),(-10L),(-10L),(-1L)},{(-10L),(-10L),(-10L),(-10L),(-1L)}};
    int32_t l_44 = 0x72AF4091L;
    int32_t l_141 = (-4L);
    union U3 l_183 = {{0x5486D1CC4FA71182LL,0x4B272FC5L,-9L,0xC18CL}};
    int i, j;
    if (((((safe_mul_func_int8_t_s_s((func_15((((g_3 != (l_25[3][2] = (func_20(((((((g_4 >= ((safe_add_func_uint64_t_u_u(0UL, p_9)) , l_25[3][2])) , 4294967295UL) , g_4) | p_10) != g_3) , g_3), g_26) , l_25[0][4]))) <= 1UL) | 0x71DAL), l_44, l_44, g_45) , 0xCBL), 0xCFL)) & g_3) < l_44) == l_44))
    { 
        uint32_t l_138 = 0x3619917FL;
        const struct S1 l_139[1] = {{0UL,-1L,-1L,0xB2L,0x0D4552DD0EBA8DA9LL}};
        uint32_t l_142 = 1UL;
        int32_t l_147[3];
        int32_t l_170 = 0xCAB0785EL;
        int i;
        for (i = 0; i < 3; i++)
            l_147[i] = (-8L);
        for (g_74.f1 = 0; (g_74.f1 == 44); g_74.f1 = safe_add_func_int64_t_s_s(g_74.f1, 5))
        { 
            union U4 l_140 = {0xA0C2E42FL};
            if ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((+((safe_sub_func_int8_t_s_s(((0x98F860EBL >= (safe_add_func_int16_t_s_s(((l_138 && (l_139[0] , ((l_140 , 0x4F255190DBC920AALL) == p_8))) > p_11), g_4))) , p_11), (-10L))) != l_141)) > g_26.f3), l_142)) < g_117), p_8)) == l_140.f1), l_25[3][2])))
            { 
                if (p_9)
                    break;
                g_26.f1 ^= (((g_117 && p_11) && ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(p_8, l_25[3][2])), l_140.f1)) == l_141)) < 1UL);
                l_147[1] |= g_26.f3;
            }
            else
            { 
                int32_t l_155[5] = {4L,4L,4L,4L,4L};
                int i;
                l_155[0] &= (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(((65535UL != (g_154 , p_11)) < g_74.f3), 14)), 0x2A91C8B06D998AB7LL)), g_26.f0.f1));
            }
            for (g_26.f5.f4 = 0; (g_26.f5.f4 < (-30)); --g_26.f5.f4)
            { 
                int16_t l_162[4][3] = {{(-1L),0x0AFBL,(-1L)},{0x7327L,1L,0x7327L},{(-1L),0x0AFBL,(-1L)},{0x7327L,1L,0x7327L}};
                int i, j;
                l_170 = (safe_mod_func_int8_t_s_s((l_162[0][2] = ((-1L) | ((safe_rshift_func_uint8_t_u_u((l_147[1] = p_11), 6)) & 9UL))), (safe_lshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((+(l_25[3][2] &= 0xAFD3L)), l_141)), p_11)) > g_114), g_26.f5.f4))));
                if (l_140.f1)
                    break;
                if (g_74.f1)
                    break;
            }
        }
    }
    else
    { 
        uint8_t l_177 = 0x88L;
        int32_t l_196 = (-1L);
        int32_t l_198[4] = {0xF40E8074L,0xF40E8074L,0xF40E8074L,0xF40E8074L};
        int16_t l_217 = 0xB546L;
        int i;
        if ((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((l_177 == l_25[2][0]), (!((safe_rshift_func_int8_t_s_u(((g_95 || ((safe_mod_func_int32_t_s_s((-8L), 5L)) == g_78)) , l_177), g_26.f5.f1)) >= g_4)))), l_177)), g_26.f0.f4)))
        { 
            return l_183;
        }
        else
        { 
            uint32_t l_184 = 2UL;
            for (g_26.f5.f3 = 0; (g_26.f5.f3 <= 3); g_26.f5.f3 += 1)
            { 
                l_184 &= g_26.f0.f2;
                if (g_26.f3)
                    continue;
            }
        }
        for (g_26.f5.f4 = 0; (g_26.f5.f4 <= 3); g_26.f5.f4 += 1)
        { 
            int32_t l_189 = (-5L);
            int32_t l_197[3];
            int32_t l_199[2][4] = {{0xFB264947L,0xFB264947L,0xCF053E8EL,0xFB264947L},{0xFB264947L,(-9L),(-9L),0xFB264947L}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_197[i] = 0L;
            l_25[3][2] |= ((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(((g_119 > 0UL) && (0x64L && (p_11 <= l_189))), 0x86E4L)), 0)) & g_45.f1);
            l_199[0][0] ^= ((safe_div_func_uint16_t_u_u((0x8D2E864BL > 0xB0D4D545L), (safe_mul_func_int8_t_s_s((l_198[2] = (safe_add_func_uint64_t_u_u(((l_197[0] = (l_196 = 0xE5C0L)) < (p_9 >= 1L)), 0x77A122F168FF3D68LL))), p_11)))) == g_26.f1);
            for (p_11 = 0; (p_11 <= 3); p_11 += 1)
            { 
                int32_t l_216 = 0L;
                int i, j;
                l_216 = (l_25[p_11][p_11] = (1L != (((safe_mul_func_int16_t_s_s(((((((safe_mul_func_uint8_t_u_u((--p_9), ((safe_rshift_func_int16_t_s_u(p_10, 13)) <= (((safe_rshift_func_uint8_t_u_u(((l_198[1] ^= (((((safe_mod_func_int16_t_s_s((0UL != (((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((g_95 | g_114) != 0x9AF29F7BL), 6UL)), p_11)) < g_3) < g_26.f0.f3)), p_8)) < g_26.f5.f2) | g_78) == g_26.f2) ^ 4294967287UL)) == g_26.f5.f0), p_10)) <= g_78) & g_67)))) < l_177) && g_26.f0.f1) ^ g_26.f0.f0) | p_11) , p_8), p_8)) ^ 0x3794E6F4L) != 0xF3559A3BD0620ECALL)));
            }
        }
        g_218[0]++;
    }
    l_25[3][2] = (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((255UL <= (safe_sub_func_int32_t_s_s(l_183.f0.f2, p_11))), (safe_add_func_uint16_t_u_u((((((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((l_44 |= ((((safe_rshift_func_uint16_t_u_u(g_45.f1, 9)) & 0x44E87E4CC8F7C640LL) >= (-1L)) | l_25[3][2])), g_154.f1)), l_25[1][0])) & 4UL) >= g_95) || l_183.f0.f2) , 65526UL), p_11)))) != l_25[2][1]), 0xD4F3053BL)), 1UL)) ^ p_8), 0UL)) & g_26.f5.f3), g_45.f2)) , 0x1947B89FL), g_117));
    return l_183;
}



static uint8_t  func_15(uint16_t  p_16, int32_t  p_17, int64_t  p_18, struct S0  p_19)
{ 
    int8_t l_46[4] = {0x07L,0x07L,0x07L,0x07L};
    int32_t l_66 = 0x5449CDFCL;
    int32_t l_84 = 0x12A9C28CL;
    struct S2 l_86 = {{0x978AFB31L,9L,3L,254UL,0x26895F91D9B9EA2DLL},0L,65535UL,0L,0xDDFB24A3L,{0x001084B8L,7L,0x2A0AEB11F9A04B77LL,1UL,0L}};
    const int16_t l_96 = (-8L);
    int64_t l_105[5];
    int16_t l_118 = 1L;
    uint16_t l_122 = 0xB425L;
    int i;
    for (i = 0; i < 5; i++)
        l_105[i] = 0x062718EDF5E4C99DLL;
    g_26.f1 &= l_46[1];
    if (((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((-1L) || (p_18 , ((((!0UL) != (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((g_26.f2 = (safe_div_func_int32_t_s_s(((g_26 , 0x6DF6EF7D18C36E20LL) , l_46[3]), g_26.f4))), p_19.f2)) , 65533UL), 0x9521L))) != p_19.f1) , p_19.f0))), p_19.f3)), g_26.f5.f1)) != l_46[1]))
    { 
        const struct S0 l_58 = {18446744073709551613UL,0xABC748E3L,0L,0xC161L};
        struct S2 l_61 = {{0x87E15334L,-10L,0x2345427DA897626FLL,5UL,0x67921D28FF552847LL},0xADB6E275L,0x977AL,9L,0xEFA8C4D3L,{0xBE6313C7L,4L,-1L,254UL,1L}};
        p_17 = (l_46[3] & (((l_58 , (safe_sub_func_int64_t_s_s(((l_61 , ((safe_lshift_func_uint16_t_u_u((((--g_26.f5.f3) || (((l_46[1] ^ 4UL) || l_61.f0.f2) & l_61.f0.f2)) , 0x582EL), l_61.f3)) ^ g_26.f5.f0)) ^ p_19.f0), g_26.f5.f4))) | g_3) == 4L));
        --g_67;
    }
    else
    { 
        struct S2 l_104 = {{0xD356E4D9L,0L,0x1C3CDCB43784C600LL,0xC4L,-1L},0x7E5A13A2L,65527UL,0x0BB7073EL,0x7851F52EL,{0xA1E35D45L,0xBCC7407BL,9L,8UL,0x48BB85DC8BF38B4BLL}};
        int32_t l_108 = 0xDD38C2C0L;
        int32_t l_112 = 7L;
        for (l_66 = (-30); (l_66 > (-2)); l_66++)
        { 
            uint16_t l_85 = 0x96C5L;
            if (((safe_mod_func_uint64_t_u_u(8UL, 0x7F26D1EE2074A6A3LL)) ^ (g_74 , ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((p_18 = g_26.f0.f0) <= 0x09203CF1BE4320E1LL))), 0L)) >= 0x84595356L))))
            { 
                p_17 ^= g_26.f5.f4;
                return g_78;
            }
            else
            { 
                int32_t l_83 = 0x1E77B9E4L;
                l_84 = ((safe_add_func_int32_t_s_s(g_26.f2, ((g_78 || ((safe_mod_func_int8_t_s_s((0x154EL < ((l_83 & 0UL) & 3UL)), 0xD8L)) , l_83)) & (-6L)))) >= 18446744073709551613UL);
                return l_85;
            }
        }
        g_26.f1 = ((func_20(g_26.f3, l_86) , (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(0xCBF7460F080F8944LL, l_86.f5.f2)), 5))) && g_26.f0.f4);
        for (l_86.f2 = 0; (l_86.f2 <= 18); ++l_86.f2)
        { 
            uint64_t l_103 = 0xE9AE4E8F995CB7F8LL;
            int32_t l_107 = 0L;
            int32_t l_109 = 0xDD9DDBCAL;
            int32_t l_111 = 1L;
            int32_t l_113 = (-9L);
            for (g_26.f0.f0 = 12; (g_26.f0.f0 != 44); g_26.f0.f0++)
            { 
                uint32_t l_102 = 18446744073709551615UL;
                int32_t l_106[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_106[i] = 0x9D00B73EL;
                if (g_95)
                    break;
                p_17 = ((l_96 == ((l_104.f1 = (!(safe_mod_func_uint64_t_u_u(((l_86.f0.f2 , func_20((g_74.f2 = (l_86 , (safe_sub_func_int32_t_s_s((((l_102 & l_96) > p_18) || p_19.f2), l_103)))), l_104)) , l_105[1]), 4L)))) || p_19.f2)) & g_26.f5.f3);
                g_114--;
            }
            if (l_105[1])
                continue;
        }
    }
    --g_119;
    return l_122;
}



static struct S1  func_20(int32_t  p_21, struct S2  p_22)
{ 
    uint16_t l_33 = 0xB9D7L;
    int32_t l_36 = (-8L);
    int32_t l_37 = 0x74738709L;
    uint8_t l_40 = 1UL;
    struct S1 l_43 = {0UL,0x5737360BL,2L,255UL,-8L};
    p_22.f1 &= (safe_sub_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((0UL && ((((l_33 = 0xE09FL) & ((-1L) && (safe_mod_func_int16_t_s_s((l_36 = ((g_26 , g_3) , p_22.f5.f3)), l_37)))) || p_22.f0.f4) || l_36)) != 0x05CA7CEE7E287B83LL), 0xDDL)) , 6UL), 0UL)) < 0xB426AB799115BA09LL) || p_22.f5.f3), 0L));
    for (g_26.f5.f4 = 0; (g_26.f5.f4 == (-30)); --g_26.f5.f4)
    { 
        if (p_22.f5.f1)
            break;
    }
    ++l_40;
    return l_43;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_26.f0.f0, "g_26.f0.f0", print_hash_value);
    transparent_crc(g_26.f0.f1, "g_26.f0.f1", print_hash_value);
    transparent_crc(g_26.f0.f2, "g_26.f0.f2", print_hash_value);
    transparent_crc(g_26.f0.f3, "g_26.f0.f3", print_hash_value);
    transparent_crc(g_26.f0.f4, "g_26.f0.f4", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    transparent_crc(g_26.f4, "g_26.f4", print_hash_value);
    transparent_crc(g_26.f5.f0, "g_26.f5.f0", print_hash_value);
    transparent_crc(g_26.f5.f1, "g_26.f5.f1", print_hash_value);
    transparent_crc(g_26.f5.f2, "g_26.f5.f2", print_hash_value);
    transparent_crc(g_26.f5.f3, "g_26.f5.f3", print_hash_value);
    transparent_crc(g_26.f5.f4, "g_26.f5.f4", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_218[i], "g_218[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_289[i], "g_289[i]", print_hash_value);

    }
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
