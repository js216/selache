// SPDX-License-Identifier: MIT
// cctest_csmith_5daf02be.c --- cctest case csmith_5daf02be (csmith seed 1571750590)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcaace4b1 */
/* @exp_ticks 0x87da8 */

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

// Options:   -s 1571750590 -o /tmp/csmith_gen_i4skl3u7/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   int8_t  f2;
   int32_t  f3;
   const int8_t  f4;
   int16_t  f5;
   uint32_t  f6;
   int64_t  f7;
};

struct S1 {
   int16_t  f0;
};

union U2 {
   uint8_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};


static int32_t g_3 = (-1L);
static union U2 g_31 = {0x91L};
static int8_t g_32 = 0x48L;
static uint64_t g_37 = 0xE84EBF8C32619C85LL;
static int16_t g_38 = (-1L);
static int32_t *g_78 = (void*)0;
static int32_t g_90[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_96 = 7L;
static uint64_t *g_117 = &g_37;
static uint64_t **g_116 = &g_117;
static int64_t g_141 = 0x734C7933BFEBFBDALL;
static int8_t g_144 = 1L;
static struct S1 g_149 = {-1L};
static int32_t g_166 = 3L;
static const struct S0 g_258 = {0x6F70DEFBL,1UL,0xF2L,0xE66C5461L,0x2EL,0xE144L,0x8ACB9D27L,0xB237102725FF4A1BLL};
static uint32_t g_276 = 6UL;
static uint32_t *g_275 = &g_276;
static uint32_t **g_274 = &g_275;
static uint32_t g_314 = 1UL;
static int32_t g_334[2] = {(-1L),(-1L)};
static uint8_t g_335 = 0xF2L;
static int8_t g_364 = (-1L);
static uint32_t g_371 = 0xAD14547AL;
static int64_t *g_386 = (void*)0;
static int64_t **g_385 = &g_386;
static int64_t ***g_384 = &g_385;
static int64_t ****g_383 = &g_384;
static struct S0 g_420 = {0x457A067AL,0x2931734457725044LL,-7L,1L,0x8AL,0xCC51L,0x08238058L,0x8437671B20F1F5BBLL};
static uint16_t g_440 = 0UL;
static uint16_t *g_439 = &g_440;
static uint16_t **g_438[4][7][6] = {{{&g_439,(void*)0,&g_439,&g_439,&g_439,(void*)0},{(void*)0,&g_439,&g_439,&g_439,&g_439,&g_439},{(void*)0,(void*)0,&g_439,&g_439,&g_439,(void*)0},{&g_439,&g_439,(void*)0,&g_439,&g_439,(void*)0},{&g_439,&g_439,&g_439,&g_439,&g_439,&g_439},{&g_439,(void*)0,&g_439,&g_439,&g_439,&g_439},{&g_439,&g_439,&g_439,(void*)0,&g_439,(void*)0}},{{&g_439,(void*)0,&g_439,&g_439,&g_439,&g_439},{&g_439,&g_439,&g_439,&g_439,&g_439,(void*)0},{&g_439,(void*)0,&g_439,(void*)0,&g_439,&g_439},{&g_439,&g_439,&g_439,&g_439,&g_439,&g_439},{&g_439,(void*)0,&g_439,(void*)0,&g_439,&g_439},{&g_439,&g_439,(void*)0,(void*)0,&g_439,&g_439},{(void*)0,(void*)0,&g_439,&g_439,&g_439,&g_439}},{{&g_439,&g_439,&g_439,&g_439,&g_439,&g_439},{&g_439,&g_439,&g_439,&g_439,&g_439,(void*)0},{(void*)0,&g_439,&g_439,(void*)0,(void*)0,&g_439},{&g_439,&g_439,&g_439,(void*)0,&g_439,(void*)0},{&g_439,&g_439,&g_439,&g_439,&g_439,&g_439},{&g_439,&g_439,&g_439,(void*)0,&g_439,(void*)0},{&g_439,(void*)0,&g_439,&g_439,&g_439,&g_439}},{{&g_439,&g_439,&g_439,&g_439,&g_439,(void*)0},{&g_439,(void*)0,&g_439,(void*)0,&g_439,&g_439},{&g_439,&g_439,&g_439,&g_439,&g_439,&g_439},{&g_439,(void*)0,&g_439,(void*)0,&g_439,&g_439},{&g_439,&g_439,(void*)0,(void*)0,&g_439,&g_439},{(void*)0,(void*)0,&g_439,&g_439,&g_439,&g_439},{&g_439,&g_439,&g_439,&g_439,&g_439,&g_439}}};
static struct S1 *g_521 = &g_149;
static struct S1 **g_520[3][4][2] = {{{&g_521,&g_521},{&g_521,&g_521},{&g_521,&g_521},{&g_521,&g_521}},{{&g_521,&g_521},{&g_521,&g_521},{&g_521,&g_521},{&g_521,&g_521}},{{&g_521,&g_521},{&g_521,&g_521},{&g_521,&g_521},{&g_521,&g_521}}};
static struct S1 ***g_519 = &g_520[1][3][0];
static union U2 *g_533 = &g_31;
static struct S0 g_547 = {0UL,0xBD174DA7E0B9631ELL,0x8EL,-1L,-9L,0x26C5L,0UL,0x5965E3F5173D39B7LL};
static uint64_t g_561[4] = {3UL,3UL,3UL,3UL};
static struct S0 g_643 = {9UL,0xA1DE38B374B2AAA2LL,0xB1L,0L,6L,0x5074L,0x1FBBCC1DL,0L};
static int64_t g_702 = 0xDFF84FCF67CCE295LL;
static int8_t g_703 = 0L;
static uint8_t g_705 = 4UL;
static int32_t g_866 = (-7L);
static uint16_t g_899 = 0x7061L;
static int16_t g_913 = (-2L);
static int32_t g_917 = 0x1200C723L;
static int8_t *g_933[7] = {&g_420.f2,&g_420.f2,&g_420.f2,&g_420.f2,&g_420.f2,&g_420.f2,&g_420.f2};
static int8_t **g_932 = &g_933[0];
static int8_t ***g_931 = &g_932;
static int8_t g_956 = (-6L);
static int32_t *g_960 = &g_917;
static int32_t **g_959 = &g_960;
static uint16_t g_986 = 65534UL;
static int16_t g_1328 = 0x2600L;
static uint16_t ***g_1426 = &g_438[3][3][4];
static uint16_t ****g_1425[4][4] = {{&g_1426,&g_1426,&g_1426,&g_1426},{&g_1426,&g_1426,&g_1426,&g_1426},{&g_1426,&g_1426,&g_1426,&g_1426},{&g_1426,&g_1426,&g_1426,&g_1426}};
static uint32_t * const ***g_1551 = (void*)0;
static int32_t g_1555[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
static int16_t g_1652 = 2L;
static uint16_t g_1676 = 9UL;
static uint32_t g_1847[6] = {18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static uint32_t g_1970[7][4][1] = {{{0xD3D9F1B8L},{0UL},{0x60F172A5L},{5UL}},{{0x60F172A5L},{0UL},{0xD3D9F1B8L},{0UL}},{{0x60F172A5L},{5UL},{0x60F172A5L},{0UL}},{{0xD3D9F1B8L},{0UL},{0x60F172A5L},{5UL}},{{0x60F172A5L},{0UL},{0xD3D9F1B8L},{0UL}},{{0x60F172A5L},{5UL},{0x60F172A5L},{0UL}},{{0xD3D9F1B8L},{0UL},{0x60F172A5L},{5UL}}};



static uint64_t  func_1(void);
static uint16_t  func_10(int64_t  p_11, int8_t  p_12);
static int8_t  func_13(uint64_t  p_14);
static struct S0  func_15(struct S1  p_16);
static struct S1  func_17(int32_t  p_18);
static int8_t  func_21(union U2  p_22);
static int32_t  func_55(int8_t * const  p_56, uint64_t * p_57, uint32_t  p_58);
static int8_t * const  func_59(int32_t * p_60, uint16_t  p_61, uint16_t  p_62, int32_t * p_63);




static uint64_t  func_1(void)
{ 
    uint16_t l_2[5];
    union U2 l_23 = {0xA0L};
    uint16_t l_1780 = 1UL;
    int32_t l_1781 = 0x06BD9CB7L;
    int64_t l_1788 = 6L;
    int32_t l_1790 = 0x8E925D2DL;
    int32_t l_1791[1];
    uint32_t *l_1799 = &g_371;
    int64_t l_1804 = 0L;
    uint32_t **l_1818[4];
    int32_t l_1827 = 0x71ED03EFL;
    const int16_t l_1892 = 0L;
    struct S1 l_1896 = {0xBB0DL};
    uint32_t l_1908 = 0x08D73F30L;
    int32_t l_1939 = 0x40B175A9L;
    int32_t l_1963 = 1L;
    int32_t **l_1975 = (void*)0;
    int32_t *l_1976 = &l_23.f3;
    int i;
    for (i = 0; i < 5; i++)
        l_2[i] = 3UL;
    for (i = 0; i < 1; i++)
        l_1791[i] = 0x61994D9EL;
    for (i = 0; i < 4; i++)
        l_1818[i] = &g_275;
    for (g_3 = 0; g_3 < 5; g_3 += 1)
    {
        l_2[g_3] = 0xF7BFL;
    }
    if ((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((((((*g_117) = (safe_add_func_uint8_t_u_u((func_10(g_3, func_13((func_15(func_17((safe_rshift_func_int8_t_s_s(func_21(l_23), 3)))) , ((0L != l_2[1]) != g_258.f6)))) != l_23.f0), l_23.f0))) < 0xE1ED62A78A0DA02DLL) > 0xAA5D8D5BL) || (*g_275)) <= 0xB3L), g_258.f3)) ^ 0UL) & l_1780), l_1781)))
    { 
        uint8_t *l_1782 = &l_23.f0;
        int32_t *l_1783 = (void*)0;
        int32_t *l_1784 = &g_96;
        (*l_1784) |= (g_32 < ((*l_1782) |= l_1780));
        (*l_1784) &= (safe_unary_minus_func_int64_t_s(0x603D435D8B04F167LL));
    }
    else
    { 
        int32_t *l_1786 = &g_31.f2;
        int32_t *l_1787[1][7][3] = {{{&g_31.f3,&g_31.f3,&g_96},{&g_90[1],&g_31.f2,(void*)0},{&g_1555[3][0],&g_31.f3,&g_1555[3][0]},{&g_1555[3][0],&g_90[1],&g_31.f3},{&g_90[1],&g_1555[3][0],&g_1555[3][0]},{&g_31.f3,&g_1555[3][0],(void*)0},{&g_31.f2,&g_90[1],&g_96}}};
        int64_t l_1789 = 0x8046A7F5D362334ALL;
        uint64_t l_1792 = 0xD882BC4269891A9FLL;
        int16_t *l_1805[2];
        int8_t l_1806 = (-1L);
        struct S1 l_1817 = {0L};
        int16_t l_1845 = 0x6CECL;
        union U2 l_1893 = {0x70L};
        uint32_t l_1894 = 0x6C646321L;
        uint16_t l_1898[1][4] = {{65526UL,65526UL,65526UL,65526UL}};
        uint16_t l_1919 = 0xB29CL;
        struct S0 l_1949 = {0x5EE6D54EL,18446744073709551608UL,0x18L,0x47430797L,0L,0x7DD9L,0xE65C3421L,-1L};
        int32_t l_1961 = (-1L);
        uint32_t l_1964 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1805[i] = &g_420.f5;
        l_1792--;
        l_1806 &= (g_96 &= (((safe_lshift_func_uint16_t_u_u(((g_420.f5 ^= (g_643.f5 = (safe_mul_func_uint8_t_u_u((((void*)0 == l_1799) || (0xB9L < 255UL)), (((safe_rshift_func_uint8_t_u_s(0xC8L, 7)) , (safe_sub_func_uint32_t_u_u((*l_1786), l_1804))) ^ 0x14L))))) , l_1788), 3)) | g_31.f2) != 6L));
        for (g_31.f0 = (-7); (g_31.f0 >= 54); ++g_31.f0)
        { 
            uint8_t l_1809 = 0UL;
            ++l_1809;
        }
lbl_1839:
        for (g_547.f2 = 0; (g_547.f2 >= (-4)); g_547.f2 = safe_sub_func_uint64_t_u_u(g_547.f2, 3))
        { 
            struct S1 l_1816[3][6] = {{{0xB561L},{-10L},{0xB561L},{1L},{1L},{0xB561L}},{{0xDE78L},{0xDE78L},{1L},{0xB52EL},{1L},{0xDE78L}},{{1L},{-10L},{0xB52EL},{0xB52EL},{-10L},{1L}}};
            uint32_t ***l_1819[6][6] = {{&l_1818[1],&l_1818[2],&l_1818[2],&l_1818[1],&l_1818[2],&l_1818[2]},{&l_1818[1],&l_1818[2],&l_1818[2],&l_1818[1],&l_1818[2],&l_1818[2]},{&l_1818[1],&l_1818[2],&l_1818[2],&l_1818[1],&l_1818[2],&l_1818[2]},{&l_1818[1],&l_1818[2],&l_1818[2],&l_1818[1],&l_1818[2],&l_1818[2]},{&l_1818[1],&l_1818[2],&l_1818[2],&l_1818[1],&l_1818[2],&l_1818[2]},{&l_1818[1],&l_1818[2],&l_1818[2],&l_1818[1],&l_1818[2],&l_1818[2]}};
            int i, j;
            if (g_917)
                break;
            g_78 = &g_90[4];
            for (l_23.f3 = 9; (l_23.f3 == 9); l_23.f3++)
            { 
                for (g_166 = 0; (g_166 <= 1); g_166 += 1)
                { 
                    int i;
                    l_1817 = l_1816[1][3];
                    if (g_334[g_166])
                        continue;
                    return l_1816[1][3].f0;
                }
                (*g_521) = func_17((l_1816[1][3].f0 && (**g_274)));
            }
            g_274 = l_1818[0];
        }
        if (g_3)
        { 
            uint64_t l_1822 = 0x1C487B868147FBCELL;
            int32_t l_1834 = 0x37CC61D4L;
            int32_t l_1835 = 0L;
            int32_t *l_1842 = &g_96;
            int32_t l_1846 = 0x17DF26BBL;
            const uint32_t l_1864 = 5UL;
            int8_t *l_1895 = &g_547.f2;
            int32_t **l_1897 = &l_1787[0][6][0];
            for (g_440 = 0; (g_440 < 28); g_440 = safe_add_func_uint32_t_u_u(g_440, 1))
            { 
                int16_t l_1829 = 0xF16EL;
                int32_t l_1830 = 0xA3F9C672L;
                int32_t l_1832[7][1];
                uint8_t l_1836 = 0xF6L;
                int16_t l_1843 = 1L;
                int8_t l_1844 = 0L;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1832[i][j] = 0xF28C77CAL;
                }
                l_1822--;
                for (l_1806 = 3; (l_1806 <= (-4)); --l_1806)
                { 
                    int16_t l_1828 = 0xF3BAL;
                    int32_t l_1831 = 0x8CC3384CL;
                    int32_t l_1833[1][2];
                    int16_t l_1840 = 7L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1833[i][j] = (-5L);
                    }
                    l_1836++;
                    if (g_149.f0)
                        goto lbl_1839;
                    return l_1840;
                }
                for (l_1834 = 3; (l_1834 >= 0); l_1834 -= 1)
                { 
                    int32_t **l_1841[1];
                    int64_t *l_1860 = &g_141;
                    int64_t l_1861[7];
                    int64_t *l_1862 = &g_420.f7;
                    int64_t *l_1863 = &l_1861[6];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1841[i] = &l_1786;
                    for (i = 0; i < 7; i++)
                        l_1861[i] = 0xE463E2432116969CLL;
                    g_1555[3][1] |= 7L;
                    l_1842 = &g_1555[0][1];
                    --g_1847[3];
                    g_3 |= ((safe_lshift_func_uint8_t_u_s((((*l_1863) = (safe_lshift_func_int16_t_s_s(0xA93BL, (safe_rshift_func_uint16_t_u_u(((((*g_439) > 0xDE46L) >= ((((*l_1862) = (safe_rshift_func_int16_t_s_u((((((*l_1860) = (safe_mod_func_uint32_t_u_u((((*l_1786) = (0x937D3D55L > (*g_275))) & (*l_1842)), (l_1836 & l_1843)))) | 0L) || 0xC6AC7620L) , 0x85A4L), l_1861[2]))) < 1L) || (*g_117))) || 1UL), 2))))) && 0x7D4EB7085F2C6C06LL), l_1864)) , l_1830);
                }
            }
            (***g_519) = func_17((1L && (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((*l_1895) |= (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((*g_439)++) , ((*l_1786) = 0x7984L)) < (safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(((**g_274) >= (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((((safe_add_func_int16_t_s_s((l_1892 == (l_1893 , 0x24L)), ((g_643.f4 , g_258.f1) || 0x5FL))) <= (*l_1842)) | (*l_1842)) > (**g_274)) >= 0xB6L) < l_1894), 2)), g_37)), 0xB502F1B9L))))) || (-5L)), g_420.f2))), g_166)), l_1827)), 0x8686L))), 0)), 0x97D8F89EL)) , 0x015E7A24L) | (**g_274)), l_1791[0])) < 0x6EL) ^ (*l_1842)), 0x2B0DL))));
            (***g_519) = l_1896;
            (*l_1897) = &g_3;
            l_1898[0][0]--;
        }
        else
        { 
            int32_t l_1901 = 3L;
            int32_t l_1902 = 0x399CDEA3L;
            int32_t l_1904 = 0x8A458580L;
            int32_t l_1906[6][5] = {{0x82DF7480L,0x9137C206L,0L,1L,1L},{0x9137C206L,0xBAAEDF7CL,0L,0L,0L},{1L,1L,0xBAAEDF7CL,0x82DF7480L,1L},{0x9137C206L,1L,0x82F30B0DL,0x82DF7480L,0x82DF7480L},{0x82DF7480L,(-7L),0x82DF7480L,0L,0x35ED862EL},{0x82F30B0DL,1L,0x9137C206L,1L,0x35ED862EL}};
            struct S1 l_1929 = {0x5528L};
            uint8_t l_1930[3];
            int32_t *l_1958 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1930[i] = 0xA9L;
            for (g_31.f0 = 0; (g_31.f0 <= 4); g_31.f0 += 1)
            { 
                int32_t l_1903 = 1L;
                int32_t l_1905[4][7][3] = {{{0x550A8D2CL,1L,1L},{(-7L),0x550A8D2CL,0x550A8D2CL},{0x550A8D2CL,0xBE4BA6B8L,(-9L)},{0x3B7891FFL,0x878E0D13L,(-9L)},{0L,(-9L),0x550A8D2CL},{0x7438D5E9L,9L,1L},{(-9L),(-9L),9L}},{{1L,0x878E0D13L,0x353A73F9L},{1L,0xBE4BA6B8L,0x7438D5E9L},{(-9L),0x550A8D2CL,0x878E0D13L},{0x7438D5E9L,1L,0x7438D5E9L},{0L,1L,0x353A73F9L},{0x3B7891FFL,1L,9L},{0x550A8D2CL,1L,1L}},{{(-7L),0x550A8D2CL,0x550A8D2CL},{0x550A8D2CL,0xBE4BA6B8L,(-9L)},{0x3B7891FFL,0x878E0D13L,9L},{1L,9L,(-7L)},{0x878E0D13L,1L,0x3B7891FFL},{9L,9L,1L},{0L,0x550A8D2CL,1L}},{{0L,0x353A73F9L,0x878E0D13L},{9L,(-7L),0x550A8D2CL},{0x878E0D13L,0L,0x878E0D13L},{1L,0xBE4BA6B8L,1L},{0x7438D5E9L,0xBE4BA6B8L,1L},{(-7L),0L,0x3B7891FFL},{(-9L),(-7L),(-7L)}}};
                int32_t l_1907 = 0x30FDA065L;
                struct S1 ***l_1917 = (void*)0;
                uint16_t **l_1933 = &g_439;
                int32_t l_1957 = 0L;
                int i, j, k;
                ++l_1908;
                if (((6L > (safe_add_func_uint8_t_u_u(((g_643.f7 = 0x56A1B8653D39627BLL) < l_2[2]), (l_1906[4][3] <= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(0x43L, (l_1917 != (void*)0))) > (*g_275)), l_1902)))))) > g_643.f6))
                { 
                    int32_t **l_1918 = &g_78;
                    (*l_1918) = &g_96;
                    (**l_1918) = l_1919;
                }
                else
                { 
                    return l_1896.f0;
                }
                if ((((void*)0 != (*g_959)) & (safe_sub_func_uint8_t_u_u((!(safe_sub_func_int32_t_s_s((l_1804 > ((l_1903 > ((safe_lshift_func_int8_t_s_u(((**g_932) |= (safe_div_func_uint8_t_u_u((l_1929 , ((void*)0 != (*g_116))), 1L))), g_547.f3)) ^ l_1907)) , l_1906[4][3])), (*g_275)))), l_1930[2]))))
                { 
                    uint16_t **l_1935 = &g_439;
                    uint16_t ***l_1934 = &l_1935;
                    int32_t l_1938 = (-3L);
                    uint8_t *l_1940[3][5][7] = {{{&l_1893.f0,&l_1930[2],(void*)0,&l_1930[2],&l_1893.f0,&l_1930[1],&g_31.f0},{&l_1930[2],&l_23.f0,&l_1930[2],&l_23.f0,&l_1893.f0,&g_31.f0,&l_23.f0},{(void*)0,(void*)0,&g_335,&l_1893.f0,&g_31.f0,(void*)0,&l_1930[0]},{&l_1930[2],&l_23.f0,(void*)0,&l_1930[2],&l_1893.f0,&l_1930[2],(void*)0},{&l_1893.f0,&l_1893.f0,(void*)0,&g_705,&g_31.f0,&g_31.f0,&l_1930[1]}},{{&g_335,&l_1893.f0,&l_1930[1],&l_1930[2],&g_335,&g_335,&l_23.f0},{(void*)0,&g_31.f0,&l_1930[1],&l_23.f0,&g_31.f0,&l_1893.f0,&g_31.f0},{(void*)0,&l_1893.f0,&l_1930[0],&l_1930[0],&l_1893.f0,(void*)0,&l_1930[2]},{&l_1893.f0,&g_31.f0,&l_23.f0,&l_1930[1],&g_31.f0,(void*)0,&g_705},{&g_335,&g_335,&l_1930[2],&l_1930[1],&l_1893.f0,&g_335,&l_23.f0}},{{&g_31.f0,&g_31.f0,&g_705,(void*)0,&l_1893.f0,&l_1893.f0,(void*)0},{&l_1930[2],&l_1893.f0,&l_1930[2],(void*)0,&l_23.f0,&l_1930[2],&l_1893.f0},{(void*)0,&g_31.f0,&l_1893.f0,&g_335,(void*)0,(void*)0,&l_1893.f0},{&g_31.f0,&l_1893.f0,&l_23.f0,&l_1930[2],&l_23.f0,&l_1930[2],&l_1930[2]},{&l_1930[1],&l_1893.f0,&l_1930[2],(void*)0,&l_1930[2],&l_1893.f0,&l_1930[1]}}};
                    int32_t l_1941[6][6][6] = {{{0xAA60A5A9L,0xD7B1C2A2L,0L,1L,0L,(-7L)},{0L,0x493519D9L,1L,0x0452EDF7L,0xF9D78659L,(-7L)},{(-1L),(-1L),0L,(-7L),0x493519D9L,0x493519D9L},{0x008F46FCL,0x47F480AEL,0x47F480AEL,0x008F46FCL,6L,(-2L)},{(-7L),0L,(-1L),(-1L),0x8EF53C9FL,0x4B5F5C18L},{0x0452EDF7L,1L,0x493519D9L,0L,0x8EF53C9FL,(-7L)}},{{1L,0L,0xD7B1C2A2L,0xAA60A5A9L,6L,(-7L)},{1L,0x47F480AEL,0xCE6C311BL,(-2L),0x493519D9L,0x8EF53C9FL},{0L,(-1L),0x4B5F5C18L,0xF09CC25FL,(-8L),0x19254508L},{0L,1L,0x6D444182L,0L,4L,0xA6B950BAL},{0xD7B1C2A2L,0x00BC30A5L,0x3280317BL,(-1L),0xA6B950BAL,0x3280317BL},{0L,4L,(-9L),0xCE6C311BL,1L,0xF468A7A5L}},{{0x8EF53C9FL,1L,1L,0x0FB3EFC7L,0x80D769E6L,(-9L)},{0xAB35FBA9L,0x6D444182L,1L,0x47F480AEL,4L,0xF468A7A5L},{0x4B5F5C18L,0x3280317BL,(-9L),(-7L),(-9L),0x3280317BL},{(-7L),(-9L),0x3280317BL,0x4B5F5C18L,0L,0xA6B950BAL},{0x47F480AEL,1L,0x6D444182L,0xAB35FBA9L,0x296CBBE8L,0x19254508L},{0x0FB3EFC7L,1L,1L,0x8EF53C9FL,0L,1L}},{{0xCE6C311BL,(-9L),4L,0L,(-9L),1L},{(-1L),0x3280317BL,0x00BC30A5L,0xD7B1C2A2L,4L,(-1L)},{0L,0x6D444182L,1L,0L,0x80D769E6L,1L},{0L,1L,0xF468A7A5L,0xD7B1C2A2L,1L,0x80D769E6L},{(-1L),4L,0x296CBBE8L,0L,0xA6B950BAL,1L},{0xCE6C311BL,0x00BC30A5L,0x19254508L,0x8EF53C9FL,4L,0L}},{{0x0FB3EFC7L,1L,1L,0xAB35FBA9L,(-8L),0L},{0x47F480AEL,0xF468A7A5L,0x19254508L,0x4B5F5C18L,1L,1L},{(-7L),0x296CBBE8L,0x296CBBE8L,(-7L),0x3280317BL,0x80D769E6L},{0x4B5F5C18L,0x19254508L,0xF468A7A5L,0x47F480AEL,1L,1L},{0xAB35FBA9L,1L,1L,0x0FB3EFC7L,1L,(-1L)},{0x8EF53C9FL,0x19254508L,0x00BC30A5L,0xCE6C311BL,0x3280317BL,1L}},{{0L,0x296CBBE8L,4L,(-1L),1L,1L},{0xD7B1C2A2L,0xF468A7A5L,1L,0L,(-8L),0x19254508L},{0L,1L,0x6D444182L,0L,4L,0xA6B950BAL},{0xD7B1C2A2L,0x00BC30A5L,0x3280317BL,(-1L),0xA6B950BAL,0x3280317BL},{0L,4L,(-9L),0xCE6C311BL,1L,0xF468A7A5L},{0x8EF53C9FL,1L,1L,0x0FB3EFC7L,0x80D769E6L,(-9L)}}};
                    int i, j, k;
                    (***g_519) = (((safe_lshift_func_uint8_t_u_s((((*g_1426) = l_1933) == ((*l_1934) = (void*)0)), (((((safe_rshift_func_int8_t_s_u(l_1938, (l_1941[4][4][1] = l_1939))) == ((*g_78) , (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_1938 && l_1939) && g_37) >= 65535UL), 7)) < 0x8AL), l_1901)))) || l_1941[0][2][0]) <= 4UL) || l_1905[3][5][0]))) > l_1905[3][2][0]) , (***g_519));
                }
                else
                { 
                    struct S1 l_1948 = {-7L};
                    struct S0 *l_1960 = &l_1949;
                    struct S0 **l_1959 = &l_1960;
                    (*g_78) = (safe_lshift_func_uint16_t_u_u(l_1905[3][5][0], 8));
                    l_1958 = ((((l_1948 , (func_15((***g_519)) , l_1949)) , (((safe_mul_func_int16_t_s_s(g_334[0], (safe_div_func_uint64_t_u_u((~(*g_78)), ((safe_rshift_func_uint16_t_u_u((*g_439), l_1929.f0)) && 0xBBL))))) || (**g_274)) ^ 7L)) != l_1957) , (void*)0);
                    (*l_1959) = &g_547;
                }
                for (l_1919 = 0; l_1919 < 1; l_1919 += 1)
                {
                    for (g_702 = 0; g_702 < 7; g_702 += 1)
                    {
                        for (g_986 = 0; g_986 < 3; g_986 += 1)
                        {
                            l_1787[l_1919][g_702][g_986] = &l_1905[3][5][0];
                        }
                    }
                }
                for (l_1907 = 0; (l_1907 >= 0); l_1907 -= 1)
                { 
                    int32_t l_1962 = 0x22E340D7L;
                    int32_t l_1967 = 0x9DB78BF6L;
                    int32_t l_1968 = (-5L);
                    int32_t l_1969 = 0x8F47762CL;
                    int i;
                    --l_1964;
                    g_1970[3][1][0]++;
                    (*g_78) |= (safe_unary_minus_func_int8_t_s(((g_705 = (+0xF2598EEFL)) | l_1791[l_1907])));
                }
            }
        }
    }
    l_1976 = &g_90[1];
    return (**g_116);
}



static uint16_t  func_10(int64_t  p_11, int8_t  p_12)
{ 
    uint32_t l_1356 = 0x9668020EL;
    int32_t l_1366 = 1L;
    int32_t l_1369 = 0x8D893F47L;
    int32_t l_1371 = (-4L);
    int32_t l_1372 = 0L;
    uint16_t l_1373 = 0x44F1L;
    int32_t *l_1397 = &g_31.f2;
    uint32_t l_1420 = 0x45325ED4L;
    uint16_t ***l_1424 = &g_438[1][2][4];
    uint16_t ****l_1423 = &l_1424;
    struct S1 ***l_1432 = &g_520[1][3][0];
    const struct S1 **l_1434 = (void*)0;
    const struct S1 ***l_1433[7] = {&l_1434,&l_1434,&l_1434,&l_1434,&l_1434,&l_1434,&l_1434};
    uint64_t l_1475 = 0x208830DC8F21DDA1LL;
    int32_t l_1479 = 1L;
    uint64_t l_1496 = 0x9A10AF70105ED0BFLL;
    uint32_t ***l_1520[1];
    int64_t l_1538[6][3] = {{9L,(-1L),0x72DBB291051178AELL},{9L,(-1L),9L},{9L,(-7L),8L},{9L,(-1L),0x72DBB291051178AELL},{9L,(-1L),9L},{9L,(-7L),8L}};
    uint32_t l_1539 = 0x0C47FA9FL;
    uint64_t * const *l_1564 = &g_117;
    uint64_t * const **l_1563 = &l_1564;
    int16_t *l_1565 = (void*)0;
    int16_t l_1573 = 0x50BFL;
    int64_t l_1620 = 0xA2715723F6B5017FLL;
    struct S0 l_1646[4] = {{0x949F5C25L,0x11DF53914CF32346LL,-1L,0xBF851E35L,1L,-7L,0UL,-10L},{0x949F5C25L,0x11DF53914CF32346LL,-1L,0xBF851E35L,1L,-7L,0UL,-10L},{0x949F5C25L,0x11DF53914CF32346LL,-1L,0xBF851E35L,1L,-7L,0UL,-10L},{0x949F5C25L,0x11DF53914CF32346LL,-1L,0xBF851E35L,1L,-7L,0UL,-10L}};
    uint8_t l_1668 = 0x77L;
    int8_t *l_1669 = &g_956;
    const int16_t l_1670 = 6L;
    uint8_t l_1673 = 254UL;
    int8_t * const *l_1764[1][2];
    int8_t * const **l_1763[4] = {&l_1764[0][0],&l_1764[0][0],&l_1764[0][0],&l_1764[0][0]};
    int i, j;
    for (i = 0; i < 1; i++)
        l_1520[i] = &g_274;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1764[i][j] = (void*)0;
    }
    for (g_31.f3 = (-29); (g_31.f3 < (-1)); g_31.f3 = safe_add_func_uint64_t_u_u(g_31.f3, 3))
    { 
        int8_t l_1355 = (-2L);
        int32_t l_1370 = 1L;
        int32_t **l_1379[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1379[i] = &g_78;
        for (g_420.f7 = 0; (g_420.f7 != 19); g_420.f7++)
        { 
            uint64_t l_1348 = 18446744073709551612UL;
            struct S1 l_1354 = {0x533EL};
            int32_t *l_1357 = &g_3;
            int32_t *l_1358 = (void*)0;
            int32_t *l_1359 = &g_96;
            int32_t *l_1360 = &g_90[1];
            int32_t *l_1361 = &g_96;
            int32_t *l_1362 = &g_90[1];
            int32_t *l_1363 = &g_96;
            int32_t *l_1364 = (void*)0;
            int32_t *l_1365 = &g_90[1];
            int32_t *l_1367 = &g_90[1];
            int32_t *l_1368[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1368[i] = &l_1366;
            for (g_702 = 0; (g_702 == 6); ++g_702)
            { 
                int32_t *l_1346 = &g_3;
                int32_t *l_1347 = (void*)0;
                l_1348--;
                if (((+(safe_mul_func_int8_t_s_s(p_12, 0x87L))) || l_1348))
                { 
                    (***g_519) = l_1354;
                    return l_1355;
                }
                else
                { 
                    return l_1356;
                }
            }
            l_1373--;
        }
        for (g_547.f5 = 0; (g_547.f5 >= 1); g_547.f5 = safe_add_func_uint64_t_u_u(g_547.f5, 4))
        { 
            uint32_t l_1378 = 3UL;
            return l_1378;
        }
        g_78 = &g_90[1];
        l_1366 ^= (*g_78);
    }
    for (g_440 = 17; (g_440 < 1); --g_440)
    { 
        uint32_t l_1394 = 0x8278AF03L;
        int8_t l_1395 = 0x32L;
        int32_t l_1402 = 1L;
        int32_t l_1403 = (-1L);
        int32_t l_1406 = 0xF2E6DC4AL;
        int32_t l_1409 = 0xE69C4096L;
        int32_t l_1410 = 0xB99FAB34L;
        int32_t l_1411 = 0x86F8D1E6L;
        int32_t l_1412 = 0x17B91743L;
        uint16_t * const *l_1437 = &g_439;
        uint16_t * const **l_1436 = &l_1437;
        uint16_t ** const *l_1438[3];
        uint32_t * const *l_1441[2][6] = {{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275}};
        uint32_t * const **l_1440 = &l_1441[0][2];
        int8_t **l_1486 = &g_933[6];
        int32_t l_1493[6][4][3] = {{{0L,2L,0xD1CD9318L},{0L,0L,0L},{0x45639241L,(-4L),2L},{0L,0L,0L}},{{0x342F5805L,3L,0xD1CD9318L},{8L,3L,0xE53BD22AL},{(-4L),0L,8L},{1L,(-4L),(-4L)}},{{(-4L),0L,0x45639241L},{8L,2L,0x45639241L},{0x342F5805L,0x45639241L,(-4L)},{0L,0xE53BD22AL,8L}},{{0x45639241L,0x45639241L,0xE53BD22AL},{0L,2L,0xD1CD9318L},{0L,0L,0L},{0x45639241L,(-4L),2L}},{{0L,0L,0L},{0x342F5805L,3L,0xD1CD9318L},{8L,3L,0xE53BD22AL},{(-4L),0L,8L}},{{1L,(-4L),(-4L)},{(-4L),0L,0x45639241L},{8L,2L,0x45639241L},{0x342F5805L,0x45639241L,(-4L)}}};
        int32_t l_1494 = 0x2E6E5C87L;
        struct S1 l_1511 = {0x4E3AL};
        uint8_t l_1529 = 0x34L;
        int8_t l_1546 = 1L;
        union U2 l_1617 = {252UL};
        uint32_t l_1621[7];
        int32_t l_1647[6][1] = {{(-8L)},{0x91FD0E40L},{(-8L)},{(-8L)},{0x91FD0E40L},{(-8L)}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1438[i] = &g_438[1][2][4];
        for (i = 0; i < 7; i++)
            l_1621[i] = 0xF1097C97L;
    }
    l_1479 &= ((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((((*l_1397) = (safe_rshift_func_uint16_t_u_u(((*g_383) != (void*)0), (((safe_unary_minus_func_uint16_t_u(((p_12 = ((*l_1669) = ((**g_932) = (l_1668 & g_561[3])))) || l_1670))) && ((((*l_1397) , (((*l_1397) , g_258.f4) == 1UL)) , (*l_1397)) >= p_11)) && (-4L))))) >= 2L) , 0xE6C2L), g_547.f4)), 18446744073709551614UL)), 0xB9L)) , 0xCE5628B3L);
    for (l_1373 = (-3); (l_1373 == 22); ++l_1373)
    { 
        uint16_t l_1688 = 1UL;
        int32_t *l_1695[5];
        int32_t l_1771 = 9L;
        int32_t l_1773[1][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_1695[i] = &g_547.f3;
    }
    return p_12;
}



static int8_t  func_13(uint64_t  p_14)
{ 
    int8_t l_691 = 0x17L;
    int32_t l_695 = (-1L);
    int32_t l_696[6][4] = {{0x6A3FD432L,0x6A3FD432L,0x6A3FD432L,0x6A3FD432L},{0x6A3FD432L,0x6A3FD432L,0x6A3FD432L,0x6A3FD432L},{0x6A3FD432L,0x6A3FD432L,0x6A3FD432L,0x6A3FD432L},{0x6A3FD432L,0x6A3FD432L,0x6A3FD432L,0x6A3FD432L},{0x6A3FD432L,0x6A3FD432L,0x6A3FD432L,0x6A3FD432L},{0x6A3FD432L,0x6A3FD432L,0x6A3FD432L,0x6A3FD432L}};
    uint32_t l_697 = 0x118B1F16L;
    union U2 *l_700 = &g_31;
    int32_t l_704 = 0L;
    struct S0 l_708 = {2UL,1UL,-1L,-1L,1L,0L,9UL,7L};
    uint32_t l_718 = 1UL;
    int32_t l_719 = 0x83C897F0L;
    uint32_t ***l_723 = (void*)0;
    uint16_t l_736[3];
    int64_t ***l_779[4];
    int16_t l_840 = (-5L);
    int32_t *l_848 = &g_90[4];
    int32_t l_914 = (-3L);
    int32_t l_915 = 0x2A28DF4EL;
    int64_t l_916 = 0x4B1E25C4C4BD93F5LL;
    uint32_t l_918 = 0xDBB512E5L;
    uint32_t l_958 = 8UL;
    const struct S1 *l_976 = &g_149;
    uint32_t l_1022 = 0x535AC67AL;
    uint16_t **l_1061[3];
    const uint16_t *l_1063 = &g_986;
    const uint16_t **l_1062 = &l_1063;
    uint64_t ***l_1065[4][3][5] = {{{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,(void*)0,&g_116,&g_116}},{{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116,&g_116,&g_116}},{{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,(void*)0,&g_116,&g_116}},{{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116,&g_116,&g_116}}};
    uint64_t ****l_1064 = &l_1065[0][2][3];
    int32_t l_1161 = 0xE71C169EL;
    union U2 l_1178[6] = {{0x2FL},{0x2FL},{0x2FL},{0x2FL},{0x2FL},{0x2FL}};
    uint8_t l_1181 = 0x8FL;
    uint16_t *l_1254 = &g_986;
    uint64_t l_1300[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    int64_t l_1319 = 4L;
    int32_t **l_1334 = (void*)0;
    int32_t **l_1335[6] = {&g_78,&g_78,&l_848,&g_78,&g_78,&l_848};
    int32_t *l_1336 = &l_695;
    struct S0 *l_1338 = &g_643;
    struct S0 **l_1337 = &l_1338;
    struct S0 ***l_1339 = &l_1337;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_736[i] = 0x3BCFL;
    for (i = 0; i < 4; i++)
        l_779[i] = &g_385;
    for (i = 0; i < 3; i++)
        l_1061[i] = &g_439;
    for (g_547.f2 = (-24); (g_547.f2 < 17); ++g_547.f2)
    { 
        int32_t *l_692 = &g_31.f2;
        int32_t *l_693 = (void*)0;
        int32_t *l_694[2];
        union U2 **l_701 = &g_533;
        int i;
        for (i = 0; i < 2; i++)
            l_694[i] = &g_90[1];
        l_697--;
        (*l_701) = l_700;
        (***g_519) = func_17(g_166);
        l_695 &= p_14;
        ++g_705;
    }
    for (g_420.f5 = 0; (g_420.f5 <= 3); g_420.f5 += 1)
    { 
        union U2 l_715 = {0xC4L};
        int32_t *l_716[7][6] = {{&g_334[0],&g_334[1],&g_334[0],&l_708.f3,&l_708.f3,&g_334[0]},{&l_708.f3,&l_708.f3,&g_334[0],&g_334[1],&g_334[0],&g_334[0]},{&g_334[1],&g_334[0],&g_334[0],&g_334[0],&g_334[1],&g_334[0]},{&g_334[0],&g_334[1],&g_334[0],&l_708.f3,&l_708.f3,&g_334[0]},{&l_708.f3,&l_708.f3,&g_334[0],&g_334[1],&g_334[0],&g_334[0]},{&g_334[1],&g_334[0],&g_334[0],&g_334[0],&g_334[1],&g_334[0]},{&g_334[0],&g_334[1],&g_334[0],&l_708.f3,&l_708.f3,&g_334[0]}};
        int32_t **l_717 = &l_716[3][1];
        int32_t l_727 = 1L;
        int32_t l_731 = 1L;
        int32_t l_732[1];
        uint16_t *l_776 = &l_736[1];
        int32_t *l_782 = &l_732[0];
        int32_t l_924 = 0xB156354BL;
        int32_t l_925 = 0x9830C884L;
        int64_t l_1003 = 1L;
        union U2 **l_1046 = &l_700;
        union U2 **l_1047 = &g_533;
        uint16_t ***l_1060[3];
        uint64_t ****l_1066 = &l_1065[0][2][3];
        int8_t l_1108 = 0x2EL;
        int32_t ***l_1149 = (void*)0;
        int32_t ****l_1148 = &l_1149;
        int16_t *l_1153[6] = {&l_840,&l_840,&g_149.f0,&l_840,&l_840,&g_149.f0};
        int16_t l_1165[1][2][5];
        const struct S1 *l_1206 = &g_149;
        int64_t ***l_1209[7][3][3] = {{{&g_385,(void*)0,&g_385},{&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385}},{{&g_385,(void*)0,(void*)0},{(void*)0,&g_385,&g_385},{&g_385,(void*)0,(void*)0}},{{&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385}},{{&g_385,&g_385,&g_385},{&g_385,(void*)0,(void*)0},{(void*)0,&g_385,&g_385}},{{&g_385,&g_385,&g_385},{(void*)0,(void*)0,&g_385},{&g_385,&g_385,(void*)0}},{{&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385}},{{&g_385,&g_385,&g_385},{&g_385,(void*)0,(void*)0},{(void*)0,&g_385,&g_385}}};
        int8_t l_1239 = (-6L);
        uint8_t l_1284 = 4UL;
        uint64_t * const l_1297 = &g_37;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_732[i] = 0xD3B84BFEL;
        for (i = 0; i < 3; i++)
            l_1060[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_1165[i][j][k] = 2L;
            }
        }
    }
    for (l_1022 = 0; (l_1022 <= 54); l_1022 = safe_add_func_uint16_t_u_u(l_1022, 9))
    { 
        return p_14;
    }
    l_1336 = &l_695;
    (*l_1339) = l_1337;
    return (***g_931);
}



static struct S0  func_15(struct S1  p_16)
{ 
    int32_t *l_284 = &g_90[3];
    int32_t l_302 = (-2L);
    int32_t l_303 = (-6L);
    int32_t l_304 = (-1L);
    int32_t l_305 = 0x2510BBF2L;
    int32_t l_306[1][4][3] = {{{(-9L),(-9L),(-9L)},{(-3L),(-3L),(-3L)},{(-9L),(-9L),(-9L)},{(-3L),(-3L),(-3L)}}};
    uint64_t l_340 = 0x8ACF740BBC78A1BALL;
    uint16_t l_375 = 0xEA8BL;
    union U2 l_411[4][4][2] = {{{{0x4AL},{0x4AL}},{{0xD1L},{0x4AL}},{{0x4AL},{0x64L}},{{0x9DL},{249UL}}},{{{0xD1L},{0x9DL}},{{249UL},{0x64L}},{{249UL},{0x9DL}},{{0xD1L},{249UL}}},{{{0x9DL},{0x64L}},{{0x4AL},{0x4AL}},{{0xD1L},{0x4AL}},{{0x4AL},{0x64L}}},{{{0x9DL},{249UL}},{{0xD1L},{0x9DL}},{{249UL},{0x64L}},{{249UL},{0x9DL}}}};
    struct S0 l_423[3] = {{18446744073709551610UL,1UL,0xA4L,0x92A39A75L,-2L,8L,0x5D80D148L,1L},{18446744073709551610UL,1UL,0xA4L,0x92A39A75L,-2L,8L,0x5D80D148L,1L},{18446744073709551610UL,1UL,0xA4L,0x92A39A75L,-2L,8L,0x5D80D148L,1L}};
    uint32_t * const ** const l_512 = (void*)0;
    uint32_t l_543 = 0x3A870456L;
    struct S0 *l_546 = &g_547;
    uint16_t **l_552 = &g_439;
    int8_t l_574 = 0xE4L;
    uint8_t l_617 = 5UL;
    struct S1 l_629 = {0xCEA1L};
    int8_t l_639 = 7L;
    struct S0 l_646 = {0x3DE767A8L,0x15F2D6F6BC337C4ALL,0x64L,9L,0L,2L,0xAA805E6AL,1L};
    int i, j, k;
    for (g_276 = 5; (g_276 == 18); g_276++)
    { 
        int32_t **l_285 = &l_284;
        int32_t l_294[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint16_t l_308[4][4] = {{0x58A5L,9UL,65530UL,9UL},{65528UL,65535UL,0xD8C5L,65530UL},{9UL,65535UL,65535UL,9UL},{65535UL,9UL,65528UL,0xD8C5L}};
        uint64_t ***l_321 = (void*)0;
        int32_t l_346 = 0xE5AD91B2L;
        int64_t *l_381 = &g_141;
        int64_t **l_380 = &l_381;
        int64_t ***l_379 = &l_380;
        int64_t ****l_378 = &l_379;
        int16_t * const l_391 = (void*)0;
        int8_t l_409 = 3L;
        struct S1 **l_518 = (void*)0;
        struct S1 ***l_517 = &l_518;
        struct S0 *l_523 = &l_423[1];
        struct S0 **l_522[6] = {&l_523,&l_523,&l_523,&l_523,&l_523,&l_523};
        int64_t l_575 = 7L;
        union U2 *l_594 = &l_411[0][3][0];
        int i, j;
        (*l_285) = l_284;
    }
    return g_258;
}



static struct S1  func_17(int32_t  p_18)
{ 
    uint64_t l_26 = 0x3FDE7504ED09EB81LL;
    int8_t *l_33 = (void*)0;
    int8_t *l_34[2][6][6] = {{{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32}},{{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32}}};
    int32_t l_35[6] = {1L,1L,1L,1L,1L,1L};
    uint64_t *l_36[5] = {&l_26,&l_26,&l_26,&l_26,&l_26};
    int32_t l_39 = 0L;
    int32_t l_40 = 0L;
    int32_t **l_74 = (void*)0;
    const uint64_t *l_186 = &l_26;
    const uint64_t **l_185 = &l_186;
    uint8_t l_188[2][3][3] = {{{0UL,0x03L,255UL},{1UL,0x03L,1UL},{0x56L,0UL,255UL}},{{0x56L,0x56L,0UL},{1UL,0UL,0UL},{0UL,0x03L,255UL}}};
    int64_t l_201 = 0xAC39FD4B7166276FLL;
    int32_t l_203 = 0x5865897DL;
    int64_t *l_208 = &g_141;
    int64_t **l_207 = &l_208;
    int32_t *l_221 = &l_203;
    const struct S0 l_243 = {0x8C1A8F93L,18446744073709551611UL,0xFFL,0xB330E336L,0xEEL,0L,0xBBF92495L,0x0CB0CA4C30809782LL};
    uint32_t **l_273 = (void*)0;
    struct S1 l_281 = {-10L};
    int i, j, k;
    if ((func_21(((l_40 = (l_39 &= ((l_26 > 0x8F6A1C3D076C56D2LL) & (g_38 = (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_3, (l_35[1] = (((func_21(g_31) , p_18) & ((((p_18 , p_18) == g_3) >= 0xA1DD5C0AECAA7054LL) && p_18)) , g_32)))), g_3)))))) , g_31)) < p_18))
    { 
        uint16_t l_51[7];
        int32_t l_76 = (-3L);
        int32_t l_194 = 0x037A74CFL;
        int32_t l_198 = 3L;
        int32_t **l_213 = &g_78;
        int16_t *l_218 = &g_38;
        int i;
        for (i = 0; i < 7; i++)
            l_51[i] = 0xA3CEL;
        for (l_26 = (-5); (l_26 != 48); l_26 = safe_add_func_int8_t_s_s(l_26, 1))
        { 
            int64_t l_52 = 0x95192C249DD62858LL;
            uint32_t l_53 = 8UL;
            int8_t *l_67 = &g_32;
            int32_t *l_73 = &l_35[2];
            int32_t **l_72 = &l_73;
            uint8_t l_189 = 0x43L;
            int32_t l_197 = 1L;
            int32_t l_199 = (-1L);
            int32_t l_202[1][6] = {{8L,8L,8L,8L,8L,8L}};
            uint32_t l_204 = 0xF7A0FFE6L;
            struct S1 l_212[1][1][1] = {{{{0x7467L}}}};
            int i, j, k;
            for (g_31.f3 = 0; (g_31.f3 <= 1); g_31.f3 += 1)
            { 
                int32_t *l_54 = &l_35[1];
                int32_t **l_64 = &l_54;
                uint32_t *l_75[4][3] = {{&l_53,(void*)0,&l_53},{&l_53,(void*)0,&l_53},{&l_53,(void*)0,&l_53},{&l_53,(void*)0,&l_53}};
                int32_t l_77 = 0x606BDE5EL;
                uint64_t *l_94 = &g_37;
                int32_t l_193 = 0x7D6E7BBDL;
                int64_t l_196 = 0x8A440665D72AE1B0LL;
                int32_t l_200 = 0xB15E5C18L;
                int i, j;
                (*l_54) &= (65535UL && ((safe_mod_func_int64_t_s_s((((((0x29L <= 0x0AL) > (safe_sub_func_uint16_t_u_u(((p_18 || (safe_mul_func_uint16_t_u_u(p_18, (safe_rshift_func_int16_t_s_s(((func_21(g_31) ^ g_3) , l_51[5]), p_18))))) && g_31.f1), l_52))) , g_31.f2) >= l_53) , p_18), 6UL)) & 0x43A495B2841C2FCELL));
            }
        }
        (*l_213) = &g_90[0];
        (*l_213) = ((g_3 > ((*l_208) = (safe_div_func_int16_t_s_s((((**l_213) && (0xF3292925L || (safe_mul_func_uint16_t_u_u(p_18, g_149.f0)))) != (((*l_218) = (((void*)0 != &g_141) || p_18)) | g_90[4])), g_96)))) , &g_90[1]);
    }
    else
    { 
        int32_t *l_219[7] = {&g_90[1],&g_90[1],&g_90[1],&g_90[1],&g_90[1],&g_90[1],&g_90[1]};
        int i;
        p_18 = ((void*)0 == &g_96);
    }
    for (g_166 = 5; (g_166 >= 1); g_166 -= 1)
    { 
        uint32_t l_220 = 0x0429D880L;
        struct S1 l_222[1] = {{0x8688L}};
        struct S0 l_247 = {18446744073709551610UL,0x98D8505F07D2D848LL,6L,0x0B201384L,-6L,0x5096L,0xAD9A2AEAL,0x714A4212A552129FLL};
        int i;
        if (l_220)
        { 
            for (l_40 = 1; (l_40 >= 0); l_40 -= 1)
            { 
                l_221 = &g_3;
                return l_222[0];
            }
            return l_222[0];
        }
        else
        { 
            struct S1 *l_223 = &l_222[0];
            struct S1 **l_224 = &l_223;
            (*l_224) = l_223;
        }
        for (g_37 = 1; (g_37 <= 5); g_37 += 1)
        { 
            struct S1 l_227 = {0L};
            uint8_t *l_244 = &l_188[0][1][0];
            uint16_t l_248 = 0x102FL;
            int16_t l_280 = 0x47C7L;
            int i;
            l_35[g_37] ^= (((g_141 = (safe_div_func_int64_t_s_s(g_37, (l_227 , 18446744073709551609UL)))) ^ (p_18 <= 1UL)) <= (safe_mul_func_int8_t_s_s(g_31.f0, (g_149.f0 || 0x1C0EL))));
            (*l_221) = (safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((l_35[g_37] , (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_35[g_37] = ((((*l_244) = (g_31.f0 = (+(safe_div_func_uint8_t_u_u((9L ^ (l_243 , (*l_221))), l_35[g_37]))))) , (safe_div_func_int32_t_s_s(((l_248 = (l_247 , 0xCDL)) != (-6L)), g_141))) && p_18)), l_227.f0)), 1)), l_227.f0))), l_247.f5)), 18446744073709551615UL));
            for (g_149.f0 = 1; (g_149.f0 >= 0); g_149.f0 -= 1)
            { 
                int i, j, k;
                (*l_221) &= (l_188[g_149.f0][(g_149.f0 + 1)][g_149.f0] , 0xB7FCCDD1L);
            }
            for (l_40 = 0; (l_40 <= 4); l_40 += 1)
            { 
                int32_t **l_249 = (void*)0;
                int32_t **l_250 = (void*)0;
                int32_t l_279[4][4] = {{0x8CCECE4DL,0xE3E01D69L,0xE3E01D69L,0x8CCECE4DL},{0xE3E01D69L,0x8CCECE4DL,0xE3E01D69L,0xE3E01D69L},{0x8CCECE4DL,0x8CCECE4DL,0x1929319AL,0x8CCECE4DL},{0x8CCECE4DL,0xE3E01D69L,0xE3E01D69L,0x8CCECE4DL}};
                int i, j;
                g_78 = &g_96;
                (*l_221) |= (4L & (safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((((+(safe_mul_func_int16_t_s_s(g_96, ((((g_258 , (safe_div_func_uint64_t_u_u((((((safe_mul_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_258.f0, ((safe_mod_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((l_273 == g_274) , (safe_mul_func_uint16_t_u_u(((((*g_78) , l_247.f4) && p_18) | 65530UL), p_18))), 0x2DL)) | p_18) > g_258.f0), 65528UL)) & l_35[g_37]))), g_258.f7)) <= g_90[4]), 0x7DL)) >= 0x1EB92BCFL), l_279[1][1])) , p_18) && 4294967295UL) != 1L) <= p_18), p_18))) , l_35[g_37]) , p_18) ^ 0x5CBA9923A281A0A5LL)))) != l_280) ^ g_3), l_247.f1)) ^ p_18) , l_248), 1)));
            }
        }
    }
    return l_281;
}



static int8_t  func_21(union U2  p_22)
{ 
    for (p_22.f3 = 0; (p_22.f3 > 5); p_22.f3 = safe_add_func_uint64_t_u_u(p_22.f3, 8))
    { 
        return g_3;
    }
    return p_22.f0;
}



static int32_t  func_55(int8_t * const  p_56, uint64_t * p_57, uint32_t  p_58)
{ 
    int32_t *l_95 = &g_90[1];
    int32_t l_107 = 4L;
    int32_t l_108 = 5L;
    int32_t l_109 = 0xDCAF161EL;
    int32_t l_110 = 1L;
    uint64_t **l_119 = &g_117;
    uint32_t l_146[6][3][2] = {{{0xEAFD68FCL,18446744073709551614UL},{18446744073709551614UL,0xEAFD68FCL},{18446744073709551614UL,18446744073709551614UL}},{{0xEAFD68FCL,18446744073709551614UL},{18446744073709551614UL,0xEAFD68FCL},{18446744073709551614UL,18446744073709551614UL}},{{0xEAFD68FCL,18446744073709551614UL},{18446744073709551614UL,0xEAFD68FCL},{18446744073709551614UL,18446744073709551614UL}},{{0xEAFD68FCL,18446744073709551614UL},{18446744073709551614UL,0xEAFD68FCL},{18446744073709551614UL,18446744073709551614UL}},{{0xEAFD68FCL,18446744073709551614UL},{18446744073709551614UL,0xEAFD68FCL},{18446744073709551614UL,18446744073709551614UL}},{{0xEAFD68FCL,18446744073709551614UL},{18446744073709551614UL,0xEAFD68FCL},{18446744073709551614UL,18446744073709551614UL}}};
    struct S1 *l_168 = (void*)0;
    struct S1 **l_167[4] = {&l_168,&l_168,&l_168,&l_168};
    int i, j, k;
    l_95 = &g_90[3];
    g_96 ^= (*l_95);
    if ((((0xFDF83262CCAF28F6LL > (0x8B81L < ((((safe_sub_func_uint8_t_u_u((!(((safe_mod_func_int32_t_s_s(((p_58 && (((safe_mul_func_int16_t_s_s(((((((&g_90[1] == l_95) == ((*l_95) < p_58)) && 1L) | (-10L)) >= g_31.f3) <= g_90[4]), (-2L))) == (*p_57)) & (*l_95))) & 7UL), p_58)) ^ g_31.f1) | 0xE4102AFE90CC9F78LL)), 255UL)) , 0x41A7DDF2L) == p_58) > g_38))) | (*g_78)) , p_58))
    { 
        int32_t *l_104 = &g_96;
        int32_t *l_105 = &g_96;
        int32_t *l_106[4] = {&g_3,&g_3,&g_3,&g_3};
        uint32_t l_111 = 0x00C08B14L;
        uint64_t ** const *l_145 = &g_116;
        struct S1 l_147 = {1L};
        int i;
        l_111++;
        (*l_105) ^= (*g_78);
        for (l_111 = 0; (l_111 != 27); l_111++)
        { 
            uint64_t ***l_118[4] = {&g_116,&g_116,&g_116,&g_116};
            int32_t l_120 = 0L;
            int64_t *l_140 = &g_141;
            int8_t *l_143[6][7][1] = {{{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144}},{{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144}},{{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144}},{{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144}},{{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144}},{{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144},{&g_144}}};
            int8_t **l_142 = &l_143[5][4][0];
            struct S1 *l_148[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_148[i] = &l_147;
            l_119 = g_116;
            g_149 = ((g_31.f1 | ((l_120 , p_58) , (~((safe_add_func_uint16_t_u_u(((((((g_144 = (safe_sub_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(g_90[4], (((((*l_142) = ((*l_95) , ((((*l_104) >= (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((*p_56) = (safe_add_func_int8_t_s_s(((((*l_140) = (safe_rshift_func_uint16_t_u_u(p_58, 0))) || (-1L)) >= g_31.f1), g_32))), g_31.f2)), 0xBE39L)) , (*p_56)) < 0x47L)) && (*l_95)) , (void*)0))) == &g_144) || p_58) >= p_58))), g_90[2])) == 0xC46842B3L), l_120)) <= p_58), p_58))) , l_118[1]) != l_145) < p_58) ^ l_146[3][0][0]) >= l_120), g_31.f2)) | 1L)))) , l_147);
        }
    }
    else
    { 
        int32_t l_162 = (-1L);
        int8_t *l_163 = &g_32;
        int8_t **l_164 = &l_163;
        int32_t *l_165[5][2] = {{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}};
        struct S1 ***l_169 = &l_167[2];
        int i, j;
        g_166 ^= ((*l_95) = ((safe_lshift_func_uint16_t_u_u(g_96, (((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(0x3A56L, 0)) > (((safe_add_func_int64_t_s_s(1L, (0x8987L || l_162))) < (((*l_164) = l_163) != (void*)0)) && g_90[1])), 1L)), 1)), p_58)) >= p_58) == (*l_95)))) == p_58));
        (*l_169) = l_167[2];
        for (g_37 = 0; (g_37 > 48); g_37 = safe_add_func_uint16_t_u_u(g_37, 1))
        { 
            int16_t *l_173 = &g_149.f0;
            if (p_58)
                break;
            (*l_95) |= (safe_unary_minus_func_int16_t_s((g_38 = ((*l_173) ^= 0x1312L))));
        }
    }
    return (*g_78);
}



static int8_t * const  func_59(int32_t * p_60, uint16_t  p_61, uint16_t  p_62, int32_t * p_63)
{ 
    uint32_t l_81[3];
    int32_t l_82 = (-1L);
    struct S1 l_87 = {-1L};
    int32_t *l_88 = (void*)0;
    int32_t *l_89 = &g_90[1];
    int8_t * const l_93 = &g_32;
    int i;
    for (i = 0; i < 3; i++)
        l_81[i] = 1UL;
    (*l_89) |= (((g_78 = &g_3) != (((safe_lshift_func_int8_t_s_s((((l_81[0] , (l_82 = g_31.f1)) ^ l_81[0]) != (((safe_rshift_func_int8_t_s_s((g_37 <= ((safe_lshift_func_uint16_t_u_s(((l_87 , (void*)0) == &l_81[0]), 4)) & l_81[0])), l_81[0])) || g_37) | l_87.f0)), p_62)) ^ l_81[0]) , p_60)) >= l_87.f0);
    l_82 ^= ((((((0L >= ((((0xC42294ECL == (p_61 & (0x2746A0FEE19A6A96LL | g_31.f2))) ^ (safe_div_func_uint64_t_u_u((0x78304AF2C2A8D2DELL >= ((void*)0 == &g_32)), p_61))) , &l_88) != (void*)0)) < g_90[3]) , 4UL) < 9L) >= p_62) & g_31.f1);
    return l_93;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_90[i], "g_90[i]", print_hash_value);

    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_258.f4, "g_258.f4", print_hash_value);
    transparent_crc(g_258.f5, "g_258.f5", print_hash_value);
    transparent_crc(g_258.f6, "g_258.f6", print_hash_value);
    transparent_crc(g_258.f7, "g_258.f7", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_334[i], "g_334[i]", print_hash_value);

    }
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_420.f0, "g_420.f0", print_hash_value);
    transparent_crc(g_420.f1, "g_420.f1", print_hash_value);
    transparent_crc(g_420.f2, "g_420.f2", print_hash_value);
    transparent_crc(g_420.f3, "g_420.f3", print_hash_value);
    transparent_crc(g_420.f4, "g_420.f4", print_hash_value);
    transparent_crc(g_420.f5, "g_420.f5", print_hash_value);
    transparent_crc(g_420.f6, "g_420.f6", print_hash_value);
    transparent_crc(g_420.f7, "g_420.f7", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_547.f0, "g_547.f0", print_hash_value);
    transparent_crc(g_547.f1, "g_547.f1", print_hash_value);
    transparent_crc(g_547.f2, "g_547.f2", print_hash_value);
    transparent_crc(g_547.f3, "g_547.f3", print_hash_value);
    transparent_crc(g_547.f4, "g_547.f4", print_hash_value);
    transparent_crc(g_547.f5, "g_547.f5", print_hash_value);
    transparent_crc(g_547.f6, "g_547.f6", print_hash_value);
    transparent_crc(g_547.f7, "g_547.f7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_561[i], "g_561[i]", print_hash_value);

    }
    transparent_crc(g_643.f0, "g_643.f0", print_hash_value);
    transparent_crc(g_643.f1, "g_643.f1", print_hash_value);
    transparent_crc(g_643.f2, "g_643.f2", print_hash_value);
    transparent_crc(g_643.f3, "g_643.f3", print_hash_value);
    transparent_crc(g_643.f4, "g_643.f4", print_hash_value);
    transparent_crc(g_643.f5, "g_643.f5", print_hash_value);
    transparent_crc(g_643.f6, "g_643.f6", print_hash_value);
    transparent_crc(g_643.f7, "g_643.f7", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_1328, "g_1328", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1555[i][j], "g_1555[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1652, "g_1652", print_hash_value);
    transparent_crc(g_1676, "g_1676", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1847[i], "g_1847[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1970[i][j][k], "g_1970[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
