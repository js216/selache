// SPDX-License-Identifier: MIT
// cctest_csmith_9d713ccc.c --- cctest case csmith_9d713ccc (csmith seed 2641444044)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7c9c37cd */
/* @exp_ticks 0x3e62 */

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

// Options:   -s 2641444044 -o /tmp/csmith_gen_0p8ctn2w/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   int32_t  f4;
};

union U1 {
   struct S0  f0;
};


static int32_t g_2 = 1L;
static int32_t g_6[3][1][2] = {{{0x07B4BC66L,0x07B4BC66L}},{{0x07B4BC66L,0x07B4BC66L}},{{0x07B4BC66L,0x07B4BC66L}}};
static int8_t g_7 = 1L;
static uint16_t g_8 = 1UL;
static union U1 g_24 = {{4UL,0x17AB6DAD816F93BDLL,0xDEL,0UL,1L}};
static int8_t g_59 = 8L;
static union U1 g_63 = {{0xB4ADC7C5L,0x975881DD571B4D09LL,0x52L,0UL,-6L}};
static uint8_t g_140 = 0x1BL;
static int64_t g_141[4][4] = {{0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL},{0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL},{0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL},{0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL,0x33BC337E5C358597LL}};
static uint32_t g_150 = 0x01CFD3AFL;
static uint32_t g_179 = 4294967295UL;
static int64_t g_211 = 0L;
static uint32_t g_219 = 18446744073709551615UL;
static int16_t g_236[1][4][4] = {{{7L,7L,0xB87BL,7L},{7L,0xF4A9L,0xF4A9L,7L},{0xF4A9L,7L,0xF4A9L,0xF4A9L},{7L,7L,0xB87BL,7L}}};
static uint64_t g_256 = 0x353F1D640A94FD2CLL;
static int8_t g_340 = (-4L);



static uint32_t  func_1(void);
static int32_t  func_11(const uint16_t  p_12, int32_t  p_13, const int16_t  p_14, union U1  p_15, int32_t  p_16);
static int32_t  func_19(const int64_t  p_20, union U1  p_21, int8_t  p_22, const int8_t  p_23);
static int64_t  func_35(uint64_t  p_36, int8_t  p_37, uint32_t  p_38, uint32_t  p_39);




static uint32_t  func_1(void)
{ 
    uint32_t l_5[5] = {0x2B165808L,0x2B165808L,0x2B165808L,0x2B165808L,0x2B165808L};
    int32_t l_62 = 0xB61EA52FL;
    struct S0 l_284 = {18446744073709551613UL,0xC5433B60F176138ELL,9UL,0xB7L,0xB8965CC1L};
    int16_t l_329 = 0xC850L;
    uint8_t l_342 = 0x41L;
    int16_t l_354 = (-1L);
    int i;
    for (g_2 = 25; (g_2 < (-4)); g_2--)
    { 
        uint8_t l_295[1];
        union U1 l_323 = {{2UL,18446744073709551615UL,5UL,0UL,0x90807700L}};
        int16_t l_324 = 0xF942L;
        int32_t l_341 = 0x75F561E7L;
        int i;
        for (i = 0; i < 1; i++)
            l_295[i] = 0xA6L;
        for (g_6[2][0][1] = 0; (g_6[2][0][1] <= 4); g_6[2][0][1] += 1)
        { 
            int i;
            if (l_5[g_6[2][0][1]])
                break;
            g_8--;
        }
        for (g_8 = 0; (g_8 <= 4); g_8 += 1)
        { 
            int8_t l_280[3][5] = {{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{1L,1L,1L,1L,1L},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL}};
            uint32_t l_294 = 18446744073709551615UL;
            int i, j;
            if (func_11(l_5[g_8], (l_62 = (safe_div_func_int32_t_s_s(func_19(g_8, g_24, l_5[g_8], g_6[2][0][1]), g_7))), g_2, g_63, g_7))
            { 
                return g_140;
            }
            else
            { 
                int64_t l_281 = 6L;
                l_281 ^= l_280[1][4];
                g_63.f0 = g_24.f0;
                if (l_281)
                    break;
            }
            for (g_219 = 1; (g_219 <= 4); g_219 += 1)
            { 
                const int64_t l_293 = 0xF5C35F3DD4075E5BLL;
                int32_t l_296 = (-6L);
                int i;
                l_296 &= (l_62 ^ ((g_24 , ((((safe_mul_func_int16_t_s_s((l_284 , ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(0x0EEBE92DL, g_140)) | l_293), l_5[g_8])), l_293)) >= 7UL) || g_2), l_294)) <= g_59)), l_295[0])) & 0x7873L) > g_236[0][1][3]) || g_256)) || g_63.f0.f1));
                g_6[2][0][0] = (safe_sub_func_uint64_t_u_u((((safe_unary_minus_func_uint32_t_u(((((safe_add_func_int64_t_s_s(((-1L) >= (safe_rshift_func_int16_t_s_s(((l_5[g_8] ^= (g_141[2][0] < g_179)) , (safe_lshift_func_int16_t_s_u(((g_63.f0.f1 = g_141[2][0]) < 18446744073709551615UL), 9))), g_150))), l_284.f0)) > l_296) & l_293) <= 0x69L))) > l_295[0]) , l_295[0]), 0x56022EB11DCCF776LL));
                if (g_59)
                    continue;
            }
            if (g_63.f0.f3)
                continue;
        }
        if ((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s(0L, (!(safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(247UL, (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((g_179 ^ (((l_323 , g_256) , l_323.f0.f4) > g_63.f0.f1)), g_7)), 7)) && l_284.f2) , g_24.f0.f4), l_284.f4)))) != 4294967286UL) >= l_324), (-1L))) | g_6[2][0][0]), l_284.f2))))), g_63.f0.f3)))
        { 
            int64_t l_338 = 1L;
            if ((safe_mod_func_int32_t_s_s((0x38A1L < (safe_mod_func_int8_t_s_s(l_329, ((safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_div_func_int64_t_s_s(l_284.f3, 0x71FD06F51EB76DF1LL)), g_24.f0.f0)), 0x04L)), g_236[0][0][1])) , (-1L))))), l_323.f0.f0)))
            { 
                int32_t l_339 = 0x99D4765FL;
                l_342++;
            }
            else
            { 
                return g_59;
            }
        }
        else
        { 
            int8_t l_347 = 8L;
            int32_t l_358 = 0xE72FAC23L;
            g_6[2][0][1] = ((l_62 = 0xFBL) || (l_347 < (2UL | (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((g_340 = (safe_rshift_func_uint8_t_u_s((g_24.f0.f0 && g_179), l_354))) | 0UL) | 0xA6L), 0x8EC8A288L)), l_347)))));
            l_358 = (safe_lshift_func_uint8_t_u_u((~l_347), 2));
            for (l_323.f0.f0 = 28; (l_323.f0.f0 >= 27); l_323.f0.f0--)
            { 
                return g_6[2][0][1];
            }
        }
    }
    return l_5[2];
}



static int32_t  func_11(const uint16_t  p_12, int32_t  p_13, const int16_t  p_14, union U1  p_15, int32_t  p_16)
{ 
    int32_t l_75 = 0L;
    int32_t l_104 = 0x715C7436L;
    int32_t l_143 = 0x385723E8L;
    uint8_t l_144 = 0x19L;
    int32_t l_145 = 0x015BDF58L;
    int32_t l_146 = 0xA5D717EFL;
    uint64_t l_196 = 0xF5ADCE77D4040057LL;
    int32_t l_255 = (-4L);
    if ((g_6[0][0][0] = g_24.f0.f2))
    { 
        uint32_t l_64 = 0UL;
        int32_t l_78 = 0L;
        int32_t l_142 = 0x9A09347DL;
        if ((((g_63.f0.f3 &= g_24.f0.f2) & 0xC3L) < g_6[1][0][0]))
        { 
            return l_64;
        }
        else
        { 
            int16_t l_76 = 0L;
            int32_t l_77[3][5] = {{8L,8L,8L,8L,8L},{0x74433A03L,0x74433A03L,0x74433A03L,0x74433A03L,0x74433A03L},{8L,8L,8L,8L,8L}};
            int i, j;
            for (p_15.f0.f0 = 0; (p_15.f0.f0 <= 0); p_15.f0.f0 += 1)
            { 
                l_78 &= (safe_mul_func_uint16_t_u_u(g_6[0][0][0], ((safe_rshift_func_uint16_t_u_s(((((p_12 <= (!(l_77[1][2] ^= (((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_64, (((l_75 && 1UL) > 1UL) & l_76))) & 0x98F9L), 4)) <= (-1L)))) <= 18446744073709551606UL) == (-1L))))) != g_24.f0.f4) || 0xB1E9L) != p_15.f0.f2), l_76)) < 0x0AL)));
            }
            l_104 = (safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((-9L), (safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s((((p_15.f0.f1 ^ ((l_78 = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_16, 3)), (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(0xA172L, l_77[0][1])), 2)), p_15.f0.f1)) != l_77[1][3]) == l_75))) <= l_78)) , g_63.f0.f0)) > 0x74L) >= p_15.f0.f2), 0)))) == g_6[2][0][0]) & l_64), 0x5A18L)))), l_75)) > 18446744073709551614UL), g_63.f0.f1)) , g_63.f0.f1) <= p_15.f0.f1), 1L)), 0xB79DL));
        }
        p_13 &= ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_146 = (l_145 &= ((safe_add_func_int32_t_s_s(((l_144 = ((l_143 = (p_15 , (safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s(g_2, (safe_lshift_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(((g_63.f0.f0 || ((safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((g_141[2][0] = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((l_104 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((g_140 = l_64) ^ g_24.f0.f0), p_15.f0.f3)) || 0x01L), l_78)), g_6[2][0][1]))) == l_75), p_15.f0.f0)) ^ 0x96L), p_15.f0.f2)) ^ g_24.f0.f3), 12)), g_24.f0.f1))), 1UL)) || l_104), l_78)) != g_59)) && l_142))) > p_15.f0.f4) | p_12), 5)))) == g_63.f0.f2) , (-1L)), p_15.f0.f0)) == p_15.f0.f2) ^ p_15.f0.f3), g_63.f0.f0)))) ^ p_16)) , 0L), g_6[2][0][1])) , (-6L)))), 4)), p_15.f0.f0)), 4294967294UL)) && 1UL);
    }
    else
    { 
lbl_269:
        p_13 = (p_15.f0.f0 < p_14);
    }
    for (g_63.f0.f1 = 0; (g_63.f0.f1 <= 0); g_63.f0.f1 += 1)
    { 
        int16_t l_147 = 0x7C44L;
        int32_t l_161[2][3];
        uint64_t l_186 = 18446744073709551615UL;
        uint32_t l_208 = 0UL;
        uint8_t l_220 = 249UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_161[i][j] = 0x970BCD74L;
        }
        if ((l_147 <= (safe_lshift_func_uint16_t_u_s((++g_150), ((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(g_24.f0.f4, (-1L))) > (safe_add_func_uint8_t_u_u((g_140 = ((l_147 >= g_6[2][0][1]) == l_146)), 0UL))), p_12)), 255UL)) ^ 0x7A42L)))))
        { 
            for (g_24.f0.f2 = 0; (g_24.f0.f2 <= 3); g_24.f0.f2 += 1)
            { 
                int i, j;
                l_161[1][2] = g_141[g_24.f0.f2][(g_63.f0.f1 + 1)];
                p_16 = (safe_rshift_func_uint16_t_u_s(65533UL, p_13));
                g_6[2][0][1] |= ((p_15.f0.f3 > 0x88640006811DC0D2LL) , l_144);
            }
        }
        else
        { 
            int32_t l_169 = 9L;
            uint32_t l_178 = 0xFB47EBAEL;
            p_16 |= (safe_sub_func_uint64_t_u_u((~0x7EC01D75DE8CEC1BLL), (l_104 = ((safe_sub_func_int64_t_s_s(l_169, ((g_179 = (safe_mul_func_int8_t_s_s(((l_143 = ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((p_12 | (safe_add_func_int16_t_s_s(p_12, p_15.f0.f0))), l_161[0][2])), l_178)) || 0xE61E940AL)) <= l_146), p_15.f0.f4))) & 0L))) | l_169))));
            for (l_146 = 0; (l_146 <= 3); l_146 += 1)
            { 
                p_16 = (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((g_179 = p_15.f0.f0) != (l_178 == (safe_mul_func_int8_t_s_s(((p_12 ^ (!p_14)) , p_15.f0.f1), l_186)))))), 0L));
                p_16 ^= g_141[2][0];
            }
        }
        if ((((safe_div_func_uint8_t_u_u(((l_161[1][2] = ((!(l_143 != (g_24.f0.f1 = (safe_div_func_int32_t_s_s(p_15.f0.f4, ((0xBDL == ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((p_15.f0.f3 , g_24) , 0x34L) > l_104), p_12)), 7)) & p_15.f0.f2)) , g_24.f0.f4)))))) ^ 0x7E23L)) > (-7L)), l_196)) | l_147) == 0xEBD0L))
        { 
            const int8_t l_207 = 0x0EL;
            int8_t l_209 = 4L;
            int32_t l_210 = 1L;
            if (((-1L) >= (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((l_161[1][1] ^= p_15.f0.f2) || (l_104 = 0x09C26951L)), (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((((((((((0x3118L || g_141[0][0]) <= 0UL) | l_147) >= p_16) || l_186) , l_75) , l_207) , p_15.f0.f0) , 0x489776ACFB1E1F64LL) ^ p_12), g_150)), g_2)))), l_208)), p_15.f0.f4))))
            { 
                g_6[2][0][1] = 0x008CE353L;
            }
            else
            { 
                int8_t l_212[2];
                uint32_t l_213[5][4];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_212[i] = 0xA7L;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_213[i][j] = 0x5977C529L;
                }
                p_16 = l_207;
                if (l_207)
                    continue;
                l_213[1][1]++;
            }
            p_13 = g_63.f0.f3;
            if ((!(-1L)))
            { 
                int32_t l_225 = 0xA64F93B8L;
                l_220 = (safe_mul_func_int16_t_s_s((g_219 = (p_15.f0.f0 != (l_196 < 0UL))), 65530UL));
                g_6[2][0][1] = (l_161[1][2] ^= ((safe_sub_func_int8_t_s_s((l_225 != (p_16 <= ((65530UL ^ (((((((p_15.f0.f1 = (safe_rshift_func_int16_t_s_u(p_15.f0.f1, g_141[2][2]))) | l_209) <= g_63.f0.f1) ^ l_225) && p_12) & (-1L)) >= p_13)) | p_14))), 0x55L)) >= p_12));
                if (l_145)
                    break;
            }
            else
            { 
                p_13 = (g_6[2][0][1] > ((((safe_rshift_func_uint16_t_u_s((g_236[0][1][3] &= ((0x8AL | g_63.f0.f4) >= ((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_24.f0.f4, g_8)), 0xFF6EFAB7L)), 2L)) > l_186))), l_145)) , l_220) < p_15.f0.f1) && g_24.f0.f1));
            }
        }
        else
        { 
            uint32_t l_247 = 0x2073866EL;
            int32_t l_248 = (-1L);
            int32_t l_249 = 7L;
            int32_t l_250 = (-10L);
            int32_t l_251 = 0x3F2C5E0AL;
            l_104 = ((((safe_mod_func_uint32_t_u_u((g_24 , ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_247 = ((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0UL, g_24.f0.f2)), l_147)) != g_7)), 2L)), 1UL)) > (-3L))), 1L)) != g_141[2][0]) && g_8) >= l_248);
            if (g_219)
            { 
                uint32_t l_252 = 0x3EB63C3FL;
                l_252++;
            }
            else
            { 
                g_256--;
            }
        }
        for (l_146 = 0; (l_146 <= 3); l_146 += 1)
        { 
            int32_t l_265[1][4][3] = {{{0xB7656483L,0x6466B916L,0xB7656483L},{(-3L),(-3L),(-3L)},{0xB7656483L,0x6466B916L,0xB7656483L},{(-3L),(-3L),(-3L)}}};
            int i, j, k;
            if ((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_147, 1UL)), 0)), l_265[0][1][2])))
            { 
                g_6[2][0][1] = ((((g_6[2][0][0] <= l_144) != g_141[1][1]) < ((((safe_div_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u(g_150)) || g_24.f0.f2), l_161[1][2])) >= p_14) == 2UL) , l_146)) < g_2);
                if (l_147)
                    goto lbl_269;
            }
            else
            { 
                uint16_t l_279 = 1UL;
                l_143 = (g_6[2][0][1] = (9L && (safe_unary_minus_func_uint32_t_u((((safe_sub_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(g_63.f0.f2, (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_146, g_150)), 1L)))) , l_279) <= l_161[0][0]), l_220)) >= 0xF4E470BC13450B3ELL) & l_279)))));
            }
            for (g_140 = 0; (g_140 <= 3); g_140 += 1)
            { 
                int i, j, k;
                l_265[0][0][1] &= g_6[(g_63.f0.f1 + 2)][g_63.f0.f1][(g_63.f0.f1 + 1)];
            }
        }
    }
    return p_15.f0.f2;
}



static int32_t  func_19(const int64_t  p_20, union U1  p_21, int8_t  p_22, const int8_t  p_23)
{ 
    uint8_t l_29 = 0xF7L;
    for (g_24.f0.f0 = 0; (g_24.f0.f0 <= 25); g_24.f0.f0 = safe_add_func_uint64_t_u_u(g_24.f0.f0, 8))
    { 
        uint32_t l_60 = 0x0456BBB3L;
        int32_t l_61 = 1L;
        for (p_21.f0.f2 = 0; (p_21.f0.f2 <= 10); p_21.f0.f2++)
        { 
            --l_29;
            g_6[1][0][0] &= ((+(safe_sub_func_int64_t_s_s(func_35(p_23, p_21.f0.f4, p_23, p_23), p_21.f0.f2))) & 2UL);
            if (p_20)
                continue;
        }
        l_61 = ((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(65534UL, ((((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(p_21.f0.f2, (18446744073709551615UL < ((safe_div_func_int64_t_s_s((g_59 = p_21.f0.f4), g_6[2][0][1])) || l_60)))) >= l_60), 2L)) , g_8), g_24.f0.f4)) <= p_20) > p_21.f0.f1) ^ l_60))) , g_24.f0.f1), g_6[0][0][0])) || g_24.f0.f4);
    }
    return g_24.f0.f2;
}



static int64_t  func_35(uint64_t  p_36, int8_t  p_37, uint32_t  p_38, uint32_t  p_39)
{ 
    struct S0 l_45 = {18446744073709551615UL,7UL,0x95L,0x1DL,0xFCECB2ECL};
    for (p_38 = 0; (p_38 <= 44); p_38 = safe_add_func_uint16_t_u_u(p_38, 2))
    { 
        struct S0 l_44 = {18446744073709551606UL,0x230B63E91CB64B69LL,0x05L,0x9BL,-9L};
        for (p_36 = (-6); (p_36 < 17); p_36 = safe_add_func_int8_t_s_s(p_36, 9))
        { 
            struct S0 l_46 = {18446744073709551615UL,3UL,0x2EL,0xBAL,-1L};
            l_45 = l_44;
            l_46 = l_44;
        }
    }
    return l_45.f4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_24.f0.f0, "g_24.f0.f0", print_hash_value);
    transparent_crc(g_24.f0.f1, "g_24.f0.f1", print_hash_value);
    transparent_crc(g_24.f0.f2, "g_24.f0.f2", print_hash_value);
    transparent_crc(g_24.f0.f3, "g_24.f0.f3", print_hash_value);
    transparent_crc(g_24.f0.f4, "g_24.f0.f4", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_63.f0.f0, "g_63.f0.f0", print_hash_value);
    transparent_crc(g_63.f0.f1, "g_63.f0.f1", print_hash_value);
    transparent_crc(g_63.f0.f2, "g_63.f0.f2", print_hash_value);
    transparent_crc(g_63.f0.f3, "g_63.f0.f3", print_hash_value);
    transparent_crc(g_63.f0.f4, "g_63.f0.f4", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_141[i][j], "g_141[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_236[i][j][k], "g_236[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
