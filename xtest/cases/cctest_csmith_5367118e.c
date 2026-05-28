// SPDX-License-Identifier: MIT
// cctest_csmith_5367118e.c --- cctest case csmith_5367118e (csmith seed 1399263630)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcf71bca2 */
/* @exp_ticks 0x42a5 */

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

// Options:   -s 1399263630 -o /tmp/csmith_gen_4szf709s/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   int32_t  f1;
   int8_t  f2;
   uint8_t  f3;
   uint64_t  f4;
   uint32_t  f5;
};

struct S1 {
   const uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const int32_t  f3;
   int64_t  f4;
   const uint32_t  f5;
};

union U2 {
   uint8_t  f0;
};


static const int8_t g_2 = 0L;
static uint8_t g_3 = 0x00L;
static uint16_t g_35 = 3UL;
static struct S0 g_60 = {0xB2L,-1L,0xC3L,0x87L,0UL,1UL};
static int64_t g_96[1] = {(-4L)};
static uint16_t g_97[1][3][4] = {{{1UL,7UL,0x3B7DL,7UL},{7UL,0x658AL,0x3B7DL,0x3B7DL},{1UL,1UL,7UL,0x3B7DL}}};
static union U2 g_98 = {1UL};
static uint32_t g_144 = 0UL;
static uint16_t g_157 = 0x0287L;
static uint8_t g_168 = 0x70L;
static struct S0 g_201 = {-4L,-1L,0L,246UL,0xFEC1ED602CC8EED5LL,0UL};
static int64_t g_228 = (-5L);
static int16_t g_229 = 9L;
static uint32_t g_230 = 0x83EB55C6L;
static struct S0 g_236 = {0x28L,4L,1L,1UL,0x1984899948650110LL,4294967293UL};
static struct S0 g_237 = {-1L,-1L,0xA8L,0x29L,0x4B5586E65512604FLL,4294967289UL};
static struct S0 g_238 = {1L,0x6843842CL,0xB8L,0UL,1UL,0UL};



static int32_t  func_1(void);
static int8_t  func_10(uint16_t  p_11, int8_t  p_12, union U2  p_13, int32_t  p_14);
static const int8_t  func_17(int32_t  p_18);
static int32_t  func_22(const uint64_t  p_23);




static int32_t  func_1(void)
{ 
    struct S1 l_26[2][1] = {{{8UL,0x3494ABC2L,0x891023F1L,-1L,-2L,4294967286UL}},{{8UL,0x3494ABC2L,0x891023F1L,-1L,-2L,4294967286UL}}};
    uint32_t l_27 = 0x58163090L;
    union U2 l_113 = {0xEDL};
    int i, j;
    g_3 = g_2;
lbl_209:
    l_26[0][0].f2 = (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((0L < (safe_lshift_func_int8_t_s_u(func_10(((safe_mul_func_int8_t_s_s(func_17((safe_sub_func_uint64_t_u_u((!(((func_22((((safe_mul_func_uint8_t_u_u(0UL, (((l_26[0][0] , (g_2 == 0L)) > l_27) != 0x7EL))) , l_27) , l_27)) <= g_60.f3) , 4294967295UL) || 0x9C62F16CL)), g_96[0]))), g_60.f5)) | (-1L)), g_97[0][1][2], l_113, l_26[0][0].f1), g_96[0]))), l_26[0][0].f0)), 255UL));
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        uint16_t l_211[1][5] = {{65527UL,65527UL,65527UL,65527UL,65527UL}};
        uint32_t l_234[5][4];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_234[i][j] = 0xBB420BBDL;
        }
        for (g_60.f5 = 0; (g_60.f5 <= 0); g_60.f5 += 1)
        { 
            int i;
            g_60.f1 = (safe_sub_func_int8_t_s_s((-1L), ((g_96[g_3] == 0x3FBF1EE3L) >= 0x004CL)));
            for (g_201.f1 = 0; (g_201.f1 >= 0); g_201.f1 -= 1)
            { 
                int i;
                return g_96[g_60.f5];
            }
            if (l_113.f0)
                goto lbl_209;
            for (g_144 = 0; (g_144 <= 0); g_144 += 1)
            { 
                int32_t l_210 = (-3L);
                int i;
                l_210 |= g_96[g_3];
                return g_96[g_3];
            }
        }
        for (g_60.f2 = 0; (g_60.f2 >= 0); g_60.f2 -= 1)
        { 
            uint32_t l_214 = 18446744073709551608UL;
            int32_t l_226 = 0xE5E4B7D5L;
            l_211[0][4]--;
            l_226 = (((l_214 ^= 0L) | ((g_60.f1 = 0xC3FCEF47L) , (((+(((((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_96[0], (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((((g_168++) && 0x0FL) || l_211[0][4]) >= g_60.f4), (-1L))), l_226)))), l_226)) <= l_26[0][0].f1) < 0x42L) || l_226) == g_201.f2)) > l_211[0][4]) == 0xD4EF5650L))) , 9L);
            for (l_113.f0 = 0; (l_113.f0 <= 0); l_113.f0 += 1)
            { 
                int16_t l_227[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
                struct S1 l_233 = {2UL,0x610735DBL,0xDFD0E00CL,1L,7L,4294967294UL};
                struct S0 l_235 = {0x15L,0xDDF4B60EL,0xEDL,246UL,4UL,0x8FEA865AL};
                int i;
                g_230--;
                g_238 = (g_237 = ((l_233 , (g_236 = (l_234[0][1] , (g_201 = (g_98 , l_235))))) , l_235));
            }
        }
    }
    return l_26[0][0].f1;
}



static int8_t  func_10(uint16_t  p_11, int8_t  p_12, union U2  p_13, int32_t  p_14)
{ 
    int16_t l_120 = 0x25F5L;
    int32_t l_121 = (-10L);
    int32_t l_122 = 0x034D0585L;
    int32_t l_167[5];
    struct S0 l_183 = {0L,-9L,-1L,246UL,9UL,4294967288UL};
    uint32_t l_206 = 8UL;
    int i;
    for (i = 0; i < 5; i++)
        l_167[i] = 0x7EDC9179L;
    l_122 = (((0UL & (safe_add_func_int32_t_s_s((l_121 = ((g_35 | (0x75L != (((g_96[0] | 1UL) >= p_12) != 65529UL))) , l_120)), p_11))) >= 0UL) != 0x2DD19626L);
    for (g_35 = 0; (g_35 <= 0); g_35 += 1)
    { 
        uint32_t l_125[1][4][3] = {{{0xB1BBB9F2L,0xD28FE829L,0xB1BBB9F2L},{0UL,0UL,0UL},{0xB1BBB9F2L,0xD28FE829L,0xB1BBB9F2L},{0UL,0UL,0UL}}};
        int32_t l_143 = 0xAD02808DL;
        int32_t l_162 = 0xAC962BC7L;
        int32_t l_163 = 0x9E358F53L;
        int i, j, k;
        for (p_13.f0 = 0; (p_13.f0 <= 0); p_13.f0 += 1)
        { 
            int16_t l_140[2];
            int32_t l_141 = 0xEB5DA641L;
            int16_t l_142 = 0xB179L;
            int i;
            for (i = 0; i < 2; i++)
                l_140[i] = 6L;
            for (g_60.f2 = 0; (g_60.f2 >= 0); g_60.f2 -= 1)
            { 
                int i, j, k;
                l_141 &= (safe_rshift_func_int16_t_s_u((l_125[0][2][1] > (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((l_140[1] = (((g_60.f5 < 0UL) & ((((safe_div_func_uint16_t_u_u((g_97[p_13.f0][(g_35 + 1)][(g_60.f2 + 3)] &= (safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((g_60.f3 ^ g_60.f5), p_13.f0)), g_60.f4))), g_2)) < p_14) != l_122) <= g_60.f4)) || g_60.f2)) <= 0xF1BBL), 7)), g_3)), p_11))), g_60.f0));
                ++g_144;
                l_141 = (g_60.f1 = (safe_div_func_int32_t_s_s((((p_11 || (((safe_mul_func_int8_t_s_s(l_143, (safe_lshift_func_uint8_t_u_s(l_140[1], (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((-9L), g_60.f2)), g_60.f1)))))) , g_60.f4) >= 1UL)) == l_122) , 0x61DA5A7FL), 4L)));
            }
            ++g_157;
            for (p_11 = (-21); (p_11 != 18); p_11++)
            { 
                int8_t l_164 = 0L;
                int32_t l_165 = 0L;
                int32_t l_166 = 0L;
                --g_168;
            }
        }
        for (g_157 = 0; (g_157 > 24); g_157++)
        { 
            int32_t l_177 = 3L;
            struct S0 l_182 = {-1L,-2L,-10L,255UL,4UL,0x41BAEACEL};
            uint16_t l_192[2];
            int i;
            for (i = 0; i < 2; i++)
                l_192[i] = 0x995BL;
            if (g_60.f1)
                break;
            l_162 = 0xB11A4FFBL;
            if (((l_163 = (((p_13.f0 , (3L & (safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((l_177 == ((((safe_lshift_func_int8_t_s_u(((((g_168 = ((safe_sub_func_int64_t_s_s(p_12, p_14)) && 0x32D04EE4L)) == p_11) || p_14) | g_157), 3)) , 2UL) | g_144) > 0xEE185A6AL)), 0xEDL)), g_60.f5)))) < (-1L)) ^ p_13.f0)) && p_13.f0))
            { 
                l_167[3] = ((l_183 = l_182) , (((safe_sub_func_int64_t_s_s(0xDDE06F248DD3C908LL, ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_14 != ((safe_div_func_int8_t_s_s(l_183.f0, 3UL)) | 0x26A06325L)), g_97[0][0][2])), p_13.f0)) , l_183.f0))) , l_192[0]) | g_96[0]));
            }
            else
            { 
                if (l_183.f0)
                    break;
                l_183.f1 |= (safe_sub_func_uint64_t_u_u(l_182.f4, ((safe_add_func_int32_t_s_s(0L, ((safe_add_func_int16_t_s_s((((l_182.f1 ^= (safe_mod_func_int16_t_s_s((l_163 = (1UL || 0x98L)), g_35))) | l_121) ^ g_2), 0x69D6L)) == 9L))) , g_96[0])));
                g_201 = (g_60 = l_183);
            }
        }
        l_183.f1 = (l_167[3] = (g_201.f0 < (safe_rshift_func_uint16_t_u_u((((((l_143 |= g_2) < l_125[0][2][2]) & ((safe_add_func_int64_t_s_s((p_13.f0 , p_13.f0), l_122)) ^ g_97[0][1][0])) , l_206) != p_14), g_201.f5))));
    }
    g_60 = l_183;
    return g_201.f0;
}



static const int8_t  func_17(int32_t  p_18)
{ 
    int8_t l_112 = 0L;
    g_60.f1 |= ((safe_add_func_uint32_t_u_u(0UL, ((-1L) || (l_112 != l_112)))) <= p_18);
    return l_112;
}



static int32_t  func_22(const uint64_t  p_23)
{ 
    uint32_t l_28 = 0xE46552DEL;
    uint8_t l_29[2][5][1] = {{{0x64L},{0x64L},{255UL},{0x64L},{0x64L}},{{255UL},{0x64L},{0x64L},{255UL},{255UL}}};
    int32_t l_34 = 0xDC70E74BL;
    int i, j, k;
    l_29[1][1][0] = l_28;
    if (g_2)
    { 
        uint32_t l_52 = 0x0DE197B2L;
        int32_t l_57[5][4] = {{(-6L),0x1F317735L,0x7CF2842CL,(-6L)},{0x7CF2842CL,(-6L),(-1L),(-1L)},{0L,0L,8L,0xA2C03FDDL},{0L,0x1F317735L,(-1L),0L},{0x7CF2842CL,0xA2C03FDDL,0x7CF2842CL,(-1L)}};
        union U2 l_69 = {0xCBL};
        int32_t l_70 = 0L;
        int i, j;
        for (g_3 = (-24); (g_3 < 53); g_3 = safe_add_func_int64_t_s_s(g_3, 5))
        { 
            for (l_28 = (-13); (l_28 != 11); l_28++)
            { 
                if (g_2)
                    break;
                return g_3;
            }
            if (p_23)
                continue;
        }
        --g_35;
        for (g_35 = 0; (g_35 > 37); g_35++)
        { 
            const uint64_t l_58[5][1] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
            int32_t l_59 = 0L;
            int i, j;
            l_59 = (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(l_29[0][3][0], ((safe_mul_func_int8_t_s_s(g_2, ((l_57[1][3] = (safe_mod_func_int32_t_s_s((((--l_52) != ((safe_div_func_uint8_t_u_u(0x96L, 0x98L)) < p_23)) & (-1L)), p_23))) >= p_23))) || 0x6A17913DL))) < 249UL), 0xDCL)), l_58[0][0])), 0x82L));
            l_70 = (g_60 , (safe_lshift_func_int16_t_s_u(((0x1A4AL <= g_60.f5) == ((((((l_59 = (safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((((l_57[1][3] |= ((0L != 0x3A415DBE4B24D3E4LL) > 0x3E3B667DL)) || g_2) , 0x16L), l_28)) < g_60.f2), g_60.f4)), p_23))) , l_69) , 1L) , g_3) == p_23) != p_23)), g_3)));
        }
    }
    else
    { 
        int64_t l_106 = (-10L);
        struct S0 l_109 = {0L,1L,0x56L,251UL,0xDAFBE71502624D59LL,0x34E3A658L};
        for (l_34 = 0; (l_34 != 8); l_34++)
        { 
            int64_t l_83 = 0xBB2392579B7B7A4FLL;
            g_60.f1 = (p_23 > ((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((l_83 < (((p_23 || (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_23, g_60.f5)), p_23))) != (-1L)) != 0x28B7L)) || g_60.f0) && (-10L)), l_83)), l_83)), 1UL)), p_23)) <= l_34));
        }
        if (g_60.f1)
        { 
            struct S1 l_88 = {4UL,0xA9F47826L,-1L,0xA36320CFL,0L,0x0AEE99EAL};
            if ((l_88 , (0x349DL | 0x036CL)))
            { 
                int8_t l_95 = 0x13L;
                uint32_t l_105 = 0xA6A349BDL;
                l_34 = ((((0xC0L != ((safe_rshift_func_uint8_t_u_u(p_23, (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((l_95 < (0xA2L > g_96[0])), g_97[0][1][2])) | 0x225C50F45F4D98BCLL), 1L)))) , g_96[0])) != p_23) , g_98) , l_88.f3);
                l_106 &= ((((safe_lshift_func_uint16_t_u_u(0x032CL, 13)) >= (g_60.f2 = 1L)) && (safe_mod_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(g_96[0], l_29[0][1][0])) >= l_105), 1UL))) || l_88.f0);
                return p_23;
            }
            else
            { 
                uint16_t l_107[2][5][5] = {{{0xEA44L,0xEA44L,0xEA44L,0xEA44L,0xEA44L},{0xE338L,0xE338L,0xE338L,0xE338L,0xE338L},{0xEA44L,0xEA44L,0xEA44L,0xEA44L,0xEA44L},{0xE338L,0xE338L,0xE338L,0xE338L,0xE338L},{0xEA44L,0xEA44L,0xEA44L,0xEA44L,0xEA44L}},{{0xE338L,0xE338L,0xE338L,0xE338L,0xE338L},{0xEA44L,0xEA44L,0xEA44L,0xEA44L,0xEA44L},{0xE338L,0xE338L,0xE338L,0xE338L,0xE338L},{0xEA44L,0xEA44L,0xEA44L,0xEA44L,0xEA44L},{0xE338L,0xE338L,0xE338L,0xE338L,0xE338L}}};
                int i, j, k;
                l_107[1][0][4] = l_88.f2;
            }
        }
        else
        { 
            struct S0 l_108 = {0x94L,0x356F341AL,8L,0x28L,0x450AD34F8EFC5DF5LL,7UL};
            for (g_35 = 0; (g_35 <= 0); g_35 += 1)
            { 
                g_60.f1 |= ((0UL != g_97[0][1][2]) , p_23);
                l_109 = l_108;
            }
        }
        l_109 = g_60;
    }
    return p_23;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_60.f4, "g_60.f4", print_hash_value);
    transparent_crc(g_60.f5, "g_60.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_97[i][j][k], "g_97[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_201.f1, "g_201.f1", print_hash_value);
    transparent_crc(g_201.f2, "g_201.f2", print_hash_value);
    transparent_crc(g_201.f3, "g_201.f3", print_hash_value);
    transparent_crc(g_201.f4, "g_201.f4", print_hash_value);
    transparent_crc(g_201.f5, "g_201.f5", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    transparent_crc(g_236.f2, "g_236.f2", print_hash_value);
    transparent_crc(g_236.f3, "g_236.f3", print_hash_value);
    transparent_crc(g_236.f4, "g_236.f4", print_hash_value);
    transparent_crc(g_236.f5, "g_236.f5", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_237.f2, "g_237.f2", print_hash_value);
    transparent_crc(g_237.f3, "g_237.f3", print_hash_value);
    transparent_crc(g_237.f4, "g_237.f4", print_hash_value);
    transparent_crc(g_237.f5, "g_237.f5", print_hash_value);
    transparent_crc(g_238.f0, "g_238.f0", print_hash_value);
    transparent_crc(g_238.f1, "g_238.f1", print_hash_value);
    transparent_crc(g_238.f2, "g_238.f2", print_hash_value);
    transparent_crc(g_238.f3, "g_238.f3", print_hash_value);
    transparent_crc(g_238.f4, "g_238.f4", print_hash_value);
    transparent_crc(g_238.f5, "g_238.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
