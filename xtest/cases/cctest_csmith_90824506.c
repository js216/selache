// SPDX-License-Identifier: MIT
// cctest_csmith_90824506.c --- cctest case csmith_90824506 (csmith seed 2424456454)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe3845f40 */
/* @exp_ticks 0x3baa */

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

// Options:   -s 2424456454 -o /tmp/csmith_gen_b1pwi2ms/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int64_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};

union U1 {
   int32_t  f0;
};

union U3 {
   struct S0  f0;
};


static uint64_t g_6 = 0x872FA4AD744D0289LL;
static union U3 g_15 = {{0xFBEFA5F9L,0x7104272BA75A592CLL,0xEED1L,0x12AA53F0L}};
static const union U1 g_16[1] = {{9L}};
static int16_t g_21 = (-1L);
static uint32_t g_30 = 0UL;
static int8_t g_35 = 0L;
static uint64_t g_75 = 0x8A086CC6B0C40B38LL;
static int8_t g_76 = (-1L);
static int32_t g_78 = (-3L);
static int64_t g_92 = 0xF05760DC054819E5LL;
static uint32_t g_126 = 18446744073709551612UL;
static union U1 g_142 = {0x8D3B5AAAL};
static uint32_t g_144 = 0x620DE400L;
static int64_t g_147[5][5] = {{0x7C935D89A0F2D961LL,0x7C935D89A0F2D961LL,(-3L),0L,0x0BEB2AB5F7C52E31LL},{0xB248B132FC06C707LL,0x0BEB2AB5F7C52E31LL,4L,4L,0x0BEB2AB5F7C52E31LL},{0x0BEB2AB5F7C52E31LL,0xE5BF61D406CBD5F4LL,0xB248B132FC06C707LL,0x0BEB2AB5F7C52E31LL,4L},{0L,0x0BEB2AB5F7C52E31LL,(-3L),0x0BEB2AB5F7C52E31LL,0L},{0xB248B132FC06C707LL,0x7C935D89A0F2D961LL,0xE5BF61D406CBD5F4LL,4L,0x7C935D89A0F2D961LL}};
static uint16_t g_150 = 0x898AL;
static struct S0 g_153 = {0x85D356E4L,1L,65527UL,0xC3CDCB43L};
static int16_t g_156 = 0L;
static int16_t g_158 = (-10L);
static int32_t g_183 = 8L;



static int32_t  func_1(void);
static uint16_t  func_9(union U3  p_10, int64_t  p_11, uint64_t  p_12, const union U1  p_13, int32_t  p_14);
static struct S0  func_39(uint32_t  p_40, union U1  p_41, union U3  p_42, int8_t  p_43, union U3  p_44);
static union U1  func_47(uint32_t  p_48, uint32_t  p_49, int32_t  p_50, const uint64_t  p_51, uint32_t  p_52);




static int32_t  func_1(void)
{ 
    uint32_t l_2 = 0xEFA9D19AL;
    int32_t l_148 = (-5L);
    int16_t l_157 = 0L;
    union U3 l_170 = {{0xD94EE243L,0x3CAA1AAD41626AC7LL,0x9A96L,0xD4EA75E2L}};
    uint32_t l_181 = 9UL;
    uint64_t l_184 = 0xC589675B37B3BEABLL;
    if ((l_2 > (!((safe_add_func_int64_t_s_s(g_6, (safe_div_func_int8_t_s_s(((0xE4B9L ^ func_9(g_15, g_15.f0.f3, g_15.f0.f3, g_16[0], g_15.f0.f1)) & 250UL), g_35)))) , g_15.f0.f1))))
    { 
        const uint16_t l_165 = 0x1306L;
        int32_t l_171 = 0x4FFDC46FL;
        uint8_t l_178 = 0UL;
        for (g_75 = 0; (g_75 <= 4); g_75 += 1)
        { 
            int8_t l_149 = 0x4BL;
            for (g_30 = 1; (g_30 <= 4); g_30 += 1)
            { 
                int i, j;
                return g_147[g_75][g_75];
            }
            if (l_2)
                break;
            ++g_150;
            for (g_126 = 1; (g_126 <= 4); g_126 += 1)
            { 
                int16_t l_154 = 0L;
                int32_t l_155 = (-1L);
                uint16_t l_159 = 0xADC3L;
                int i, j;
                g_153 = g_15.f0;
                l_159--;
                l_171 = ((safe_unary_minus_func_int32_t_s((((g_147[g_75][g_75] != ((safe_lshift_func_uint8_t_u_u(l_165, 7)) != (safe_div_func_int32_t_s_s((g_147[0][1] && (((safe_rshift_func_int16_t_s_u(((l_170 , g_158) >= l_165), g_15.f0.f3)) >= g_15.f0.f2) | l_170.f0.f3)), g_15.f0.f1)))) , 4L) || g_76))) >= 0x8AL);
            }
        }
        g_142.f0 = (((safe_rshift_func_int8_t_s_u((g_158 > (6L | (g_92 == (((-1L) | 65535UL) > g_156)))), 3)) == g_21) ^ 0x2BE0L);
        l_148 &= (safe_add_func_int32_t_s_s(((l_157 , l_178) , g_153.f3), ((safe_lshift_func_int16_t_s_u(g_126, g_158)) || 0x5E26C2FEL)));
    }
    else
    { 
        int32_t l_182[1][3][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_182[i][j][k] = (-9L);
            }
        }
        for (g_15.f0.f0 = 1; (g_15.f0.f0 <= 4); g_15.f0.f0 += 1)
        { 
            return l_181;
        }
        --l_184;
        l_148 ^= ((1UL > g_142.f0) ^ (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(g_35, (safe_mod_func_int16_t_s_s((g_158 | g_144), g_142.f0)))), l_182[0][1][0])), l_182[0][1][0])));
    }
    return g_153.f3;
}



static uint16_t  func_9(union U3  p_10, int64_t  p_11, uint64_t  p_12, const union U1  p_13, int32_t  p_14)
{ 
    int32_t l_17[4];
    int16_t l_20 = (-10L);
    int32_t l_22 = 1L;
    int32_t l_23 = 3L;
    int32_t l_24 = 0x74A71A6EL;
    int32_t l_28 = 0xF16DE6EAL;
    int8_t l_29 = 0xC7L;
    int32_t l_129[2][3];
    struct S0 l_146 = {0x8C7137E7L,0x5D39A1ACFD07FA3ALL,65527UL,4294967295UL};
    int i, j;
    for (i = 0; i < 4; i++)
        l_17[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_129[i][j] = (-9L);
    }
    l_17[0] |= p_14;
    for (g_15.f0.f1 = (-12); (g_15.f0.f1 <= 3); g_15.f0.f1 = safe_add_func_uint8_t_u_u(g_15.f0.f1, 9))
    { 
        int16_t l_25[5];
        int32_t l_26 = 0x0BFE7374L;
        int32_t l_27 = (-1L);
        union U1 l_117 = {0x4D162ABCL};
        union U3 l_118 = {{0x29050135L,0x2EBD28546E32D400LL,0x3BC8L,4294967288UL}};
        int i;
        for (i = 0; i < 5; i++)
            l_25[i] = 5L;
        g_30--;
        for (p_10.f0.f1 = (-11); (p_10.f0.f1 < (-29)); p_10.f0.f1--)
        { 
            uint64_t l_36[4] = {0xEA1BCA3396D56A42LL,0xEA1BCA3396D56A42LL,0xEA1BCA3396D56A42LL,0xEA1BCA3396D56A42LL};
            int i;
            for (l_22 = 0; (l_22 <= 4); l_22 += 1)
            { 
                struct S0 l_128 = {0UL,2L,0xCF58L,0x45953564L};
                ++l_36[2];
                l_128 = func_39(((0x6C146DF800085869LL ^ (safe_mod_func_uint64_t_u_u((p_12 = ((func_47(l_27, (safe_sub_func_int16_t_s_s(((l_23 = (+p_10.f0.f1)) != (l_26 = l_25[2])), p_10.f0.f3)), p_10.f0.f1, p_12, l_36[2]) , g_15.f0.f0) & g_78)), p_10.f0.f1))) <= 0x47B4L), l_117, l_118, l_117.f0, g_15);
            }
            if (l_129[1][0])
            { 
                uint32_t l_132 = 0x4EA432D7L;
                l_27 = (safe_div_func_uint32_t_u_u((l_132 || ((func_47(p_10.f0.f0, ((l_132 , (safe_div_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int64_t_s(0x7048F12A9C28C321LL)) , p_11), l_118.f0.f2)), 18446744073709551610UL)) == 254UL), g_35))) > 18446744073709551611UL), g_76, g_76, l_28) , l_17[0]) | p_12)), 4294967292UL));
            }
            else
            { 
                uint32_t l_143 = 0x4A5442DFL;
                int32_t l_145[4][2][2];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_145[i][j][k] = 1L;
                    }
                }
                l_145[1][0][1] = (g_144 |= ((((safe_mod_func_uint16_t_u_u((((func_39(g_6, (g_142 = g_16[0]), p_10, l_36[2], g_15) , g_142.f0) <= l_23) <= p_10.f0.f3), l_143)) && l_143) > g_15.f0.f2) <= g_75));
            }
            if (g_144)
                continue;
        }
        if (l_23)
            break;
    }
    l_146 = p_10.f0;
    return l_146.f0;
}



static struct S0  func_39(uint32_t  p_40, union U1  p_41, union U3  p_42, int8_t  p_43, union U3  p_44)
{ 
    int32_t l_119[3];
    struct S0 l_127 = {4294967290UL,0x231240225571F9CALL,0xEE17L,0UL};
    int i;
    for (i = 0; i < 3; i++)
        l_119[i] = (-6L);
    for (p_44.f0.f2 = 0; (p_44.f0.f2 <= 2); p_44.f0.f2 += 1)
    { 
        return g_15.f0;
    }
    for (g_76 = 0; (g_76 >= (-13)); g_76 = safe_sub_func_int64_t_s_s(g_76, 4))
    { 
        g_126 = (g_6 >= (safe_add_func_int64_t_s_s((g_15.f0.f0 , (safe_add_func_int32_t_s_s(g_15.f0.f0, (g_21 < 0xCF271EE0L)))), p_42.f0.f0)));
        return p_42.f0;
    }
    p_41.f0 |= 0xDB61D130L;
    return l_127;
}



static union U1  func_47(uint32_t  p_48, uint32_t  p_49, int32_t  p_50, const uint64_t  p_51, uint32_t  p_52)
{ 
    uint32_t l_56 = 9UL;
    uint16_t l_77 = 0x8352L;
    int32_t l_79 = (-1L);
    int32_t l_91 = 0x3DE95074L;
    struct S0 l_93 = {0xC36E20A5L,0x0D2369E1CF7F8006LL,3UL,0x1B9AEE73L};
    union U1 l_94[2] = {{0L},{0L}};
    const union U1 l_107 = {-3L};
    int32_t l_116[5] = {0x1CE2E091L,0x1CE2E091L,0x1CE2E091L,0x1CE2E091L,0x1CE2E091L};
    int i;
    if ((l_79 = ((l_56 && ((safe_sub_func_uint8_t_u_u((((~(safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((l_77 = (safe_unary_minus_func_int16_t_s(((safe_div_func_int16_t_s_s(((((((safe_rshift_func_uint16_t_u_u(((g_76 = (safe_add_func_uint8_t_u_u((((p_51 != (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(((((((g_35 == 0xCFL) , g_75) > (-8L)) != 6UL) == 1L) >= g_15.f0.f3), 5UL)) > 1L), g_15.f0.f1))) | p_48) && g_75), 0xEDL))) ^ g_15.f0.f0), l_56)) || g_21) < 0x3FD2L) != 0xA70DAEE1FA0179E4LL) , l_56) == l_56), 1UL)) != 0xCEL)))) ^ (-7L)) ^ l_56) > 0xA58EL), g_15.f0.f3)), p_52))) | 0L) && l_77), g_15.f0.f1)) < g_15.f0.f3)) == g_78)))
    { 
        return g_16[0];
    }
    else
    { 
        int64_t l_84 = (-10L);
        int32_t l_85 = 0x258348F9L;
        int32_t l_86 = 0x9571DA88L;
        l_79 = ((g_92 = (safe_sub_func_int64_t_s_s((65532UL < (safe_mul_func_uint16_t_u_u((((l_86 &= (l_85 = l_84)) < (safe_mul_func_uint8_t_u_u((0xEF9AD357L < (((((g_75 = ((safe_lshift_func_uint8_t_u_u((p_48 < 251UL), l_91)) != 1UL)) <= l_56) , 0xB9L) | p_52) || (-2L))), p_50))) >= 0UL), g_15.f0.f2))), l_84))) != g_21);
    }
    l_79 = (l_93 , (((l_93.f0 > g_30) , (l_94[0] , 8UL)) & 4294967289UL));
    l_116[0] &= (((safe_add_func_int32_t_s_s(l_79, (safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int64_t_s((safe_add_func_int64_t_s_s((l_107 , ((g_30 , ((((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((l_94[0].f0 ^= (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0xCFC5L, g_35)) & 9L), 0x56L))) ^ (-1L)), 3)) >= l_93.f0) <= l_93.f1), l_107.f0)) , 0xE710L) , g_16[0].f0) | 0x2BF0L)) && 0x1E4501C6L)), l_56)))), l_79)) <= 18446744073709551615UL) <= p_51) , l_93.f3), p_52)), l_91)))))) <= p_51) , g_76);
    return l_107;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_15.f0.f0, "g_15.f0.f0", print_hash_value);
    transparent_crc(g_15.f0.f1, "g_15.f0.f1", print_hash_value);
    transparent_crc(g_15.f0.f2, "g_15.f0.f2", print_hash_value);
    transparent_crc(g_15.f0.f3, "g_15.f0.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_16[i].f0, "g_16[i].f0", print_hash_value);

    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_147[i][j], "g_147[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_153.f0, "g_153.f0", print_hash_value);
    transparent_crc(g_153.f1, "g_153.f1", print_hash_value);
    transparent_crc(g_153.f2, "g_153.f2", print_hash_value);
    transparent_crc(g_153.f3, "g_153.f3", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
