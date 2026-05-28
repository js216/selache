// SPDX-License-Identifier: MIT
// cctest_csmith_d5d23bb6.c --- cctest case csmith_d5d23bb6 (csmith seed 3587324854)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x16439934 */
/* @exp_ticks 0xf4f8 */

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

// Options:   -s 3587324854 -o /tmp/csmith_gen_5qm9m3hj/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   int32_t  f1;
   const uint64_t  f2;
   int16_t  f3;
};

union U1 {
   const uint32_t  f0;
   struct S0  f1;
   int16_t  f2;
   struct S0  f3;
};


static int32_t g_4 = (-4L);
static int32_t g_11 = 0x2E1DFE00L;
static uint64_t g_13 = 5UL;
static int32_t g_34[4] = {(-3L),(-3L),(-3L),(-3L)};
static int64_t g_53 = 0x9572AB10E3A113D7LL;
static uint32_t g_54[4][7] = {{4294967286UL,1UL,4294967289UL,0x821D2A6AL,4294967289UL,1UL,4294967286UL},{4294967286UL,1UL,4294967289UL,0x821D2A6AL,4294967289UL,1UL,4294967286UL},{4294967286UL,1UL,4294967289UL,0x821D2A6AL,4294967289UL,1UL,4294967286UL},{4294967286UL,1UL,4294967289UL,0x821D2A6AL,4294967289UL,1UL,4294967286UL}};
static int8_t g_64 = (-6L);
static struct S0 g_65 = {3UL,0L,1UL,-1L};
static const int8_t *g_67 = (void*)0;
static int8_t *g_69 = (void*)0;
static uint32_t g_74 = 4294967287UL;
static uint8_t g_90 = 0x8DL;
static uint8_t *g_126 = &g_90;
static uint8_t **g_125 = &g_126;
static union U1 g_129 = {0x32677FA2L};
static int8_t g_151 = 0xD3L;
static uint64_t g_152 = 0x31699C01AE01D719LL;
static int32_t *g_164 = &g_4;
static int32_t **g_163 = &g_164;
static uint8_t g_186[1][1] = {{1UL}};
static int16_t g_222 = 3L;
static uint16_t g_224 = 0x0C5BL;
static int32_t g_306 = 0xBF3B3CAAL;
static uint8_t g_325 = 0UL;
static int8_t g_378[6] = {0xF6L,0xF6L,0xF6L,0xF6L,0xF6L,0xF6L};
static const int8_t **g_396 = &g_67;
static const int8_t ***g_395 = &g_396;
static uint64_t g_407 = 0x4362D38288692B57LL;
static struct S0 g_427[7][5][4] = {{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}},{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}},{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}},{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}},{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}},{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}},{{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}},{{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L},{0x778346D76933132CLL,-8L,18446744073709551615UL,-1L},{9UL,0x31BC2CC6L,0UL,0L}}}};
static struct S0 *g_426[2][7][5] = {{{&g_427[4][0][1],&g_65,&g_427[2][1][1],(void*)0,&g_427[4][4][3]},{(void*)0,&g_427[6][3][0],&g_427[4][0][1],&g_427[6][3][0],(void*)0},{&g_427[4][0][1],&g_65,&g_65,&g_427[4][4][1],&g_427[3][0][1]},{&g_427[4][0][1],&g_427[3][1][3],(void*)0,&g_427[4][0][1],&g_427[4][0][1]},{&g_427[4][4][1],&g_427[2][1][3],&g_427[4][4][1],&g_65,&g_427[3][0][1]},{(void*)0,&g_427[4][0][1],&g_427[3][1][3],(void*)0,(void*)0},{&g_427[3][0][1],&g_427[4][4][3],&g_65,&g_65,&g_427[4][4][3]}},{{(void*)0,&g_427[4][0][1],&g_427[3][1][3],(void*)0,&g_65},{&g_427[2][1][3],&g_65,&g_427[4][4][1],&g_427[2][1][1],&g_65},{&g_427[4][1][3],(void*)0,(void*)0,&g_427[4][1][3],&g_427[6][3][0]},{&g_427[2][1][3],&g_65,&g_65,&g_427[4][0][1],&g_427[2][1][1]},{(void*)0,&g_65,&g_427[4][0][1],&g_427[6][3][0],(void*)0},{&g_427[2][1][1],&g_427[2][1][1],&g_427[2][1][3],&g_65,&g_65},{(void*)0,&g_427[4][0][1],&g_65,&g_427[3][1][3],&g_427[4][1][3]}}};
static uint32_t g_450 = 18446744073709551608UL;
static int64_t g_470 = (-9L);
static int64_t g_473 = 0x9483A7A1C6416301LL;
static struct S0 g_559 = {0x570F44697506E1CFLL,0L,0xD6F18879E92FF5F3LL,0x0F93L};
static struct S0 g_561 = {0x098A088794468146LL,0x0B02AECFL,0x0DC48AB64A897BB4LL,1L};
static int32_t g_564 = 0x16100B94L;
static uint8_t g_565 = 0x7DL;
static uint16_t **** const g_566 = (void*)0;
static int8_t **g_596 = (void*)0;
static int8_t *** const g_595[4][4][5] = {{{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0},{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0}},{{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0},{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0}},{{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0},{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0}},{{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0},{(void*)0,&g_596,&g_596,(void*)0,&g_596},{&g_596,&g_596,(void*)0,&g_596,(void*)0}}};
static int8_t *** const *g_594 = &g_595[0][0][1];
static int8_t ***g_599 = &g_596;
static int8_t ****g_598 = &g_599;
static uint8_t g_607 = 255UL;
static struct S0 g_673[6] = {{0x563007B898C78852LL,0xA5CB5E54L,0x3024B0C67E730950LL,0xB8D4L},{0x563007B898C78852LL,0xA5CB5E54L,0x3024B0C67E730950LL,0xB8D4L},{0x563007B898C78852LL,0xA5CB5E54L,0x3024B0C67E730950LL,0xB8D4L},{0x563007B898C78852LL,0xA5CB5E54L,0x3024B0C67E730950LL,0xB8D4L},{0x563007B898C78852LL,0xA5CB5E54L,0x3024B0C67E730950LL,0xB8D4L},{0x563007B898C78852LL,0xA5CB5E54L,0x3024B0C67E730950LL,0xB8D4L}};
static uint32_t g_723 = 0x75BC8BE4L;
static uint16_t g_761 = 0x56B6L;
static const union U1 *g_765 = &g_129;
static const union U1 **g_764[4] = {&g_765,&g_765,&g_765,&g_765};
static const int8_t ****g_799[2][6] = {{(void*)0,&g_395,(void*)0,(void*)0,&g_395,(void*)0},{(void*)0,&g_395,(void*)0,(void*)0,&g_395,(void*)0}};
static const int8_t *****g_798 = &g_799[1][1];
static uint16_t g_824 = 0x10CAL;
static uint16_t g_827 = 0x19CCL;
static uint64_t *g_837 = (void*)0;
static uint64_t **g_836[2][1] = {{&g_837},{&g_837}};
static uint16_t g_838[6] = {0x6529L,0x6529L,0x6529L,0x6529L,0x6529L,0x6529L};
static int16_t *g_864 = &g_65.f3;
static int16_t **g_863 = &g_864;
static int16_t *** const g_862 = &g_863;
static uint64_t g_894[3][4] = {{0x362705B55B782BC1LL,0xD1B87678372DAE32LL,0xD1B87678372DAE32LL,0x362705B55B782BC1LL},{0xD1B87678372DAE32LL,0x362705B55B782BC1LL,0xD1B87678372DAE32LL,0xD1B87678372DAE32LL},{0x362705B55B782BC1LL,0x362705B55B782BC1LL,0x80FA9A57BE38F06BLL,0x362705B55B782BC1LL}};
static int32_t g_901 = (-9L);
static int16_t g_931 = 0xB4BFL;
static const int32_t g_968[3] = {8L,8L,8L};
static union U1 g_1017 = {0x681F0456L};
static uint64_t *g_1048 = &g_673[4].f0;
static uint64_t g_1074 = 0x84627B93A3AB1355LL;
static int16_t ****g_1113 = (void*)0;



static uint32_t  func_1(void);
static const int32_t  func_16(int32_t * p_17, int32_t * p_18, struct S0  p_19);
static int32_t  func_21(uint64_t  p_22);
static uint64_t  func_23(uint64_t  p_24);
static uint64_t  func_25(int32_t  p_26, int16_t  p_27, int16_t  p_28, int64_t  p_29, int64_t  p_30);
static int32_t  func_32(uint32_t  p_33);
static union U1 * func_35(int32_t * p_36, uint32_t  p_37, int32_t * p_38);
static int32_t * func_39(uint32_t  p_40, int32_t * p_41, int32_t * p_42, int32_t * p_43, int32_t * p_44);




static uint32_t  func_1(void)
{ 
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &g_4;
    int32_t *l_5 = &g_4;
    int32_t *l_6 = &g_4;
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &g_4;
    int32_t *l_10 = &g_4;
    int32_t *l_12[4][6] = {{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}};
    struct S0 l_20 = {0UL,0x26874BE7L,0xD238E486AEBA4D3ELL,-1L};
    int16_t ***l_920 = &g_863;
    int16_t ****l_919 = &l_920;
    uint32_t l_937[1][2];
    union U1 *l_1016 = &g_1017;
    int8_t **l_1042 = &g_69;
    uint64_t * const *l_1089 = (void*)0;
    int16_t *****l_1097 = &l_919;
    int32_t l_1111[6] = {4L,0xA2FE1513L,0xA2FE1513L,4L,0xA2FE1513L,0xA2FE1513L};
    uint16_t l_1112[6][5][1] = {{{0xB650L},{0x2E95L},{0xB650L},{65535UL},{65535UL}},{{0x1E84L},{65535UL},{0x1E84L},{65535UL},{65535UL}},{{0xB650L},{0x2E95L},{0xB650L},{65535UL},{65535UL}},{{0x1E84L},{65535UL},{0x1E84L},{65535UL},{65535UL}},{{0xB650L},{0x2E95L},{0xB650L},{0x6334L},{0xEC7DL}},{{0x2E95L},{65535UL},{0x2E95L},{0xEC7DL},{0x6334L}}};
    uint32_t *l_1114 = &g_723;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_937[i][j] = 0x84D81917L;
    }
    --g_13;
    for (g_11 = 0; g_11 < 4; g_11 += 1)
    {
        for (g_4 = 0; g_4 < 6; g_4 += 1)
        {
            l_12[g_11][g_4] = &g_4;
        }
    }
    return g_151;
}



static const int32_t  func_16(int32_t * p_17, int32_t * p_18, struct S0  p_19)
{ 
    int32_t l_31 = 0x279E56E6L;
    uint64_t *l_691[6] = {&g_673[4].f0,&g_673[4].f0,&g_673[4].f0,&g_673[4].f0,&g_673[4].f0,&g_673[4].f0};
    int32_t *l_900[4];
    const uint8_t l_902[1] = {0xDCL};
    int i;
    for (i = 0; i < 4; i++)
        l_900[i] = &g_901;
    g_901 |= func_21(func_23((p_19.f0 = (p_19.f2 ^ func_25(l_31, p_19.f3, ((((func_32(((((p_19.f0 >= g_13) ^ p_19.f2) || (g_34[2] |= (p_17 == (void*)0))) != l_31)) && p_19.f3) | l_31) < 0xFCL) , p_19.f2), p_19.f0, l_31)))));
    return l_902[0];
}



static int32_t  func_21(uint64_t  p_22)
{ 
    int8_t *l_748 = (void*)0;
    struct S0 l_763 = {1UL,0x81C301DBL,18446744073709551614UL,-5L};
    union U1 l_791 = {0xBF60D155L};
    int32_t *l_792 = &g_4;
    int32_t l_823 = 0x3EE4D375L;
    int16_t *l_832 = &g_129.f2;
    uint64_t *l_834 = &g_673[4].f0;
    uint64_t **l_833 = &l_834;
    uint16_t *l_861 = &g_761;
    uint16_t **l_860[2];
    uint16_t ***l_859[5] = {&l_860[1],&l_860[1],&l_860[1],&l_860[1],&l_860[1]};
    uint16_t l_867 = 65535UL;
    uint32_t l_876[6][4] = {{0UL,0x76AA5652L,0x0ECC1BA3L,0UL},{0UL,0xCBB4FBD1L,0UL,0x0ECC1BA3L},{0x68929372L,0xCBB4FBD1L,8UL,0UL},{0xCBB4FBD1L,0x76AA5652L,0x76AA5652L,0xCBB4FBD1L},{0UL,0UL,0x76AA5652L,0x0ECC1BA3L},{0xCBB4FBD1L,0x68929372L,8UL,0x68929372L}};
    union U1 **l_880 = (void*)0;
    uint32_t l_888[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_860[i] = &l_861;
    for (i = 0; i < 2; i++)
        l_888[i] = 3UL;
    for (g_564 = 0; (g_564 > 11); g_564 = safe_add_func_uint16_t_u_u(g_564, 2))
    { 
        int8_t *l_749 = &g_378[2];
        uint16_t ** const l_754 = (void*)0;
        int32_t l_787[5][5] = {{3L,3L,3L,3L,3L},{0L,0L,0L,0L,0L},{3L,3L,3L,3L,3L},{0L,0L,0L,0L,0L},{3L,3L,3L,3L,3L}};
        int32_t *l_793 = &l_787[3][4];
        uint64_t **l_841 = &l_834;
        int16_t ***l_866[7] = {&g_863,&g_863,&g_863,&g_863,&g_863,&g_863,&g_863};
        int16_t ****l_865 = &l_866[1];
        int i, j;
        for (g_129.f2 = 1; (g_129.f2 <= 5); g_129.f2 += 1)
        { 
            uint16_t *l_753 = &g_224;
            uint16_t ** const l_752 = &l_753;
            struct S0 l_769 = {0xA267EAECDC9808F2LL,0x1774CF6FL,0x8B50E64067F70951LL,0x8FC7L};
            uint64_t ***l_842[1][4][3];
            int16_t *l_855 = (void*)0;
            int16_t *l_856 = (void*)0;
            int16_t *l_857 = &l_791.f2;
            int16_t *l_858 = &g_559.f3;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_842[i][j][k] = (void*)0;
                }
            }
            for (g_222 = 0; (g_222 <= 1); g_222 += 1)
            { 
                const uint16_t *l_760 = &g_761;
                const uint16_t **l_759[4][3] = {{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760},{&l_760,&l_760,&l_760}};
                const uint16_t *** const l_758[3] = {&l_759[3][1],&l_759[3][1],&l_759[3][1]};
                const uint16_t *** const *l_757 = &l_758[0];
                const uint16_t *** const **l_756 = &l_757;
                int i, j;
                for (g_13 = 0; (g_13 <= 1); g_13 += 1)
                { 
                    int8_t *l_747 = &g_378[4];
                    uint16_t *l_750 = &g_224;
                    int16_t *l_751 = &g_673[4].f3;
                    int64_t *l_755 = &g_470;
                    int16_t *l_762 = &g_427[4][0][1].f3;
                    int i, j;
                    (*g_163) = (*g_163);
                    (**g_163) = (safe_lshift_func_int16_t_s_s(((*l_762) = (safe_mul_func_uint16_t_u_u(g_54[g_222][(g_222 + 1)], (safe_unary_minus_func_int64_t_s(((((*l_755) &= ((safe_mod_func_uint16_t_u_u(((*l_750) ^= (l_747 != (l_749 = l_748))), ((*l_751) = p_22))) , (l_752 == l_754))) == ((l_756 != (void*)0) < g_54[g_222][(g_222 + 1)])) > 65535UL)))))), g_559.f3));
                }
            }
            if ((l_763 , (g_764[3] != &g_765)))
            { 
                uint16_t **l_797 = &l_753;
                uint16_t ***l_796 = &l_797;
                uint16_t ****l_795[7][5][4] = {{{&l_796,&l_796,&l_796,(void*)0},{&l_796,&l_796,&l_796,&l_796},{(void*)0,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,(void*)0,(void*)0,&l_796}},{{&l_796,&l_796,&l_796,&l_796},{(void*)0,&l_796,(void*)0,&l_796},{(void*)0,&l_796,&l_796,&l_796},{&l_796,&l_796,(void*)0,&l_796},{&l_796,&l_796,&l_796,&l_796}},{{&l_796,&l_796,&l_796,&l_796},{(void*)0,(void*)0,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,(void*)0,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796}},{{&l_796,(void*)0,(void*)0,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,(void*)0,&l_796}},{{(void*)0,&l_796,(void*)0,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,(void*)0,&l_796,&l_796},{&l_796,&l_796,&l_796,&l_796},{&l_796,&l_796,(void*)0,&l_796}},{{&l_796,&l_796,(void*)0,&l_796},{(void*)0,&l_796,(void*)0,(void*)0},{&l_796,&l_796,(void*)0,&l_796},{&l_796,&l_796,(void*)0,&l_796},{&l_796,&l_796,&l_796,(void*)0}},{{&l_796,&l_796,(void*)0,&l_796},{&l_796,&l_796,&l_796,&l_796},{(void*)0,&l_796,&l_796,(void*)0},{&l_796,(void*)0,&l_796,(void*)0},{&l_796,&l_796,&l_796,&l_796}}};
                uint16_t ***** const l_794 = &l_795[6][0][0];
                int i, j, k;
                for (g_11 = 4; (g_11 >= 0); g_11 -= 1)
                { 
                    uint32_t l_785 = 0x33619A72L;
                    int32_t l_786 = 0x532E0F0EL;
                    int16_t *l_788 = (void*)0;
                    int16_t *l_789 = &g_65.f3;
                    int16_t *l_790 = &g_222;
                    int i;
                    (*g_164) ^= (safe_rshift_func_int8_t_s_u((~(l_769 , ((*l_790) = (((*l_789) = (((l_763 , (l_769.f1 < (((safe_lshift_func_int8_t_s_u((+l_769.f2), (safe_sub_func_int32_t_s_s(((((&g_126 == (void*)0) & (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((g_378[g_129.f2] = (safe_lshift_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((6UL & l_785), 11)), g_186[0][0])) == l_763.f2) , l_785), l_769.f1))), 7)), p_22))) <= l_785) < p_22), l_786)))) == l_787[4][2]) <= 0UL))) || 0xDA9EA3C6L) >= 0x9CL)) & 0x5E24L)))), (**g_125)));
                    l_793 = (l_791 , l_792);
                    (*g_164) = ((l_763 , ((void*)0 == l_794)) , (&g_594 != (g_798 = (void*)0)));
                    if ((**g_163))
                        break;
                }
                return (**g_163);
            }
            else
            { 
                struct S0 l_800 = {1UL,0L,0x740DB7A93A14A721LL,0x7E23L};
                int32_t l_818[5][5][6] = {{{0x8D78DC32L,0L,0L,0xA7DCA204L,0x25FE5228L,0xF5B34B88L},{7L,0xC4822256L,0x020466BEL,0x25FE5228L,0x020466BEL,0xC4822256L},{7L,0xF5B34B88L,0x25FE5228L,0xA7DCA204L,0L,0L},{0x8D78DC32L,0x25FE5228L,7L,4L,4L,7L},{0x25FE5228L,0x25FE5228L,0L,0x8D78DC32L,0L,4L}},{{0xC4822256L,0xF5B34B88L,0xA7DCA204L,0L,0x020466BEL,0L},{0xA7DCA204L,0xC4822256L,0xA7DCA204L,0L,0x25FE5228L,4L},{(-2L),0L,0L,0xE1448DFFL,7L,7L},{0xE1448DFFL,7L,7L,0xE1448DFFL,0L,0L},{(-2L),4L,0x25FE5228L,0L,0xA7DCA204L,0xC4822256L}},{{0xA7DCA204L,0L,0x020466BEL,0L,0xA7DCA204L,0xF5B34B88L},{0xC4822256L,4L,0L,0x8D78DC32L,0L,0x25FE5228L},{0x25FE5228L,7L,4L,4L,7L,0x25FE5228L},{0x8D78DC32L,0L,0L,0xA7DCA204L,0x25FE5228L,0xF5B34B88L},{7L,0xC4822256L,0x020466BEL,0x25FE5228L,0x020466BEL,0xC4822256L}},{{7L,0xF5B34B88L,0x25FE5228L,0xA7DCA204L,0L,0L},{0x8D78DC32L,0x25FE5228L,7L,4L,4L,7L},{0x25FE5228L,0x25FE5228L,0L,0x8D78DC32L,0L,4L},{0xC4822256L,0xF5B34B88L,0xA7DCA204L,0L,0x020466BEL,0L},{0xA7DCA204L,0xC4822256L,0xA7DCA204L,0L,0x25FE5228L,4L}},{{(-2L),0L,0L,0xE1448DFFL,7L,7L},{0xE1448DFFL,7L,7L,0xE1448DFFL,0L,0L},{(-2L),4L,0x25FE5228L,0L,0xA7DCA204L,0xC4822256L},{0xA7DCA204L,0L,0x020466BEL,0L,0xA7DCA204L,0xF5B34B88L},{0xC4822256L,4L,0L,0x8D78DC32L,0L,0x25FE5228L}}};
                int32_t *l_820 = &l_818[4][2][5];
                int32_t *l_821 = (void*)0;
                int32_t *l_822[3][5] = {{&l_787[1][2],&l_787[1][2],&l_787[1][2],&l_818[4][1][2],&l_818[4][2][5]},{&g_4,&g_4,&g_4,&g_4,&l_787[4][2]},{&g_4,&l_818[4][1][2],&l_787[4][2],&l_787[4][2],&l_818[4][1][2]}};
                int16_t *l_831[1];
                int16_t **l_830 = &l_831[0];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_831[i] = &g_222;
                for (g_561.f0 = 0; (g_561.f0 <= 1); g_561.f0 += 1)
                { 
                    const int32_t l_817[5] = {0x2635781CL,0x2635781CL,0x2635781CL,0x2635781CL,0x2635781CL};
                    int64_t *l_819[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_819[i][j] = &g_470;
                    }
                    (*l_792) = (((l_800 , (p_22 || (((*l_793) = ((p_22 | ((safe_sub_func_uint16_t_u_u(((*l_753) ^= (((l_818[4][2][5] = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(0UL, ((safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(0xD70AD52F539918EDLL, ((g_378[3] , ((safe_sub_func_uint16_t_u_u((((1L > l_800.f2) < (-4L)) & 0x91BE59D801771AADLL), p_22)) != 0x778BD77CL)) > p_22))) > (*l_792)), 14)) <= 0xCA3CC55DL))) , l_817[1]), 0xBCL)) & p_22)) >= l_817[1]) , 65526UL)), 0x42D9L)) == 1UL)) , g_673[4].f1)) <= p_22))) & 0x29L) & l_769.f1);
                }
                g_824++;
                g_827++;
                if ((((*l_830) = (void*)0) == l_832))
                { 
                    uint64_t ***l_835 = &l_833;
                    g_836[0][0] = ((*l_835) = l_833);
                }
                else
                { 
                    if ((*l_792))
                        break;
                    if ((**g_163))
                        break;
                    if ((**g_163))
                        break;
                    --g_838[2];
                    return p_22;
                }
            }
            l_841 = l_841;
            (*l_792) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((p_22 != (safe_mul_func_uint16_t_u_u((g_559.f1 < ((void*)0 == &g_765)), (safe_sub_func_uint16_t_u_u((&l_754 == (((*l_858) ^= ((*l_857) = p_22)) , l_859[0])), l_769.f1))))), 2)), (*l_793))), 7));
            for (g_64 = 0; (g_64 <= 1); g_64 += 1)
            { 
                (*g_164) = (p_22 || p_22);
            }
        }
        (*l_865) = g_862;
        if (l_867)
        { 
            return (**g_163);
        }
        else
        { 
            union U1 ***l_881 = (void*)0;
            union U1 ***l_882 = &l_880;
            union U1 ***l_883 = (void*)0;
            union U1 *l_886 = &g_129;
            union U1 **l_885[1][6] = {{&l_886,&l_886,&l_886,&l_886,&l_886,&l_886}};
            union U1 ***l_884 = &l_885[0][4];
            int32_t l_887 = 0x9F0616EFL;
            int32_t l_889 = 0xACACA9C1L;
            int32_t *l_890 = &l_887;
            int32_t *l_891 = &l_787[3][1];
            int32_t *l_892 = &l_823;
            int32_t *l_893[6][3] = {{&g_4,(void*)0,&g_4},{&l_787[2][4],&l_823,(void*)0},{&l_787[2][4],&l_787[2][4],&l_823},{&g_4,&l_823,&l_823},{&l_823,(void*)0,(void*)0},{&g_4,(void*)0,&g_4}};
            int i, j;
            l_889 |= ((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((&l_791 != (void*)0) || l_876[1][1]) < (p_22 < (p_22 , ((safe_add_func_uint32_t_u_u((!(((((*l_884) = ((*l_882) = l_880)) != &g_765) < l_887) == (*g_126))), p_22)) < l_888[1])))), l_887)), (-1L))) | g_838[5]), 5)) >= 0x19L);
            ++g_894[1][3];
        }
        if (p_22)
            break;
        for (g_559.f0 = 16; (g_559.f0 == 26); g_559.f0++)
        { 
            int32_t l_899[3][6] = {{0x4D5A2835L,0x64D9E762L,0x4D5A2835L,0x64D9E762L,0x4D5A2835L,0x64D9E762L},{0x4D5A2835L,0x64D9E762L,0x4D5A2835L,0x64D9E762L,0x4D5A2835L,0x64D9E762L},{0x4D5A2835L,0x64D9E762L,0x4D5A2835L,0x64D9E762L,0x4D5A2835L,0x64D9E762L}};
            int i, j;
            if (p_22)
            { 
                return (*g_164);
            }
            else
            { 
                return l_899[2][2];
            }
        }
    }
    return p_22;
}



static uint64_t  func_23(uint64_t  p_24)
{ 
    const uint8_t l_694 = 0xAAL;
    uint64_t *l_695 = &g_427[4][0][1].f0;
    int32_t ***l_700 = &g_163;
    int32_t l_703 = 1L;
    int32_t l_720 = 0x8D68439BL;
    if ((safe_sub_func_uint32_t_u_u((((l_694 , (-8L)) || p_24) > (--(*l_695))), (safe_lshift_func_uint16_t_u_u((l_700 != ((0UL ^ (safe_mul_func_int16_t_s_s(((0UL <= (((void*)0 != &g_222) & 0xF632EC82L)) | p_24), 0x2440L))) , l_700)), (***l_700))))))
    { 
        int32_t *l_704 = &g_4;
        int32_t *l_705 = &g_4;
        int32_t *l_706 = &l_703;
        int32_t l_707 = (-3L);
        int32_t *l_708 = &g_4;
        int32_t *l_709 = &l_703;
        int32_t *l_710 = &l_703;
        int32_t *l_711 = &l_703;
        int32_t *l_712 = &l_707;
        int32_t *l_713 = (void*)0;
        int32_t *l_714 = (void*)0;
        int32_t *l_715 = &g_4;
        int32_t *l_716 = &l_703;
        int32_t *l_717 = &l_707;
        int32_t *l_718 = &l_703;
        int32_t *l_719 = (void*)0;
        int32_t *l_721 = &l_720;
        int32_t *l_722[1][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        uint8_t ***l_734 = &g_125;
        uint32_t *l_735 = &g_54[3][4];
        int i, j, k;
        g_723--;
        (*l_715) = (((safe_sub_func_int64_t_s_s((0x120A5606815ADC1ALL >= p_24), (safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint32_t_u_u(0xBC75B3C2L, (safe_sub_func_int32_t_s_s((l_734 == &g_125), ((*l_735) = 0xFA72A12BL))))) | (***l_700)) , 3UL) < 0x9103L), (***l_700))))) && 1UL) == (***l_700));
    }
    else
    { 
        for (g_470 = 4; (g_470 != (-2)); g_470--)
        { 
            return (***l_700);
        }
    }
    return p_24;
}



static uint64_t  func_25(int32_t  p_26, int16_t  p_27, int16_t  p_28, int64_t  p_29, int64_t  p_30)
{ 
    int32_t l_45 = 0x0C387C7AL;
    int32_t *l_46 = &l_45;
    union U1 *l_690 = &g_129;
    union U1 **l_689 = &l_690;
    (*l_689) = func_35(func_39(l_45, l_46, &l_45, &g_4, &l_45), (g_65.f2 != g_65.f1), l_46);
    return g_561.f3;
}



static int32_t  func_32(uint32_t  p_33)
{ 
    return p_33;
}



static union U1 * func_35(int32_t * p_36, uint32_t  p_37, int32_t * p_38)
{ 
    const uint16_t l_100 = 1UL;
    int32_t l_123 = 0x99A04901L;
    int32_t l_124 = 7L;
    int32_t *l_162[5][3][1] = {{{&l_124},{&l_123},{&l_124}},{{&l_123},{&l_124},{&l_123}},{{&l_124},{&l_123},{&l_124}},{{&l_123},{&l_124},{&l_123}},{{&l_124},{&l_123},{&l_124}}};
    int32_t ** const l_161 = &l_162[1][1][0];
    union U1 l_242 = {0x1718A239L};
    uint32_t l_243 = 0x81314244L;
    int32_t l_321 = 0x958F17F7L;
    int32_t *l_388 = &l_123;
    const int8_t ***l_398 = &g_396;
    int32_t l_422 = 0x3BF8C482L;
    int8_t **l_504 = &g_69;
    int8_t ***l_503 = &l_504;
    int8_t *** const *l_502 = &l_503;
    int32_t ***l_527 = &g_163;
    struct S0 *l_560 = &g_561;
    uint16_t *l_583 = &g_224;
    uint16_t **l_582 = &l_583;
    int i, j, k;
    for (g_65.f1 = 3; (g_65.f1 >= 0); g_65.f1 -= 1)
    { 
        int8_t l_116 = 0x3BL;
        int32_t l_121 = 0x91ECAE5DL;
        union U1 *l_128 = &g_129;
        int32_t *l_148 = &g_4;
        int32_t *l_149 = (void*)0;
        int32_t *l_150[2];
        struct S0 l_169 = {0x1251B008363A23D7LL,0x4DA6B924L,0x8A10D3AC039BA748LL,0x4F8FL};
        int32_t ***l_178[1];
        uint8_t **l_189 = &g_126;
        int8_t *l_213 = &g_151;
        int32_t *l_387 = &l_123;
        int64_t *l_445 = &g_53;
        int32_t l_446 = (-6L);
        uint16_t l_475[1][7] = {{65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL}};
        int32_t *l_476 = &g_4;
        int i, j;
        for (i = 0; i < 2; i++)
            l_150[i] = &l_123;
        for (i = 0; i < 1; i++)
            l_178[i] = &g_163;
        for (g_13 = 0; (g_13 <= 3); g_13 += 1)
        { 
            uint64_t *l_117 = &g_65.f0;
            int16_t *l_120[2][7][4] = {{{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3}},{{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3},{&g_65.f3,&g_65.f3,&g_65.f3,&g_65.f3}}};
            uint8_t *l_122[1][5][5] = {{{&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90,&g_90,&g_90}}};
            int i, j, k;
            (*p_38) = ((((safe_rshift_func_int16_t_s_u((g_65.f3 = ((safe_div_func_int32_t_s_s((+((g_54[g_13][g_65.f1] && (safe_lshift_func_int8_t_s_s(((l_124 = ((((((l_100 , ((safe_mod_func_int16_t_s_s(p_37, g_34[2])) > (safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_123 |= ((safe_mod_func_int8_t_s_s(l_100, (safe_mod_func_uint64_t_u_u((!(*p_38)), ((*l_117)++))))) < (l_121 |= l_100))), g_54[g_13][g_65.f1])), g_74)) < g_54[g_13][g_65.f1]), (-1L))))) <= g_54[g_13][g_65.f1]) , 0xAA4DE568L) >= 0xCF3C947AL) <= 0x9EL) || l_116)) <= 0x0AL), p_37))) ^ p_37)), p_37)) <= l_100)), g_13)) || g_90) & g_54[g_13][g_65.f1]) , l_116);
            for (g_65.f3 = 0; (g_65.f3 <= 3); g_65.f3 += 1)
            { 
                uint8_t ***l_127 = &g_125;
                (*l_127) = g_125;
                return l_128;
            }
            (*p_38) = (g_129 , (((safe_mod_func_uint64_t_u_u(0xAF96686465E51F8FLL, (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_37, (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((g_54[g_13][g_65.f1] & ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((6L >= (((p_37 & (p_37 , g_54[g_13][g_65.f1])) ^ l_100) < 0x9769L)), 0x24L)), p_37)), g_34[0])), 5)) && g_34[0])) == l_100), l_116)), g_65.f3)))), l_116)))) || l_124) , (-7L)));
        }
        ++g_152;
    }
    for (l_242.f3.f3 = 0; (l_242.f3.f3 >= (-27)); l_242.f3.f3 = safe_sub_func_int16_t_s_s(l_242.f3.f3, 5))
    { 
        int8_t *l_506[7] = {&g_64,&g_64,&g_378[4],&g_64,&g_64,&g_378[4],&g_64};
        int32_t l_516[2];
        int8_t ****l_570 = &l_503;
        uint16_t ** const l_581 = (void*)0;
        uint16_t ***l_627 = &l_582;
        uint16_t ****l_626[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_627,&l_627,&l_627,&l_627,&l_627,&l_627,&l_627},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U1 *l_647 = &l_242;
        struct S0 *l_672 = &g_673[4];
        int i, j;
        for (i = 0; i < 2; i++)
            l_516[i] = (-7L);
    }
    (*p_38) &= (*p_36);
    return &g_129;
}



static int32_t * func_39(uint32_t  p_40, int32_t * p_41, int32_t * p_42, int32_t * p_43, int32_t * p_44)
{ 
    int32_t *l_47 = &g_4;
    int32_t *l_48 = &g_4;
    int32_t l_49[1][4][5] = {{{0xB5A40A7BL,1L,1L,0xB5A40A7BL,1L},{0xB5A40A7BL,0xB5A40A7BL,0x584125DBL,0xB5A40A7BL,0xB5A40A7BL},{1L,0xB5A40A7BL,1L,1L,0xB5A40A7BL},{0xB5A40A7BL,1L,1L,0xB5A40A7BL,1L}}};
    int32_t *l_50 = &l_49[0][3][1];
    int32_t *l_51 = &g_4;
    int32_t *l_52[5][3][3] = {{{(void*)0,&l_49[0][3][4],&l_49[0][1][0]},{&l_49[0][0][0],&l_49[0][0][0],&l_49[0][3][4]},{&g_4,(void*)0,&l_49[0][0][0]}},{{&l_49[0][0][0],&l_49[0][0][0],(void*)0},{&g_4,(void*)0,(void*)0},{&l_49[0][0][0],(void*)0,&l_49[0][0][0]}},{{(void*)0,&l_49[0][3][4],&l_49[0][3][4]},{&l_49[0][2][4],&l_49[0][0][0],&l_49[0][0][0]},{&l_49[0][1][0],&g_4,(void*)0}},{{&l_49[0][3][4],&g_4,(void*)0},{&l_49[0][0][0],(void*)0,&l_49[0][0][0]},{(void*)0,&g_4,&l_49[0][3][4]}},{{(void*)0,&g_4,&l_49[0][1][0]},{&l_49[0][0][0],&l_49[0][0][0],&l_49[0][2][4]},{&l_49[0][3][4],&l_49[0][3][4],(void*)0}}};
    int8_t l_72 = 0x10L;
    int8_t **l_81 = &g_69;
    int8_t ***l_84 = &l_81;
    int8_t **l_86 = &g_69;
    uint8_t *l_89 = &g_90;
    int32_t * const l_91 = &g_4;
    int32_t **l_92 = &l_52[3][0][0];
    int i, j, k;
    g_54[3][4]--;
    for (g_13 = 7; (g_13 > 1); g_13 = safe_sub_func_uint64_t_u_u(g_13, 8))
    { 
        int16_t l_66 = 1L;
        int32_t l_70 = 1L;
        int32_t l_73 = 0L;
        for (p_40 = (-25); (p_40 >= 16); p_40 = safe_add_func_uint8_t_u_u(p_40, 7))
        { 
            int8_t *l_63[3][7][4] = {{{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64}},{{&g_64,&g_64,&g_64,&g_64},{(void*)0,&g_64,(void*)0,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64},{&g_64,(void*)0,(void*)0,&g_64}},{{(void*)0,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64},{&g_64,(void*)0,&g_64,&g_64},{&g_64,&g_64,(void*)0,&g_64}}};
            const int8_t **l_68 = &g_67;
            int32_t l_71 = (-1L);
            int i, j, k;
            (*l_48) = (p_40 <= (0xBFE1A273L & ((safe_add_func_int8_t_s_s((g_64 = (*l_47)), ((g_65 , (l_66 ^ (g_54[3][4] , (((*l_68) = g_67) != g_69)))) , 0x54L))) <= p_40)));
            --g_74;
            if (g_54[3][4])
                break;
            (*l_48) = (safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint16_t_u(g_64))));
        }
    }
    (*p_41) = (safe_rshift_func_uint16_t_u_u(((l_81 == &g_69) && (safe_mod_func_int8_t_s_s((p_40 != (((*l_50) = 0L) ^ (((*l_84) = l_81) != ((((*l_48) , (~((g_53 = (*l_48)) < 5L))) > p_40) , l_86)))), g_65.f1))), g_4));
    (*p_43) = (safe_rshift_func_uint8_t_u_s(((*l_89) = g_65.f3), ((void*)0 == &l_81)));
    (*l_92) = l_91;
    return &g_4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_54[i][j], "g_54[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_65.f3, "g_65.f3", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_186[i][j], "g_186[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_378[i], "g_378[i]", print_hash_value);

    }
    transparent_crc(g_407, "g_407", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_427[i][j][k].f0, "g_427[i][j][k].f0", print_hash_value);
                transparent_crc(g_427[i][j][k].f1, "g_427[i][j][k].f1", print_hash_value);
                transparent_crc(g_427[i][j][k].f2, "g_427[i][j][k].f2", print_hash_value);
                transparent_crc(g_427[i][j][k].f3, "g_427[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_559.f0, "g_559.f0", print_hash_value);
    transparent_crc(g_559.f1, "g_559.f1", print_hash_value);
    transparent_crc(g_559.f2, "g_559.f2", print_hash_value);
    transparent_crc(g_559.f3, "g_559.f3", print_hash_value);
    transparent_crc(g_561.f0, "g_561.f0", print_hash_value);
    transparent_crc(g_561.f1, "g_561.f1", print_hash_value);
    transparent_crc(g_561.f2, "g_561.f2", print_hash_value);
    transparent_crc(g_561.f3, "g_561.f3", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_673[i].f0, "g_673[i].f0", print_hash_value);
        transparent_crc(g_673[i].f1, "g_673[i].f1", print_hash_value);
        transparent_crc(g_673[i].f2, "g_673[i].f2", print_hash_value);
        transparent_crc(g_673[i].f3, "g_673[i].f3", print_hash_value);

    }
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_838[i], "g_838[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_894[i][j], "g_894[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_968[i], "g_968[i]", print_hash_value);

    }
    transparent_crc(g_1017.f0, "g_1017.f0", print_hash_value);
    transparent_crc(g_1017.f2, "g_1017.f2", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
